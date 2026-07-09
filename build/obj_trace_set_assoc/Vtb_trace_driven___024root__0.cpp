// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_trace_driven.h for the primary calling header

#include "Vtb_trace_driven__pch.h"

VlCoroutine Vtb_trace_driven___024root___eval_initial__TOP__Vtiming__0(Vtb_trace_driven___024root* vlSelf);
VlCoroutine Vtb_trace_driven___024root___eval_initial__TOP__Vtiming__1(Vtb_trace_driven___024root* vlSelf);

void Vtb_trace_driven___024root___eval_initial(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___eval_initial\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_trace_driven___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_trace_driven___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_trace_driven___024root____VbeforeTrig_hb5da1696__0(Vtb_trace_driven___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_trace_driven___024root___eval_initial__TOP__Vtiming__0(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_trace_driven__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_trace_driven__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_tb_trace_driven__DOT__do_op__0__rw;
    __Vtask_tb_trace_driven__DOT__do_op__0__rw = 0;
    IData/*31:0*/ __Vtask_tb_trace_driven__DOT__do_op__0__addr;
    __Vtask_tb_trace_driven__DOT__do_op__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_trace_driven__DOT__do_op__0__wdata;
    __Vtask_tb_trace_driven__DOT__do_op__0__wdata = 0;
    CData/*0:0*/ __Vtask_tb_trace_driven__DOT__do_op__1__rw;
    __Vtask_tb_trace_driven__DOT__do_op__1__rw = 0;
    IData/*31:0*/ __Vtask_tb_trace_driven__DOT__do_op__1__addr;
    __Vtask_tb_trace_driven__DOT__do_op__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_trace_driven__DOT__do_op__1__wdata;
    __Vtask_tb_trace_driven__DOT__do_op__1__wdata = 0;
    // Body
    vlSelfRef.tb_trace_driven__DOT__clk = 0U;
    vlSelfRef.tb_trace_driven__DOT__rst_n = 0U;
    vlSelfRef.tb_trace_driven__DOT__cpu_req = 0U;
    vlSelfRef.tb_trace_driven__DOT__cpu_we = 0U;
    vlSelfRef.tb_trace_driven__DOT__cpu_addr = 0U;
    vlSelfRef.tb_trace_driven__DOT__cpu_wdata = 0U;
    vlSelfRef.tb_trace_driven__DOT__hits = 0U;
    vlSelfRef.tb_trace_driven__DOT__misses = 0U;
    vlSelfRef.tb_trace_driven__DOT__n_ops = 0U;
    tb_trace_driven__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_trace_driven__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_trace_driven___024root____VbeforeTrig_hb5da1696__0(vlSelf, 
                                                               "@(posedge tb_trace_driven.clk)");
        co_await vlSelfRef.__VtrigSched_hb5da1696__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_trace_driven.clk)", 
                                                             "tb/tb_trace_driven.v", 
                                                             114);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_trace_driven__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_trace_driven__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_trace_driven__DOT__rst_n = 1U;
    Vtb_trace_driven___024root____VbeforeTrig_hb5da1696__0(vlSelf, 
                                                           "@(posedge tb_trace_driven.clk)");
    co_await vlSelfRef.__VtrigSched_hb5da1696__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_trace_driven.clk)", 
                                                         "tb/tb_trace_driven.v", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- tb_trace_driven: set_associative_cache (NUM_WAYS=2) ---\n",0);
    vlSelfRef.tb_trace_driven__DOT__fd = VL_FOPEN_NN("tb/trace_random1.txt"s
                                                     , "r"s);
    ;
    if (VL_UNLIKELY(((0U == vlSelfRef.tb_trace_driven__DOT__fd)))) {
        VL_WRITEF_NX("ERROR: could not open tb/trace_random1.txt -- this path assumes you run the simulation binary from your repo root (cache-controller/), matching every other command in this project\n",0);
        VL_FINISH_MT("tb/tb_trace_driven.v", 127, "");
    }
    while (true) {
        vlSelfRef.tb_trace_driven__DOT____VlemExpr_0 
            = (vlSelfRef.tb_trace_driven__DOT__fd ? feof(VL_CVT_I_FP(vlSelfRef.tb_trace_driven__DOT__fd)) : true);
        if (!((! vlSelfRef.tb_trace_driven__DOT____VlemExpr_0))) break;
        vlSelfRef.tb_trace_driven__DOT__scan_ret = VL_FSCANF_INX(vlSelfRef.tb_trace_driven__DOT__fd,"%s %h\n",2
                                                                 , '#',64,&(vlSelfRef.tb_trace_driven__DOT__op_str)
                                                                 , '#',32,&(vlSelfRef.tb_trace_driven__DOT__trace_addr)) ;
        if ((2U == vlSelfRef.tb_trace_driven__DOT__scan_ret)) {
            vlSelfRef.tb_trace_driven__DOT__n_ops = 
                ((IData)(1U) + vlSelfRef.tb_trace_driven__DOT__n_ops);
            if ((0x0000000000000057ULL == vlSelfRef.tb_trace_driven__DOT__op_str)) {
                __Vtask_tb_trace_driven__DOT__do_op__0__wdata 
                    = vlSelfRef.tb_trace_driven__DOT__trace_addr;
                __Vtask_tb_trace_driven__DOT__do_op__0__addr 
                    = vlSelfRef.tb_trace_driven__DOT__trace_addr;
                __Vtask_tb_trace_driven__DOT__do_op__0__rw = 1U;
                vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__rw 
                    = __Vtask_tb_trace_driven__DOT__do_op__0__rw;
                vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__addr 
                    = __Vtask_tb_trace_driven__DOT__do_op__0__addr;
                vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__wdata 
                    = __Vtask_tb_trace_driven__DOT__do_op__0__wdata;
            } else {
                __Vtask_tb_trace_driven__DOT__do_op__1__wdata = 0U;
                __Vtask_tb_trace_driven__DOT__do_op__1__addr 
                    = vlSelfRef.tb_trace_driven__DOT__trace_addr;
                __Vtask_tb_trace_driven__DOT__do_op__1__rw = 0U;
                vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__rw 
                    = __Vtask_tb_trace_driven__DOT__do_op__1__rw;
                vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__addr 
                    = __Vtask_tb_trace_driven__DOT__do_op__1__addr;
                vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__wdata 
                    = __Vtask_tb_trace_driven__DOT__do_op__1__wdata;
            }
            Vtb_trace_driven___024root____VbeforeTrig_hb5da1696__0(vlSelf, 
                                                                   "@(posedge tb_trace_driven.clk)");
            co_await vlSelfRef.__VtrigSched_hb5da1696__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_trace_driven.clk)", 
                                                                 "tb/tb_trace_driven.v", 
                                                                 85);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                = vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__addr;
            vlSelfRef.tb_trace_driven__DOT__cpu_we 
                = vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__rw;
            vlSelfRef.tb_trace_driven__DOT__cpu_wdata 
                = vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__wdata;
            vlSelfRef.tb_trace_driven__DOT__cpu_req = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "tb/tb_trace_driven.v", 
                                                 90);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__was_miss 
                = vlSelfRef.tb_trace_driven__DOT__dut__DOT__cpu_stall;
            if (vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__was_miss) {
                vlSelfRef.tb_trace_driven__DOT__misses 
                    = ((IData)(1U) + vlSelfRef.tb_trace_driven__DOT__misses);
            } else {
                vlSelfRef.tb_trace_driven__DOT__hits 
                    = ((IData)(1U) + vlSelfRef.tb_trace_driven__DOT__hits);
            }
            while (vlSelfRef.tb_trace_driven__DOT__dut__DOT__cpu_stall) {
                Vtb_trace_driven___024root____VbeforeTrig_hb5da1696__0(vlSelf, 
                                                                       "@(posedge tb_trace_driven.clk)");
                co_await vlSelfRef.__VtrigSched_hb5da1696__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_trace_driven.clk)", 
                                                                     "tb/tb_trace_driven.v", 
                                                                     94);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "tb/tb_trace_driven.v", 
                                                     95);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            Vtb_trace_driven___024root____VbeforeTrig_hb5da1696__0(vlSelf, 
                                                                   "@(posedge tb_trace_driven.clk)");
            co_await vlSelfRef.__VtrigSched_hb5da1696__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_trace_driven.clk)", 
                                                                 "tb/tb_trace_driven.v", 
                                                                 97);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "tb/tb_trace_driven.v", 
                                                 98);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_trace_driven__DOT__cpu_req = 0U;
        }
    }
    VL_FCLOSE_I(vlSelfRef.tb_trace_driven__DOT__fd); vlSelfRef.tb_trace_driven__DOT__hit_rate 
        = ((100.0 * VL_ISTOR_D_I(32, vlSelfRef.tb_trace_driven__DOT__hits)) 
           / VL_ISTOR_D_I(32, (vlSelfRef.tb_trace_driven__DOT__hits 
                               + vlSelfRef.tb_trace_driven__DOT__misses)));
    vlSelfRef.tb_trace_driven__DOT__amat = (1.0 + (100.0 
                                                   * 
                                                   ((1.0 
                                                     * 
                                                     VL_ISTOR_D_I(32, vlSelfRef.tb_trace_driven__DOT__misses)) 
                                                    / 
                                                    VL_ISTOR_D_I(32, 
                                                                 (vlSelfRef.tb_trace_driven__DOT__hits 
                                                                  + vlSelfRef.tb_trace_driven__DOT__misses)))));
    VL_WRITEF_NX("\nops=%0d hits=%0d misses=%0d hit_rate=%0.1f%% AMAT=%0.2f cycles\n",5
                 , '~',32,vlSelfRef.tb_trace_driven__DOT__n_ops
                 , '~',32,vlSelfRef.tb_trace_driven__DOT__hits
                 , '~',32,vlSelfRef.tb_trace_driven__DOT__misses
                 , 'D',vlSelfRef.tb_trace_driven__DOT__hit_rate
                 , 'D',vlSelfRef.tb_trace_driven__DOT__amat);
    VL_FINISH_MT("tb/tb_trace_driven.v", 147, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_trace_driven___024root___eval_initial__TOP__Vtiming__1(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/tb_trace_driven.v", 
                                             80);
        vlSelfRef.tb_trace_driven__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_trace_driven__DOT__clk)));
    }
    co_return;
}

bool Vtb_trace_driven___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_trace_driven___024root___act_comb__TOP__0(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___act_comb__TOP__0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r = 0U;
    if ((vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
         [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                 >> 4U))][0U] & (vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array
                                 [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                         >> 4U))][0U] 
                                 == (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                     >> 7U)))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r = 1U;
    } else {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r = 0U;
    }
    if ((vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
         [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                 >> 4U))][1U] & (vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array
                                 [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                         >> 4U))][1U] 
                                 == (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                     >> 7U)))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r = 1U;
    }
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 0U;
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                         [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 4U))][0U])))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                         [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 4U))][1U])))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
                         [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 4U))][0U])))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
                          [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                  >> 4U))][1U])) & 
               (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r))))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r = 1U;
    }
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__cpu_stall 
        = ((0U != (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state)) 
           | ((~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r)) 
              & (IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req)));
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[0U] 
        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r][0U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[1U] 
        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r][1U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[2U] 
        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r][2U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[3U] 
        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r][3U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__need_writeback 
        = (vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
           [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                   >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r] 
           & vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array
           [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                   >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r]);
}

void Vtb_trace_driven___024root___nba_sequent__TOP__0(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___nba_sequent__TOP__0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__s;
    __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__s = 0;
    CData/*0:0*/ __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__w;
    __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__w = 0;
    CData/*0:0*/ __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__old_val;
    __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__old_val = 0;
    CData/*2:0*/ __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__s;
    __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__s = 0;
    CData/*0:0*/ __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__w;
    __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__w = 0;
    CData/*0:0*/ __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__old_val;
    __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__old_val = 0;
    CData/*1:0*/ __Vdly__tb_trace_driven__DOT__dut__DOT__state;
    __Vdly__tb_trace_driven__DOT__dut__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_trace_driven__DOT__mem__DOT__busy;
    __Vdly__tb_trace_driven__DOT__mem__DOT__busy = 0;
    CData/*0:0*/ __Vdly__tb_trace_driven__DOT__mem__DOT__op_is_write;
    __Vdly__tb_trace_driven__DOT__mem__DOT__op_is_write = 0;
    CData/*2:0*/ __Vdly__tb_trace_driven__DOT__mem__DOT__cnt;
    __Vdly__tb_trace_driven__DOT__mem__DOT__cnt = 0;
    IData/*31:0*/ __Vdly__tb_trace_driven__DOT__mem__DOT__addr_latched;
    __Vdly__tb_trace_driven__DOT__mem__DOT__addr_latched = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched;
    VL_ZERO_W(128, __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched);
    IData/*31:0*/ __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v0;
    __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_trace_driven__DOT__dut__DOT__data_array__v0;
    __VdlyDim0__tb_trace_driven__DOT__dut__DOT__data_array__v0 = 0;
    CData/*0:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v0;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v0 = 0;
    CData/*2:0*/ __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v0;
    __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v0;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_trace_driven__DOT__dut__DOT__dirty_array__v0;
    __VdlyDim0__tb_trace_driven__DOT__dut__DOT__dirty_array__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__dirty_array__v0;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__dirty_array__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v0;
    __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v0;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v0;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v1;
    __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v1 = 0;
    CData/*2:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v1;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v1;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_trace_driven__DOT__dut__DOT__lru_counter__v2;
    __VdlyDim0__tb_trace_driven__DOT__dut__DOT__lru_counter__v2 = 0;
    CData/*2:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v2;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v2;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v2 = 0;
    CData/*0:0*/ __VdlyDim0__tb_trace_driven__DOT__dut__DOT__valid_array__v0;
    __VdlyDim0__tb_trace_driven__DOT__dut__DOT__valid_array__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__valid_array__v0;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__valid_array__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v0;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v0 = 0;
    IData/*24:0*/ __VdlyVal__tb_trace_driven__DOT__dut__DOT__tag_array__v0;
    __VdlyVal__tb_trace_driven__DOT__dut__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_trace_driven__DOT__dut__DOT__tag_array__v0;
    __VdlyDim0__tb_trace_driven__DOT__dut__DOT__tag_array__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__tag_array__v0;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__tag_array__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v1;
    __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v1 = 0;
    CData/*0:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v1;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v1 = 0;
    CData/*2:0*/ __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v1;
    __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v1 = 0;
    CData/*0:0*/ __VdlyVal__tb_trace_driven__DOT__dut__DOT__dirty_array__v1;
    __VdlyVal__tb_trace_driven__DOT__dut__DOT__dirty_array__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_trace_driven__DOT__dut__DOT__dirty_array__v1;
    __VdlyDim0__tb_trace_driven__DOT__dut__DOT__dirty_array__v1 = 0;
    CData/*2:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__dirty_array__v1;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__dirty_array__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v2;
    __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v2 = 0;
    CData/*0:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v2;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v2 = 0;
    CData/*2:0*/ __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v2;
    __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v2;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v3;
    __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v3 = 0;
    CData/*0:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v3;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v3 = 0;
    CData/*2:0*/ __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v3;
    __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v3;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v4;
    __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v4 = 0;
    CData/*0:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v4;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v4 = 0;
    CData/*2:0*/ __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v4;
    __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v4 = 0;
    CData/*0:0*/ __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v3;
    __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v3 = 0;
    CData/*2:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v3;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v3;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v3 = 0;
    CData/*0:0*/ __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v4;
    __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v4 = 0;
    CData/*2:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v4;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v4;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v4 = 0;
    CData/*0:0*/ __VdlyDim0__tb_trace_driven__DOT__dut__DOT__lru_counter__v5;
    __VdlyDim0__tb_trace_driven__DOT__dut__DOT__lru_counter__v5 = 0;
    CData/*2:0*/ __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v5;
    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v5;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v1;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_trace_driven__DOT__mem__DOT__backing_written__v0;
    __VdlyDim0__tb_trace_driven__DOT__mem__DOT__backing_written__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v0;
    __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v0 = 0;
    CData/*7:0*/ __VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v0;
    __VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_trace_driven__DOT__mem__DOT__backing_data__v0;
    __VdlySet__tb_trace_driven__DOT__mem__DOT__backing_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v1;
    __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v1 = 0;
    CData/*7:0*/ __VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v1;
    __VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v2;
    __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v2 = 0;
    CData/*7:0*/ __VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v2;
    __VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v3;
    __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v3 = 0;
    CData/*7:0*/ __VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v3;
    __VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tb_trace_driven__DOT__mem__DOT__backing_written__v1;
    __VdlyDim0__tb_trace_driven__DOT__mem__DOT__backing_written__v1 = 0;
    // Body
    __Vdly__tb_trace_driven__DOT__mem__DOT__busy = vlSelfRef.tb_trace_driven__DOT__mem__DOT__busy;
    __Vdly__tb_trace_driven__DOT__mem__DOT__op_is_write 
        = vlSelfRef.tb_trace_driven__DOT__mem__DOT__op_is_write;
    __Vdly__tb_trace_driven__DOT__mem__DOT__cnt = vlSelfRef.tb_trace_driven__DOT__mem__DOT__cnt;
    __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched[0U] 
        = vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[0U];
    __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched[1U] 
        = vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[1U];
    __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched[2U] 
        = vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[2U];
    __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched[3U] 
        = vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[3U];
    __Vdly__tb_trace_driven__DOT__mem__DOT__addr_latched 
        = vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched;
    __VdlySet__tb_trace_driven__DOT__mem__DOT__backing_data__v0 = 0U;
    __Vdly__tb_trace_driven__DOT__dut__DOT__state = vlSelfRef.tb_trace_driven__DOT__dut__DOT__state;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v2 = 0U;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v3 = 0U;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v0 = 0U;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v1 = 0U;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v2 = 0U;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v3 = 0U;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v4 = 0U;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v5 = 0U;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v0 = 0U;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v1 = 0U;
    __VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_trace_driven__DOT__rst_n)))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__wi = 2U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__si = 8U;
    }
    if (vlSelfRef.tb_trace_driven__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state))) {
            if (((IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req) 
                 & (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r)))) {
                __Vdly__tb_trace_driven__DOT__dut__DOT__state 
                    = ((IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__need_writeback)
                        ? 1U : 2U);
            } else if (((IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req) 
                        & (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r))) {
                __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__w 
                    = vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r;
                if (vlSelfRef.tb_trace_driven__DOT__cpu_we) {
                    __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v0 
                        = vlSelfRef.tb_trace_driven__DOT__cpu_wdata;
                    __VdlyDim0__tb_trace_driven__DOT__dut__DOT__data_array__v0 
                        = (3U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 2U));
                    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v0 
                        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r;
                    __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v0 
                        = (7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 4U));
                    __VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v0 = 1U;
                    __VdlyDim0__tb_trace_driven__DOT__dut__DOT__dirty_array__v0 
                        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r;
                    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__dirty_array__v0 
                        = (7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 4U));
                }
                __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__s 
                    = (7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                             >> 4U));
                __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__old_val 
                    = vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                    [__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__s]
                    [__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__w];
                if (((IData)(__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__w) 
                     & (vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                        [__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__s][0U] 
                        > (IData)(__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__old_val)))) {
                    __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v0 
                        = (1U & ((IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                                         [__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__s][0U]) 
                                 - (IData)(1U)));
                    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v0 
                        = __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__s;
                    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v0 = 1U;
                }
                if (((~ (IData)(__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__w)) 
                     & (vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                        [__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__s][1U] 
                        > (IData)(__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__old_val)))) {
                    __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v1 
                        = (1U & ((IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                                         [__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__s][1U]) 
                                 - (IData)(1U)));
                    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v1 
                        = __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__s;
                    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v1 = 1U;
                }
                __VdlyDim0__tb_trace_driven__DOT__dut__DOT__lru_counter__v2 
                    = __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__w;
                __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v2 
                    = __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__2__s;
                __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v2 = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_trace_driven__DOT__mem_wr_done) {
                __Vdly__tb_trace_driven__DOT__dut__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_trace_driven__DOT__mem_ready) {
                vlSelfRef.tb_trace_driven__DOT__dut__DOT__wj = 4U;
                __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__w 
                    = vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r;
                __VdlyDim0__tb_trace_driven__DOT__dut__DOT__valid_array__v0 
                    = vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r;
                __VdlyDim1__tb_trace_driven__DOT__dut__DOT__valid_array__v0 
                    = (7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                             >> 4U));
                __VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v0 = 1U;
                __VdlyVal__tb_trace_driven__DOT__dut__DOT__tag_array__v0 
                    = (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                       >> 7U);
                __VdlyDim0__tb_trace_driven__DOT__dut__DOT__tag_array__v0 
                    = vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r;
                __VdlyDim1__tb_trace_driven__DOT__dut__DOT__tag_array__v0 
                    = (7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                             >> 4U));
                __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v1 
                    = (((IData)(vlSelfRef.tb_trace_driven__DOT__cpu_we) 
                        & (0U == (0x0000000cU & vlSelfRef.tb_trace_driven__DOT__cpu_addr)))
                        ? vlSelfRef.tb_trace_driven__DOT__cpu_wdata
                        : vlSelfRef.tb_trace_driven__DOT__mem_rdata[0U]);
                __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v1 
                    = vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r;
                __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v1 
                    = (7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                             >> 4U));
                __VdlyVal__tb_trace_driven__DOT__dut__DOT__dirty_array__v1 
                    = vlSelfRef.tb_trace_driven__DOT__cpu_we;
                __VdlyDim0__tb_trace_driven__DOT__dut__DOT__dirty_array__v1 
                    = vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r;
                __VdlyDim1__tb_trace_driven__DOT__dut__DOT__dirty_array__v1 
                    = (7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                             >> 4U));
                __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__s 
                    = (7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                             >> 4U));
                __Vdly__tb_trace_driven__DOT__dut__DOT__state = 0U;
                __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v2 
                    = (((IData)(vlSelfRef.tb_trace_driven__DOT__cpu_we) 
                        & (4U == (0x0000000cU & vlSelfRef.tb_trace_driven__DOT__cpu_addr)))
                        ? vlSelfRef.tb_trace_driven__DOT__cpu_wdata
                        : vlSelfRef.tb_trace_driven__DOT__mem_rdata[1U]);
                __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v2 
                    = vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r;
                __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v2 
                    = (7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                             >> 4U));
                __VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v2 = 1U;
                __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__old_val 
                    = vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                    [__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__s]
                    [__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__w];
                __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v3 
                    = (((IData)(vlSelfRef.tb_trace_driven__DOT__cpu_we) 
                        & (8U == (0x0000000cU & vlSelfRef.tb_trace_driven__DOT__cpu_addr)))
                        ? vlSelfRef.tb_trace_driven__DOT__cpu_wdata
                        : vlSelfRef.tb_trace_driven__DOT__mem_rdata[2U]);
                __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v3 
                    = vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r;
                __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v3 
                    = (7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                             >> 4U));
                __VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v3 = 1U;
                __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v4 
                    = (((IData)(vlSelfRef.tb_trace_driven__DOT__cpu_we) 
                        & (0x0000000cU == (0x0000000cU 
                                           & vlSelfRef.tb_trace_driven__DOT__cpu_addr)))
                        ? vlSelfRef.tb_trace_driven__DOT__cpu_wdata
                        : vlSelfRef.tb_trace_driven__DOT__mem_rdata[3U]);
                __VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v4 
                    = vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r;
                __VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v4 
                    = (7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                             >> 4U));
                if (((IData)(__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__w) 
                     & (vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                        [__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__s][0U] 
                        > (IData)(__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__old_val)))) {
                    __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v3 
                        = (1U & ((IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                                         [__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__s][0U]) 
                                 - (IData)(1U)));
                    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v3 
                        = __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__s;
                    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v3 = 1U;
                }
                if (((~ (IData)(__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__w)) 
                     & (vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                        [__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__s][1U] 
                        > (IData)(__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__old_val)))) {
                    __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v4 
                        = (1U & ((IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                                         [__Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__s][1U]) 
                                 - (IData)(1U)));
                    __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v4 
                        = __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__s;
                    __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v4 = 1U;
                }
                __VdlyDim0__tb_trace_driven__DOT__dut__DOT__lru_counter__v5 
                    = __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__w;
                __VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v5 
                    = __Vtask_tb_trace_driven__DOT__dut__DOT__bump_lru__3__s;
                __VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v5 = 1U;
            }
        }
    } else {
        __Vdly__tb_trace_driven__DOT__dut__DOT__state = 0U;
        __VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v1 = 1U;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v0) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[__VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v0][0U] 
            = __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v0;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v1) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[__VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v1][1U] 
            = __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v1;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v2) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[__VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v2][__VdlyDim0__tb_trace_driven__DOT__dut__DOT__lru_counter__v2] = 1U;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v3) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[__VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v3][0U] 
            = __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v3;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v4) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[__VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v4][1U] 
            = __VdlyVal__tb_trace_driven__DOT__dut__DOT__lru_counter__v4;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__lru_counter__v5) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[__VdlyDim1__tb_trace_driven__DOT__dut__DOT__lru_counter__v5][__VdlyDim0__tb_trace_driven__DOT__dut__DOT__lru_counter__v5] = 1U;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v0) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[__VdlyDim1__tb_trace_driven__DOT__dut__DOT__dirty_array__v0][__VdlyDim0__tb_trace_driven__DOT__dut__DOT__dirty_array__v0] = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array[__VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v0][__VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v0][__VdlyDim0__tb_trace_driven__DOT__dut__DOT__data_array__v0] 
            = __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v0;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v1) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[0U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[0U][1U] = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[1U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[1U][1U] = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[2U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[2U][1U] = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[3U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[3U][1U] = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[4U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[4U][1U] = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[5U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[5U][1U] = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[6U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[6U][1U] = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[7U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter[7U][1U] = 1U;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v0) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[__VdlyDim1__tb_trace_driven__DOT__dut__DOT__dirty_array__v1][__VdlyDim0__tb_trace_driven__DOT__dut__DOT__dirty_array__v1] 
            = __VdlyVal__tb_trace_driven__DOT__dut__DOT__dirty_array__v1;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v1) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[0U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[0U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[1U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[1U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[2U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[2U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[3U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[3U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[4U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[4U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[5U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[5U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[6U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[6U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[7U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array[7U][1U] = 0U;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v0) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array[__VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v1][__VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v1][0U] 
            = __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v1;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[__VdlyDim1__tb_trace_driven__DOT__dut__DOT__valid_array__v0][__VdlyDim0__tb_trace_driven__DOT__dut__DOT__valid_array__v0] = 1U;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v1) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[0U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[0U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[1U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[1U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[2U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[2U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[3U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[3U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[4U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[4U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[5U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[5U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[6U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[6U][1U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[7U][0U] = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array[7U][1U] = 0U;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v2) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array[__VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v2][__VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v2][1U] 
            = __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v2;
    }
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__data_array__v3) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array[__VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v3][__VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v3][2U] 
            = __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v3;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array[__VdlyDim2__tb_trace_driven__DOT__dut__DOT__data_array__v4][__VdlyDim1__tb_trace_driven__DOT__dut__DOT__data_array__v4][3U] 
            = __VdlyVal__tb_trace_driven__DOT__dut__DOT__data_array__v4;
    }
    if (vlSelfRef.tb_trace_driven__DOT__rst_n) {
        vlSelfRef.tb_trace_driven__DOT__mem_ready = 0U;
        vlSelfRef.tb_trace_driven__DOT__mem_wr_done = 0U;
        if (((~ (IData)(vlSelfRef.tb_trace_driven__DOT__mem__DOT__busy)) 
             & (2U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state)))) {
            __Vdly__tb_trace_driven__DOT__mem__DOT__busy = 1U;
            __Vdly__tb_trace_driven__DOT__mem__DOT__op_is_write = 0U;
            __Vdly__tb_trace_driven__DOT__mem__DOT__cnt = 0U;
            __Vdly__tb_trace_driven__DOT__mem__DOT__addr_latched 
                = (0xfffffff0U & vlSelfRef.tb_trace_driven__DOT__cpu_addr);
        } else if (((~ (IData)(vlSelfRef.tb_trace_driven__DOT__mem__DOT__busy)) 
                    & (1U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state)))) {
            __Vdly__tb_trace_driven__DOT__mem__DOT__busy = 1U;
            __Vdly__tb_trace_driven__DOT__mem__DOT__op_is_write = 1U;
            __Vdly__tb_trace_driven__DOT__mem__DOT__cnt = 0U;
            __Vdly__tb_trace_driven__DOT__mem__DOT__addr_latched 
                = ((vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array
                    [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                            >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r] 
                    << 7U) | (0x00000070U & vlSelfRef.tb_trace_driven__DOT__cpu_addr));
            __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched[0U] 
                = vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[0U];
            __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched[1U] 
                = vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[1U];
            __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched[2U] 
                = vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[2U];
            __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched[3U] 
                = vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[3U];
        } else if (vlSelfRef.tb_trace_driven__DOT__mem__DOT__busy) {
            if ((3U == (IData)(vlSelfRef.tb_trace_driven__DOT__mem__DOT__cnt))) {
                __Vdly__tb_trace_driven__DOT__mem__DOT__busy = 0U;
                if (VL_UNLIKELY((vlSelfRef.tb_trace_driven__DOT__mem__DOT__op_is_write))) {
                    vlSelfRef.tb_trace_driven__DOT__mem__DOT__wj = 4U;
                    __VdlyDim0__tb_trace_driven__DOT__mem__DOT__backing_written__v0 
                        = (0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                                          >> 4U));
                    vlSelfRef.__VdlyCommitQueuetb_trace_driven__DOT__mem__DOT__backing_written.enqueue(1U, (IData)(__VdlyDim0__tb_trace_driven__DOT__mem__DOT__backing_written__v0));
                    vlSelfRef.tb_trace_driven__DOT__mem_wr_done = 1U;
                    __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v0 
                        = vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[0U];
                    __VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v0 
                        = (0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                                          >> 4U));
                    __VdlySet__tb_trace_driven__DOT__mem__DOT__backing_data__v0 = 1U;
                    __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v1 
                        = vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[1U];
                    __VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v1 
                        = (0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                                          >> 4U));
                    __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v2 
                        = vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[2U];
                    __VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v2 
                        = (0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                                          >> 4U));
                    __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v3 
                        = vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[3U];
                    __VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v3 
                        = (0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                                          >> 4U));
                    VL_WRITEF_NX("[%0t] mem: WRITE-BACK line_idx=%0d addr=%08h word0=%08h\n",5, 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',8,(0x000000ffU 
                                          & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                                             >> 4U))
                                 , '#',32,vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched
                                 , '#',32,vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[0U]);
                } else {
                    vlSelfRef.tb_trace_driven__DOT__mem_ready = 1U;
                }
            } else {
                __Vdly__tb_trace_driven__DOT__mem__DOT__cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_trace_driven__DOT__mem__DOT__cnt)));
            }
        }
    } else {
        vlSelfRef.tb_trace_driven__DOT__mem__DOT__li = 0U;
        __Vdly__tb_trace_driven__DOT__mem__DOT__busy = 0U;
        __Vdly__tb_trace_driven__DOT__mem__DOT__cnt = 0U;
        vlSelfRef.tb_trace_driven__DOT__mem_ready = 0U;
        vlSelfRef.tb_trace_driven__DOT__mem_wr_done = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.tb_trace_driven__DOT__mem__DOT__li)) {
            __VdlyDim0__tb_trace_driven__DOT__mem__DOT__backing_written__v1 
                = (0x000000ffU & vlSelfRef.tb_trace_driven__DOT__mem__DOT__li);
            vlSelfRef.__VdlyCommitQueuetb_trace_driven__DOT__mem__DOT__backing_written.enqueue(0U, (IData)(__VdlyDim0__tb_trace_driven__DOT__mem__DOT__backing_written__v1));
            vlSelfRef.tb_trace_driven__DOT__mem__DOT__li 
                = ((IData)(1U) + vlSelfRef.tb_trace_driven__DOT__mem__DOT__li);
        }
    }
    vlSelfRef.tb_trace_driven__DOT__mem__DOT__busy 
        = __Vdly__tb_trace_driven__DOT__mem__DOT__busy;
    vlSelfRef.tb_trace_driven__DOT__mem__DOT__op_is_write 
        = __Vdly__tb_trace_driven__DOT__mem__DOT__op_is_write;
    vlSelfRef.tb_trace_driven__DOT__mem__DOT__cnt = __Vdly__tb_trace_driven__DOT__mem__DOT__cnt;
    vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[0U] 
        = __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched[0U];
    vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[1U] 
        = __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched[1U];
    vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[2U] 
        = __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched[2U];
    vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched[3U] 
        = __Vdly__tb_trace_driven__DOT__mem__DOT__wdata_latched[3U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__state 
        = __Vdly__tb_trace_driven__DOT__dut__DOT__state;
    vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
        = __Vdly__tb_trace_driven__DOT__mem__DOT__addr_latched;
    vlSelfRef.__VdlyCommitQueuetb_trace_driven__DOT__mem__DOT__backing_written.commit(vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_written);
    if (__VdlySet__tb_trace_driven__DOT__dut__DOT__valid_array__v0) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array[__VdlyDim1__tb_trace_driven__DOT__dut__DOT__tag_array__v0][__VdlyDim0__tb_trace_driven__DOT__dut__DOT__tag_array__v0] 
            = __VdlyVal__tb_trace_driven__DOT__dut__DOT__tag_array__v0;
    }
    if (__VdlySet__tb_trace_driven__DOT__mem__DOT__backing_data__v0) {
        vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_data[__VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v0][0U] 
            = __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v0;
        vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_data[__VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v1][1U] 
            = __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v1;
        vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_data[__VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v2][2U] 
            = __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v2;
        vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_data[__VdlyDim1__tb_trace_driven__DOT__mem__DOT__backing_data__v3][3U] 
            = __VdlyVal__tb_trace_driven__DOT__mem__DOT__backing_data__v3;
    }
    if (vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_written
        [(0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                         >> 4U))]) {
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[0U] 
            = vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                             >> 4U))][0U];
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[1U] 
            = vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                             >> 4U))][1U];
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[2U] 
            = vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                             >> 4U))][2U];
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[3U] 
            = vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                             >> 4U))][3U];
    } else {
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[0U] 
            = vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched;
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[1U] 
            = ((IData)(4U) + vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched);
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[2U] 
            = ((IData)(8U) + vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched);
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[3U] 
            = ((IData)(0x0000000cU) + vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched);
    }
}

void Vtb_trace_driven___024root___nba_comb__TOP__0(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___nba_comb__TOP__0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 0U;
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                         [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 4U))][0U])))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                         [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 4U))][1U])))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
                         [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 4U))][0U])))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
                          [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                  >> 4U))][1U])) & 
               (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r))))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r = 1U;
    }
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r = 0U;
    if ((vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
         [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                 >> 4U))][0U] & (vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array
                                 [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                         >> 4U))][0U] 
                                 == (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                     >> 7U)))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r = 1U;
    } else {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r = 0U;
    }
    if ((vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
         [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                 >> 4U))][1U] & (vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array
                                 [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                         >> 4U))][1U] 
                                 == (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                     >> 7U)))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r = 1U;
    }
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[0U] 
        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r][0U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[1U] 
        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r][1U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[2U] 
        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r][2U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[3U] 
        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r][3U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__need_writeback 
        = (vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
           [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                   >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r] 
           & vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array
           [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                   >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r]);
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__cpu_stall 
        = ((0U != (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state)) 
           | ((~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r)) 
              & (IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req)));
}

void Vtb_trace_driven___024root___timing_ready(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___timing_ready\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb5da1696__0.ready("@(posedge tb_trace_driven.clk)");
    }
}

void Vtb_trace_driven___024root___timing_resume(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___timing_resume\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hb5da1696__0.moveToResumeQueue(
                                                          "@(posedge tb_trace_driven.clk)");
    vlSelfRef.__VtrigSched_hb5da1696__0.resume("@(posedge tb_trace_driven.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_trace_driven___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_trace_driven___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_trace_driven___024root___eval_phase__act(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___eval_phase__act\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_trace_driven__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_trace_driven__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_trace_driven__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_trace_driven__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_trace_driven__DOT__clk__0 
            = vlSelfRef.tb_trace_driven__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_trace_driven__DOT__rst_n__0 
            = vlSelfRef.tb_trace_driven__DOT__rst_n;
    }
    Vtb_trace_driven___024root___timing_ready(vlSelf);
    Vtb_trace_driven___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_trace_driven___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_trace_driven___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_trace_driven___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_trace_driven___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_trace_driven___024root___act_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_trace_driven___024root___eval_phase__inact(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___eval_phase__inact\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_trace_driven.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_trace_driven___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_trace_driven___024root___eval_phase__nba(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___eval_phase__nba\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_trace_driven___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_trace_driven___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_trace_driven___024root___nba_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[5U] = 1U;
            }
        }
        Vtb_trace_driven___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_trace_driven___024root___eval(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___eval\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_trace_driven___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_trace_driven.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_trace_driven.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_trace_driven___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_trace_driven.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_trace_driven___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_trace_driven___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_trace_driven___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_trace_driven___024root____VbeforeTrig_hb5da1696__0(Vtb_trace_driven___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root____VbeforeTrig_hb5da1696__0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_trace_driven__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_trace_driven__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_trace_driven__DOT__clk__0 
        = vlSelfRef.tb_trace_driven__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb5da1696__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb5da1696__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb5da1696__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb5da1696__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb5da1696__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_trace_driven___024root___eval_debug_assertions(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___eval_debug_assertions\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
