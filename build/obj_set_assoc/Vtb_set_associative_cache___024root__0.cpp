// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_set_associative_cache.h for the primary calling header

#include "Vtb_set_associative_cache__pch.h"

VlCoroutine Vtb_set_associative_cache___024root___eval_initial__TOP__Vtiming__0(Vtb_set_associative_cache___024root* vlSelf);
VlCoroutine Vtb_set_associative_cache___024root___eval_initial__TOP__Vtiming__1(Vtb_set_associative_cache___024root* vlSelf);

void Vtb_set_associative_cache___024root___eval_initial(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___eval_initial\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_set_associative_cache___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_set_associative_cache___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(Vtb_set_associative_cache___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vtb_set_associative_cache__ConstPool__CONST_h7c9cf778_0;
extern const VlWide<8>/*255:0*/ Vtb_set_associative_cache__ConstPool__CONST_h4dd66dba_0;
extern const VlWide<8>/*255:0*/ Vtb_set_associative_cache__ConstPool__CONST_h854e2c18_0;
extern const VlWide<8>/*255:0*/ Vtb_set_associative_cache__ConstPool__CONST_hfd03a74c_0;
extern const VlWide<8>/*255:0*/ Vtb_set_associative_cache__ConstPool__CONST_hcb1210cb_0;
extern const VlWide<8>/*255:0*/ Vtb_set_associative_cache__ConstPool__CONST_h2ef7d2aa_0;
extern const VlWide<8>/*255:0*/ Vtb_set_associative_cache__ConstPool__CONST_h91e24400_0;

VlCoroutine Vtb_set_associative_cache___024root___eval_initial__TOP__Vtiming__0(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_set_associative_cache__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_set_associative_cache__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_write__0__addr;
    __Vtask_tb_set_associative_cache__DOT__do_write__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_write__0__data;
    __Vtask_tb_set_associative_cache__DOT__do_write__0__data = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_write__0__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_write__0__label);
    CData/*0:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__1__rw;
    __Vtask_tb_set_associative_cache__DOT__do_op__1__rw = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__1__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__1__wdata;
    __Vtask_tb_set_associative_cache__DOT__do_op__1__wdata = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__1__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_op__1__label);
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_read__2__addr;
    __Vtask_tb_set_associative_cache__DOT__do_read__2__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_read__2__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_read__2__label);
    CData/*0:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__3__rw;
    __Vtask_tb_set_associative_cache__DOT__do_op__3__rw = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__3__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__3__addr = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__3__wdata;
    __Vtask_tb_set_associative_cache__DOT__do_op__3__wdata = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__3__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_op__3__label);
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_write__4__addr;
    __Vtask_tb_set_associative_cache__DOT__do_write__4__addr = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_write__4__data;
    __Vtask_tb_set_associative_cache__DOT__do_write__4__data = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_write__4__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_write__4__label);
    CData/*0:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__5__rw;
    __Vtask_tb_set_associative_cache__DOT__do_op__5__rw = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__5__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__5__addr = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__5__wdata;
    __Vtask_tb_set_associative_cache__DOT__do_op__5__wdata = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__5__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_op__5__label);
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_read__6__addr;
    __Vtask_tb_set_associative_cache__DOT__do_read__6__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_read__6__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_read__6__label);
    CData/*0:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__7__rw;
    __Vtask_tb_set_associative_cache__DOT__do_op__7__rw = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__7__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__7__addr = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__7__wdata;
    __Vtask_tb_set_associative_cache__DOT__do_op__7__wdata = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__7__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_op__7__label);
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_read__8__addr;
    __Vtask_tb_set_associative_cache__DOT__do_read__8__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_read__8__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_read__8__label);
    CData/*0:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__9__rw;
    __Vtask_tb_set_associative_cache__DOT__do_op__9__rw = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__9__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__9__addr = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__9__wdata;
    __Vtask_tb_set_associative_cache__DOT__do_op__9__wdata = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__9__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_op__9__label);
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_read__10__addr;
    __Vtask_tb_set_associative_cache__DOT__do_read__10__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_read__10__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_read__10__label);
    CData/*0:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__11__rw;
    __Vtask_tb_set_associative_cache__DOT__do_op__11__rw = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__11__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__11__addr = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__11__wdata;
    __Vtask_tb_set_associative_cache__DOT__do_op__11__wdata = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__11__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_op__11__label);
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_read__12__addr;
    __Vtask_tb_set_associative_cache__DOT__do_read__12__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_read__12__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_read__12__label);
    CData/*0:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__13__rw;
    __Vtask_tb_set_associative_cache__DOT__do_op__13__rw = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__13__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__13__addr = 0;
    IData/*31:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__13__wdata;
    __Vtask_tb_set_associative_cache__DOT__do_op__13__wdata = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_set_associative_cache__DOT__do_op__13__label;
    VL_ZERO_W(256, __Vtask_tb_set_associative_cache__DOT__do_op__13__label);
    // Body
    vlSelfRef.tb_set_associative_cache__DOT__clk = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__rst_n = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_we = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_addr = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__hits = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__misses = 0U;
    tb_set_associative_cache__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_set_associative_cache__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                        "@(posedge tb_set_associative_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_set_associative_cache.clk)", 
                                                             "tb/tb_set_associative_cache.v", 
                                                             104);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_set_associative_cache__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_set_associative_cache__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_set_associative_cache__DOT__rst_n = 1U;
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- set_associative_cache (NUM_WAYS=2) Day 4 trace ---\n(same trace as Day 3 -- predict hit/miss, then compare hit rates)\n\n",0);
    VL_ASSIGN_W(256, __Vtask_tb_set_associative_cache__DOT__do_write__0__label, Vtb_set_associative_cache__ConstPool__CONST_h7c9cf778_0);
    __Vtask_tb_set_associative_cache__DOT__do_write__0__data = 0xaaaa0000U;
    __Vtask_tb_set_associative_cache__DOT__do_write__0__addr = 0U;
    __Vtask_tb_set_associative_cache__DOT__do_op__1__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__0__label[0U];
    __Vtask_tb_set_associative_cache__DOT__do_op__1__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__0__label[1U];
    __Vtask_tb_set_associative_cache__DOT__do_op__1__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__0__label[2U];
    __Vtask_tb_set_associative_cache__DOT__do_op__1__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__0__label[3U];
    __Vtask_tb_set_associative_cache__DOT__do_op__1__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__0__label[4U];
    __Vtask_tb_set_associative_cache__DOT__do_op__1__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__0__label[5U];
    __Vtask_tb_set_associative_cache__DOT__do_op__1__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__0__label[6U];
    __Vtask_tb_set_associative_cache__DOT__do_op__1__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__0__label[7U];
    __Vtask_tb_set_associative_cache__DOT__do_op__1__wdata 
        = __Vtask_tb_set_associative_cache__DOT__do_write__0__data;
    __Vtask_tb_set_associative_cache__DOT__do_op__1__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_write__0__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__1__rw = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw 
        = __Vtask_tb_set_associative_cache__DOT__do_op__1__rw;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_op__1__addr;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata 
        = __Vtask_tb_set_associative_cache__DOT__do_op__1__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__1__label[0U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__1__label[1U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__1__label[2U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__1__label[3U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__1__label[4U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__1__label[5U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__1__label[6U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__1__label[7U];
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_we 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss) {
        vlSelfRef.tb_set_associative_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__misses);
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__hits);
    }
    while (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                        "@(posedge tb_set_associative_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_set_associative_cache.clk)", 
                                                             "tb/tb_set_associative_cache.v", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_set_associative_cache.v", 
                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] %-24s addr=%08h idx=%0d way=%0d %-4s %-5s rdata=%08h\n",9, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                >> 4U)), '#',1,(IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r)
                 , '#',32,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss)
                            ? 0x4d495353U : 0x00484954U)
                 , '#',40,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw)
                            ? 0x0000005752495445ULL
                            : 0x0000000052454144ULL)
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__cpu_rdata);
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_set_associative_cache__DOT__do_read__2__label, Vtb_set_associative_cache__ConstPool__CONST_h4dd66dba_0);
    __Vtask_tb_set_associative_cache__DOT__do_read__2__addr = 0U;
    __Vtask_tb_set_associative_cache__DOT__do_op__3__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__2__label[0U];
    __Vtask_tb_set_associative_cache__DOT__do_op__3__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__2__label[1U];
    __Vtask_tb_set_associative_cache__DOT__do_op__3__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__2__label[2U];
    __Vtask_tb_set_associative_cache__DOT__do_op__3__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__2__label[3U];
    __Vtask_tb_set_associative_cache__DOT__do_op__3__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__2__label[4U];
    __Vtask_tb_set_associative_cache__DOT__do_op__3__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__2__label[5U];
    __Vtask_tb_set_associative_cache__DOT__do_op__3__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__2__label[6U];
    __Vtask_tb_set_associative_cache__DOT__do_op__3__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__2__label[7U];
    __Vtask_tb_set_associative_cache__DOT__do_op__3__wdata = 0U;
    __Vtask_tb_set_associative_cache__DOT__do_op__3__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_read__2__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__3__rw = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw 
        = __Vtask_tb_set_associative_cache__DOT__do_op__3__rw;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_op__3__addr;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata 
        = __Vtask_tb_set_associative_cache__DOT__do_op__3__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__3__label[0U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__3__label[1U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__3__label[2U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__3__label[3U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__3__label[4U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__3__label[5U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__3__label[6U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__3__label[7U];
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_we 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss) {
        vlSelfRef.tb_set_associative_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__misses);
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__hits);
    }
    while (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                        "@(posedge tb_set_associative_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_set_associative_cache.clk)", 
                                                             "tb/tb_set_associative_cache.v", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_set_associative_cache.v", 
                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] %-24s addr=%08h idx=%0d way=%0d %-4s %-5s rdata=%08h\n",9, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                >> 4U)), '#',1,(IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r)
                 , '#',32,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss)
                            ? 0x4d495353U : 0x00484954U)
                 , '#',40,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw)
                            ? 0x0000005752495445ULL
                            : 0x0000000052454144ULL)
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__cpu_rdata);
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_set_associative_cache__DOT__do_write__4__label, Vtb_set_associative_cache__ConstPool__CONST_h854e2c18_0);
    __Vtask_tb_set_associative_cache__DOT__do_write__4__data = 0xbbbb0000U;
    __Vtask_tb_set_associative_cache__DOT__do_write__4__addr = 0x00000080U;
    __Vtask_tb_set_associative_cache__DOT__do_op__5__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__4__label[0U];
    __Vtask_tb_set_associative_cache__DOT__do_op__5__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__4__label[1U];
    __Vtask_tb_set_associative_cache__DOT__do_op__5__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__4__label[2U];
    __Vtask_tb_set_associative_cache__DOT__do_op__5__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__4__label[3U];
    __Vtask_tb_set_associative_cache__DOT__do_op__5__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__4__label[4U];
    __Vtask_tb_set_associative_cache__DOT__do_op__5__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__4__label[5U];
    __Vtask_tb_set_associative_cache__DOT__do_op__5__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__4__label[6U];
    __Vtask_tb_set_associative_cache__DOT__do_op__5__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_write__4__label[7U];
    __Vtask_tb_set_associative_cache__DOT__do_op__5__wdata 
        = __Vtask_tb_set_associative_cache__DOT__do_write__4__data;
    __Vtask_tb_set_associative_cache__DOT__do_op__5__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_write__4__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__5__rw = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw 
        = __Vtask_tb_set_associative_cache__DOT__do_op__5__rw;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_op__5__addr;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata 
        = __Vtask_tb_set_associative_cache__DOT__do_op__5__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__5__label[0U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__5__label[1U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__5__label[2U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__5__label[3U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__5__label[4U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__5__label[5U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__5__label[6U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__5__label[7U];
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_we 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss) {
        vlSelfRef.tb_set_associative_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__misses);
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__hits);
    }
    while (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                        "@(posedge tb_set_associative_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_set_associative_cache.clk)", 
                                                             "tb/tb_set_associative_cache.v", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_set_associative_cache.v", 
                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] %-24s addr=%08h idx=%0d way=%0d %-4s %-5s rdata=%08h\n",9, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                >> 4U)), '#',1,(IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r)
                 , '#',32,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss)
                            ? 0x4d495353U : 0x00484954U)
                 , '#',40,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw)
                            ? 0x0000005752495445ULL
                            : 0x0000000052454144ULL)
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__cpu_rdata);
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_set_associative_cache__DOT__do_read__6__label, Vtb_set_associative_cache__ConstPool__CONST_hfd03a74c_0);
    __Vtask_tb_set_associative_cache__DOT__do_read__6__addr = 0x00000080U;
    __Vtask_tb_set_associative_cache__DOT__do_op__7__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__6__label[0U];
    __Vtask_tb_set_associative_cache__DOT__do_op__7__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__6__label[1U];
    __Vtask_tb_set_associative_cache__DOT__do_op__7__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__6__label[2U];
    __Vtask_tb_set_associative_cache__DOT__do_op__7__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__6__label[3U];
    __Vtask_tb_set_associative_cache__DOT__do_op__7__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__6__label[4U];
    __Vtask_tb_set_associative_cache__DOT__do_op__7__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__6__label[5U];
    __Vtask_tb_set_associative_cache__DOT__do_op__7__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__6__label[6U];
    __Vtask_tb_set_associative_cache__DOT__do_op__7__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__6__label[7U];
    __Vtask_tb_set_associative_cache__DOT__do_op__7__wdata = 0U;
    __Vtask_tb_set_associative_cache__DOT__do_op__7__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_read__6__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__7__rw = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw 
        = __Vtask_tb_set_associative_cache__DOT__do_op__7__rw;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_op__7__addr;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata 
        = __Vtask_tb_set_associative_cache__DOT__do_op__7__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__7__label[0U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__7__label[1U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__7__label[2U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__7__label[3U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__7__label[4U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__7__label[5U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__7__label[6U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__7__label[7U];
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_we 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss) {
        vlSelfRef.tb_set_associative_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__misses);
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__hits);
    }
    while (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                        "@(posedge tb_set_associative_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_set_associative_cache.clk)", 
                                                             "tb/tb_set_associative_cache.v", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_set_associative_cache.v", 
                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] %-24s addr=%08h idx=%0d way=%0d %-4s %-5s rdata=%08h\n",9, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                >> 4U)), '#',1,(IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r)
                 , '#',32,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss)
                            ? 0x4d495353U : 0x00484954U)
                 , '#',40,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw)
                            ? 0x0000005752495445ULL
                            : 0x0000000052454144ULL)
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__cpu_rdata);
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_set_associative_cache__DOT__do_read__8__label, Vtb_set_associative_cache__ConstPool__CONST_hcb1210cb_0);
    __Vtask_tb_set_associative_cache__DOT__do_read__8__addr = 0U;
    __Vtask_tb_set_associative_cache__DOT__do_op__9__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__8__label[0U];
    __Vtask_tb_set_associative_cache__DOT__do_op__9__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__8__label[1U];
    __Vtask_tb_set_associative_cache__DOT__do_op__9__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__8__label[2U];
    __Vtask_tb_set_associative_cache__DOT__do_op__9__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__8__label[3U];
    __Vtask_tb_set_associative_cache__DOT__do_op__9__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__8__label[4U];
    __Vtask_tb_set_associative_cache__DOT__do_op__9__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__8__label[5U];
    __Vtask_tb_set_associative_cache__DOT__do_op__9__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__8__label[6U];
    __Vtask_tb_set_associative_cache__DOT__do_op__9__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__8__label[7U];
    __Vtask_tb_set_associative_cache__DOT__do_op__9__wdata = 0U;
    __Vtask_tb_set_associative_cache__DOT__do_op__9__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_read__8__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__9__rw = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw 
        = __Vtask_tb_set_associative_cache__DOT__do_op__9__rw;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_op__9__addr;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata 
        = __Vtask_tb_set_associative_cache__DOT__do_op__9__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__9__label[0U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__9__label[1U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__9__label[2U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__9__label[3U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__9__label[4U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__9__label[5U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__9__label[6U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__9__label[7U];
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_we 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss) {
        vlSelfRef.tb_set_associative_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__misses);
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__hits);
    }
    while (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                        "@(posedge tb_set_associative_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_set_associative_cache.clk)", 
                                                             "tb/tb_set_associative_cache.v", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_set_associative_cache.v", 
                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] %-24s addr=%08h idx=%0d way=%0d %-4s %-5s rdata=%08h\n",9, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                >> 4U)), '#',1,(IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r)
                 , '#',32,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss)
                            ? 0x4d495353U : 0x00484954U)
                 , '#',40,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw)
                            ? 0x0000005752495445ULL
                            : 0x0000000052454144ULL)
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__cpu_rdata);
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_set_associative_cache__DOT__do_read__10__label, Vtb_set_associative_cache__ConstPool__CONST_h2ef7d2aa_0);
    __Vtask_tb_set_associative_cache__DOT__do_read__10__addr = 0x00000010U;
    __Vtask_tb_set_associative_cache__DOT__do_op__11__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__10__label[0U];
    __Vtask_tb_set_associative_cache__DOT__do_op__11__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__10__label[1U];
    __Vtask_tb_set_associative_cache__DOT__do_op__11__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__10__label[2U];
    __Vtask_tb_set_associative_cache__DOT__do_op__11__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__10__label[3U];
    __Vtask_tb_set_associative_cache__DOT__do_op__11__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__10__label[4U];
    __Vtask_tb_set_associative_cache__DOT__do_op__11__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__10__label[5U];
    __Vtask_tb_set_associative_cache__DOT__do_op__11__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__10__label[6U];
    __Vtask_tb_set_associative_cache__DOT__do_op__11__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__10__label[7U];
    __Vtask_tb_set_associative_cache__DOT__do_op__11__wdata = 0U;
    __Vtask_tb_set_associative_cache__DOT__do_op__11__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_read__10__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__11__rw = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw 
        = __Vtask_tb_set_associative_cache__DOT__do_op__11__rw;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_op__11__addr;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata 
        = __Vtask_tb_set_associative_cache__DOT__do_op__11__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__11__label[0U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__11__label[1U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__11__label[2U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__11__label[3U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__11__label[4U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__11__label[5U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__11__label[6U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__11__label[7U];
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_we 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss) {
        vlSelfRef.tb_set_associative_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__misses);
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__hits);
    }
    while (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                        "@(posedge tb_set_associative_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_set_associative_cache.clk)", 
                                                             "tb/tb_set_associative_cache.v", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_set_associative_cache.v", 
                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] %-24s addr=%08h idx=%0d way=%0d %-4s %-5s rdata=%08h\n",9, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                >> 4U)), '#',1,(IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r)
                 , '#',32,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss)
                            ? 0x4d495353U : 0x00484954U)
                 , '#',40,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw)
                            ? 0x0000005752495445ULL
                            : 0x0000000052454144ULL)
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__cpu_rdata);
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_set_associative_cache__DOT__do_read__12__label, Vtb_set_associative_cache__ConstPool__CONST_h91e24400_0);
    __Vtask_tb_set_associative_cache__DOT__do_read__12__addr = 0U;
    __Vtask_tb_set_associative_cache__DOT__do_op__13__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__12__label[0U];
    __Vtask_tb_set_associative_cache__DOT__do_op__13__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__12__label[1U];
    __Vtask_tb_set_associative_cache__DOT__do_op__13__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__12__label[2U];
    __Vtask_tb_set_associative_cache__DOT__do_op__13__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__12__label[3U];
    __Vtask_tb_set_associative_cache__DOT__do_op__13__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__12__label[4U];
    __Vtask_tb_set_associative_cache__DOT__do_op__13__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__12__label[5U];
    __Vtask_tb_set_associative_cache__DOT__do_op__13__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__12__label[6U];
    __Vtask_tb_set_associative_cache__DOT__do_op__13__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_read__12__label[7U];
    __Vtask_tb_set_associative_cache__DOT__do_op__13__wdata = 0U;
    __Vtask_tb_set_associative_cache__DOT__do_op__13__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_read__12__addr;
    __Vtask_tb_set_associative_cache__DOT__do_op__13__rw = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw 
        = __Vtask_tb_set_associative_cache__DOT__do_op__13__rw;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr 
        = __Vtask_tb_set_associative_cache__DOT__do_op__13__addr;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata 
        = __Vtask_tb_set_associative_cache__DOT__do_op__13__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[0U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__13__label[0U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[1U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__13__label[1U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[2U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__13__label[2U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[3U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__13__label[3U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[4U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__13__label[4U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[5U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__13__label[5U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[6U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__13__label[6U];
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label[7U] 
        = __Vtask_tb_set_associative_cache__DOT__do_op__13__label[7U];
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_we 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata 
        = vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata;
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss) {
        vlSelfRef.tb_set_associative_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__misses);
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__hits);
    }
    while (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                        "@(posedge tb_set_associative_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_set_associative_cache.clk)", 
                                                             "tb/tb_set_associative_cache.v", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_set_associative_cache.v", 
                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(vlSelf, 
                                                                    "@(posedge tb_set_associative_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h1d5194e3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_set_associative_cache.clk)", 
                                                         "tb/tb_set_associative_cache.v", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_set_associative_cache.v", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0t] %-24s addr=%08h idx=%0d way=%0d %-4s %-5s rdata=%08h\n",9, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                >> 4U)), '#',1,(IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r)
                 , '#',32,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss)
                            ? 0x4d495353U : 0x00484954U)
                 , '#',40,((IData)(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw)
                            ? 0x0000005752495445ULL
                            : 0x0000000052454144ULL)
                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__cpu_rdata);
    vlSelfRef.tb_set_associative_cache__DOT__cpu_req = 0U;
    VL_WRITEF_NX("\nhits=%0d misses=%0d hit_rate=%0.1f%%\nDay 3 (direct-mapped) on the identical trace: hit_rate=42.9%%\n",3
                 , '~',32,vlSelfRef.tb_set_associative_cache__DOT__hits
                 , '~',32,vlSelfRef.tb_set_associative_cache__DOT__misses
                 , 'D',((100.0 * VL_ISTOR_D_I(32, vlSelfRef.tb_set_associative_cache__DOT__hits)) 
                        / VL_ISTOR_D_I(32, (vlSelfRef.tb_set_associative_cache__DOT__hits 
                                            + vlSelfRef.tb_set_associative_cache__DOT__misses))));
    VL_FINISH_MT("tb/tb_set_associative_cache.v", 122, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_set_associative_cache___024root___eval_initial__TOP__Vtiming__1(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/tb_set_associative_cache.v", 
                                             61);
        vlSelfRef.tb_set_associative_cache__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__clk)));
    }
    co_return;
}

bool Vtb_set_associative_cache___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___trigger_anySet__act\n"); );
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

void Vtb_set_associative_cache___024root___act_comb__TOP__0(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___act_comb__TOP__0\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r = 0U;
    if ((vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                 >> 4U))][0U] & (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__tag_array
                                 [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                         >> 4U))][0U] 
                                 == (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                     >> 7U)))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r = 0U;
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r = 0U;
    }
    if ((vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                 >> 4U))][1U] & (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__tag_array
                                 [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                         >> 4U))][1U] 
                                 == (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                     >> 7U)))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r = 1U;
    }
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 4U))][0U])))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 4U))][1U])))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
                         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 4U))][0U])))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
                          [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                  >> 4U))][1U])) & 
               (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r))))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r = 1U;
    }
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall 
        = ((0U != (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state)) 
           | ((~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r)) 
              & (IData)(vlSelfRef.tb_set_associative_cache__DOT__cpu_req)));
    vlSelfRef.tb_set_associative_cache__DOT__cpu_rdata 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r]
        [(3U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 2U))];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[0U] 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r][0U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[1U] 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r][1U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[2U] 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r][2U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[3U] 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r][3U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__need_writeback 
        = (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
           [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                   >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r] 
           & vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array
           [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                   >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r]);
}

void Vtb_set_associative_cache___024root___nba_sequent__TOP__0(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___nba_sequent__TOP__0\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__s;
    __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__s = 0;
    CData/*0:0*/ __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__w;
    __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__w = 0;
    CData/*0:0*/ __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__old_val;
    __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__old_val = 0;
    CData/*2:0*/ __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__s;
    __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__s = 0;
    CData/*0:0*/ __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__w;
    __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__w = 0;
    CData/*0:0*/ __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__old_val;
    __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__old_val = 0;
    CData/*1:0*/ __Vdly__tb_set_associative_cache__DOT__dut__DOT__state;
    __Vdly__tb_set_associative_cache__DOT__dut__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_set_associative_cache__DOT__mem__DOT__busy;
    __Vdly__tb_set_associative_cache__DOT__mem__DOT__busy = 0;
    CData/*0:0*/ __Vdly__tb_set_associative_cache__DOT__mem__DOT__op_is_write;
    __Vdly__tb_set_associative_cache__DOT__mem__DOT__op_is_write = 0;
    CData/*2:0*/ __Vdly__tb_set_associative_cache__DOT__mem__DOT__cnt;
    __Vdly__tb_set_associative_cache__DOT__mem__DOT__cnt = 0;
    IData/*31:0*/ __Vdly__tb_set_associative_cache__DOT__mem__DOT__addr_latched;
    __Vdly__tb_set_associative_cache__DOT__mem__DOT__addr_latched = 0;
    VlWide<4>/*127:0*/ __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched;
    VL_ZERO_W(128, __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched);
    IData/*31:0*/ __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v0;
    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__data_array__v0;
    __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__data_array__v0 = 0;
    CData/*0:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v0;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v0 = 0;
    CData/*2:0*/ __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v0;
    __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v0;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v0;
    __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v0;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0;
    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1;
    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1 = 0;
    CData/*2:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2;
    __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2 = 0;
    CData/*2:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2 = 0;
    CData/*0:0*/ __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0;
    __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0 = 0;
    IData/*24:0*/ __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__tag_array__v0;
    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__tag_array__v0;
    __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__tag_array__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__tag_array__v0;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__tag_array__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v1;
    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v1 = 0;
    CData/*0:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v1;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v1 = 0;
    CData/*2:0*/ __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v1;
    __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v1 = 0;
    CData/*0:0*/ __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v1;
    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v1;
    __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v1 = 0;
    CData/*2:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v1;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v2;
    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v2 = 0;
    CData/*0:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v2;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v2 = 0;
    CData/*2:0*/ __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v2;
    __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v2;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v3;
    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v3 = 0;
    CData/*0:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v3;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v3 = 0;
    CData/*2:0*/ __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v3;
    __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v3;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v4;
    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v4 = 0;
    CData/*0:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v4;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v4 = 0;
    CData/*2:0*/ __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v4;
    __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v4 = 0;
    CData/*0:0*/ __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3;
    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3 = 0;
    CData/*2:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3 = 0;
    CData/*0:0*/ __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4;
    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4 = 0;
    CData/*2:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4 = 0;
    CData/*0:0*/ __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5;
    __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5 = 0;
    CData/*2:0*/ __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5;
    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v1;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_set_associative_cache__DOT__mem__DOT__backing_written__v0;
    __VdlyDim0__tb_set_associative_cache__DOT__mem__DOT__backing_written__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0;
    __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0 = 0;
    CData/*7:0*/ __VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0;
    __VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0;
    __VdlySet__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v1;
    __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v1 = 0;
    CData/*7:0*/ __VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v1;
    __VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v2;
    __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v2 = 0;
    CData/*7:0*/ __VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v2;
    __VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v3;
    __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v3 = 0;
    CData/*7:0*/ __VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v3;
    __VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tb_set_associative_cache__DOT__mem__DOT__backing_written__v1;
    __VdlyDim0__tb_set_associative_cache__DOT__mem__DOT__backing_written__v1 = 0;
    // Body
    __Vdly__tb_set_associative_cache__DOT__mem__DOT__busy 
        = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__busy;
    __Vdly__tb_set_associative_cache__DOT__mem__DOT__op_is_write 
        = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__op_is_write;
    __Vdly__tb_set_associative_cache__DOT__mem__DOT__cnt 
        = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__cnt;
    __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched[0U] 
        = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[0U];
    __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched[1U] 
        = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[1U];
    __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched[2U] 
        = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[2U];
    __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched[3U] 
        = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[3U];
    __Vdly__tb_set_associative_cache__DOT__mem__DOT__addr_latched 
        = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched;
    __VdlySet__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0 = 0U;
    __Vdly__tb_set_associative_cache__DOT__dut__DOT__state 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v2 = 0U;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v3 = 0U;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0 = 0U;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1 = 0U;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2 = 0U;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3 = 0U;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4 = 0U;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5 = 0U;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v0 = 0U;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v1 = 0U;
    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__rst_n)))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__wi = 2U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__si = 8U;
    }
    if (vlSelfRef.tb_set_associative_cache__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state))) {
            if (((IData)(vlSelfRef.tb_set_associative_cache__DOT__cpu_req) 
                 & (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r)))) {
                __Vdly__tb_set_associative_cache__DOT__dut__DOT__state 
                    = ((IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__need_writeback)
                        ? 1U : 2U);
            } else if (((IData)(vlSelfRef.tb_set_associative_cache__DOT__cpu_req) 
                        & (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r))) {
                __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__w 
                    = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r;
                if (vlSelfRef.tb_set_associative_cache__DOT__cpu_we) {
                    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v0 
                        = vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata;
                    __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__data_array__v0 
                        = (3U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 2U));
                    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v0 
                        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r;
                    __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v0 
                        = (7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 4U));
                    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v0 = 1U;
                    __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v0 
                        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r;
                    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v0 
                        = (7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 4U));
                }
                __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__s 
                    = (7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                             >> 4U));
                __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__old_val 
                    = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                    [__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__s]
                    [__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__w];
                if (((IData)(__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__w) 
                     & (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                        [__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__s][0U] 
                        > (IData)(__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__old_val)))) {
                    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0 
                        = (1U & ((IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                                         [__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__s][0U]) 
                                 - (IData)(1U)));
                    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0 
                        = __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__s;
                    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0 = 1U;
                }
                if (((~ (IData)(__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__w)) 
                     & (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                        [__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__s][1U] 
                        > (IData)(__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__old_val)))) {
                    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1 
                        = (1U & ((IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                                         [__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__s][1U]) 
                                 - (IData)(1U)));
                    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1 
                        = __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__s;
                    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1 = 1U;
                }
                __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2 
                    = __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__w;
                __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2 
                    = __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__14__s;
                __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2 = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_set_associative_cache__DOT__mem_wr_done) {
                __Vdly__tb_set_associative_cache__DOT__dut__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_set_associative_cache__DOT__mem_ready) {
                vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__wj = 4U;
                __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__w 
                    = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r;
                __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0 
                    = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r;
                __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0 
                    = (7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                             >> 4U));
                __VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0 = 1U;
                __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__tag_array__v0 
                    = (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                       >> 7U);
                __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__tag_array__v0 
                    = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r;
                __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__tag_array__v0 
                    = (7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                             >> 4U));
                __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v1 
                    = (((IData)(vlSelfRef.tb_set_associative_cache__DOT__cpu_we) 
                        & (0U == (0x0000000cU & vlSelfRef.tb_set_associative_cache__DOT__cpu_addr)))
                        ? vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata
                        : vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[0U]);
                __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v1 
                    = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r;
                __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v1 
                    = (7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                             >> 4U));
                __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v1 
                    = vlSelfRef.tb_set_associative_cache__DOT__cpu_we;
                __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v1 
                    = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r;
                __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v1 
                    = (7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                             >> 4U));
                __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__s 
                    = (7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                             >> 4U));
                __Vdly__tb_set_associative_cache__DOT__dut__DOT__state = 0U;
                __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v2 
                    = (((IData)(vlSelfRef.tb_set_associative_cache__DOT__cpu_we) 
                        & (4U == (0x0000000cU & vlSelfRef.tb_set_associative_cache__DOT__cpu_addr)))
                        ? vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata
                        : vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[1U]);
                __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v2 
                    = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r;
                __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v2 
                    = (7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                             >> 4U));
                __VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v2 = 1U;
                __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__old_val 
                    = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                    [__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__s]
                    [__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__w];
                __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v3 
                    = (((IData)(vlSelfRef.tb_set_associative_cache__DOT__cpu_we) 
                        & (8U == (0x0000000cU & vlSelfRef.tb_set_associative_cache__DOT__cpu_addr)))
                        ? vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata
                        : vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[2U]);
                __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v3 
                    = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r;
                __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v3 
                    = (7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                             >> 4U));
                __VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v3 = 1U;
                __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v4 
                    = (((IData)(vlSelfRef.tb_set_associative_cache__DOT__cpu_we) 
                        & (0x0000000cU == (0x0000000cU 
                                           & vlSelfRef.tb_set_associative_cache__DOT__cpu_addr)))
                        ? vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata
                        : vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[3U]);
                __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v4 
                    = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r;
                __VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v4 
                    = (7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                             >> 4U));
                if (((IData)(__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__w) 
                     & (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                        [__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__s][0U] 
                        > (IData)(__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__old_val)))) {
                    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3 
                        = (1U & ((IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                                         [__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__s][0U]) 
                                 - (IData)(1U)));
                    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3 
                        = __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__s;
                    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3 = 1U;
                }
                if (((~ (IData)(__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__w)) 
                     & (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                        [__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__s][1U] 
                        > (IData)(__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__old_val)))) {
                    __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4 
                        = (1U & ((IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                                         [__Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__s][1U]) 
                                 - (IData)(1U)));
                    __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4 
                        = __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__s;
                    __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4 = 1U;
                }
                __VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5 
                    = __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__w;
                __VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5 
                    = __Vtask_tb_set_associative_cache__DOT__dut__DOT__bump_lru__15__s;
                __VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5 = 1U;
            }
        }
    } else {
        __Vdly__tb_set_associative_cache__DOT__dut__DOT__state = 0U;
        __VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v1 = 1U;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0][0U] 
            = __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v0;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1][1U] 
            = __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v1;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2][__VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v2] = 1U;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3][0U] 
            = __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v3;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4][1U] 
            = __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v4;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5][__VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__lru_counter__v5] = 1U;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v0) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v0][__VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v0] = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array[__VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v0][__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v0][__VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__data_array__v0] 
            = __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v0;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v1) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[0U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[0U][1U] = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[1U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[1U][1U] = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[2U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[2U][1U] = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[3U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[3U][1U] = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[4U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[4U][1U] = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[5U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[5U][1U] = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[6U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[6U][1U] = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[7U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter[7U][1U] = 1U;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v1][__VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v1] 
            = __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__dirty_array__v1;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v1) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[0U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[0U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[1U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[1U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[2U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[2U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[3U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[3U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[4U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[4U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[5U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[5U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[6U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[6U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[7U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array[7U][1U] = 0U;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array[__VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v1][__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v1][0U] 
            = __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v1;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0][__VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0] = 1U;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v1) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[0U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[0U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[1U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[1U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[2U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[2U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[3U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[3U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[4U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[4U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[5U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[5U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[6U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[6U][1U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[7U][0U] = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array[7U][1U] = 0U;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v2) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array[__VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v2][__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v2][1U] 
            = __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v2;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__data_array__v3) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array[__VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v3][__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v3][2U] 
            = __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v3;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array[__VdlyDim2__tb_set_associative_cache__DOT__dut__DOT__data_array__v4][__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__data_array__v4][3U] 
            = __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__data_array__v4;
    }
    if (vlSelfRef.tb_set_associative_cache__DOT__rst_n) {
        vlSelfRef.tb_set_associative_cache__DOT__mem_ready = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__mem_wr_done = 0U;
        if (((~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__busy)) 
             & (2U == (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state)))) {
            __Vdly__tb_set_associative_cache__DOT__mem__DOT__busy = 1U;
            __Vdly__tb_set_associative_cache__DOT__mem__DOT__op_is_write = 0U;
            __Vdly__tb_set_associative_cache__DOT__mem__DOT__cnt = 0U;
            __Vdly__tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                = (0xfffffff0U & vlSelfRef.tb_set_associative_cache__DOT__cpu_addr);
        } else if (((~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__busy)) 
                    & (1U == (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state)))) {
            __Vdly__tb_set_associative_cache__DOT__mem__DOT__busy = 1U;
            __Vdly__tb_set_associative_cache__DOT__mem__DOT__op_is_write = 1U;
            __Vdly__tb_set_associative_cache__DOT__mem__DOT__cnt = 0U;
            __Vdly__tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                = ((vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__tag_array
                    [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                            >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r] 
                    << 7U) | (0x00000070U & vlSelfRef.tb_set_associative_cache__DOT__cpu_addr));
            __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched[0U] 
                = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[0U];
            __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched[1U] 
                = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[1U];
            __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched[2U] 
                = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[2U];
            __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched[3U] 
                = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[3U];
        } else if (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__busy) {
            if ((3U == (IData)(vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__cnt))) {
                __Vdly__tb_set_associative_cache__DOT__mem__DOT__busy = 0U;
                if (VL_UNLIKELY((vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__op_is_write))) {
                    vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wj = 4U;
                    __VdlyDim0__tb_set_associative_cache__DOT__mem__DOT__backing_written__v0 
                        = (0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                                          >> 4U));
                    vlSelfRef.__VdlyCommitQueuetb_set_associative_cache__DOT__mem__DOT__backing_written.enqueue(1U, (IData)(__VdlyDim0__tb_set_associative_cache__DOT__mem__DOT__backing_written__v0));
                    vlSelfRef.tb_set_associative_cache__DOT__mem_wr_done = 1U;
                    __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0 
                        = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[0U];
                    __VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0 
                        = (0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                                          >> 4U));
                    __VdlySet__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0 = 1U;
                    __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v1 
                        = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[1U];
                    __VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v1 
                        = (0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                                          >> 4U));
                    __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v2 
                        = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[2U];
                    __VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v2 
                        = (0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                                          >> 4U));
                    __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v3 
                        = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[3U];
                    __VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v3 
                        = (0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                                          >> 4U));
                    VL_WRITEF_NX("[%0t] mem: WRITE-BACK line_idx=%0d addr=%08h word0=%08h\n",5, 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',8,(0x000000ffU 
                                          & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                                             >> 4U))
                                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched
                                 , '#',32,vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[0U]);
                } else {
                    vlSelfRef.tb_set_associative_cache__DOT__mem_ready = 1U;
                }
            } else {
                __Vdly__tb_set_associative_cache__DOT__mem__DOT__cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__cnt)));
            }
        }
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__li = 0U;
        __Vdly__tb_set_associative_cache__DOT__mem__DOT__busy = 0U;
        __Vdly__tb_set_associative_cache__DOT__mem__DOT__cnt = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__mem_ready = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__mem_wr_done = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__li)) {
            __VdlyDim0__tb_set_associative_cache__DOT__mem__DOT__backing_written__v1 
                = (0x000000ffU & vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__li);
            vlSelfRef.__VdlyCommitQueuetb_set_associative_cache__DOT__mem__DOT__backing_written.enqueue(0U, (IData)(__VdlyDim0__tb_set_associative_cache__DOT__mem__DOT__backing_written__v1));
            vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__li 
                = ((IData)(1U) + vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__li);
        }
    }
    vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__busy 
        = __Vdly__tb_set_associative_cache__DOT__mem__DOT__busy;
    vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__op_is_write 
        = __Vdly__tb_set_associative_cache__DOT__mem__DOT__op_is_write;
    vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__cnt 
        = __Vdly__tb_set_associative_cache__DOT__mem__DOT__cnt;
    vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[0U] 
        = __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched[0U];
    vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[1U] 
        = __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched[1U];
    vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[2U] 
        = __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched[2U];
    vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched[3U] 
        = __Vdly__tb_set_associative_cache__DOT__mem__DOT__wdata_latched[3U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state 
        = __Vdly__tb_set_associative_cache__DOT__dut__DOT__state;
    vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
        = __Vdly__tb_set_associative_cache__DOT__mem__DOT__addr_latched;
    vlSelfRef.__VdlyCommitQueuetb_set_associative_cache__DOT__mem__DOT__backing_written.commit(vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_written);
    if (__VdlySet__tb_set_associative_cache__DOT__dut__DOT__valid_array__v0) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__tag_array[__VdlyDim1__tb_set_associative_cache__DOT__dut__DOT__tag_array__v0][__VdlyDim0__tb_set_associative_cache__DOT__dut__DOT__tag_array__v0] 
            = __VdlyVal__tb_set_associative_cache__DOT__dut__DOT__tag_array__v0;
    }
    if (__VdlySet__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0) {
        vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_data[__VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0][0U] 
            = __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v0;
        vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_data[__VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v1][1U] 
            = __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v1;
        vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_data[__VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v2][2U] 
            = __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v2;
        vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_data[__VdlyDim1__tb_set_associative_cache__DOT__mem__DOT__backing_data__v3][3U] 
            = __VdlyVal__tb_set_associative_cache__DOT__mem__DOT__backing_data__v3;
    }
    if (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_written
        [(0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                         >> 4U))]) {
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[0U] 
            = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                             >> 4U))][0U];
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[1U] 
            = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                             >> 4U))][1U];
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[2U] 
            = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                             >> 4U))][2U];
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[3U] 
            = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                             >> 4U))][3U];
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[0U] 
            = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched;
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[1U] 
            = ((IData)(4U) + vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched);
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[2U] 
            = ((IData)(8U) + vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched);
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[3U] 
            = ((IData)(0x0000000cU) + vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched);
    }
}

void Vtb_set_associative_cache___024root___nba_comb__TOP__0(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___nba_comb__TOP__0\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 4U))][0U])))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 4U))][1U])))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
                         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 4U))][0U])))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
                          [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                  >> 4U))][1U])) & 
               (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r))))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r = 1U;
    }
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r = 0U;
    if ((vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                 >> 4U))][0U] & (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__tag_array
                                 [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                         >> 4U))][0U] 
                                 == (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                     >> 7U)))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r = 0U;
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r = 0U;
    }
    if ((vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                 >> 4U))][1U] & (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__tag_array
                                 [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                         >> 4U))][1U] 
                                 == (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                     >> 7U)))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r = 1U;
    }
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[0U] 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r][0U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[1U] 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r][1U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[2U] 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r][2U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[3U] 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r][3U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__need_writeback 
        = (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
           [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                   >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r] 
           & vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array
           [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                   >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r]);
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall 
        = ((0U != (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state)) 
           | ((~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r)) 
              & (IData)(vlSelfRef.tb_set_associative_cache__DOT__cpu_req)));
    vlSelfRef.tb_set_associative_cache__DOT__cpu_rdata 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r]
        [(3U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 2U))];
}

void Vtb_set_associative_cache___024root___timing_ready(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___timing_ready\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready("@(posedge tb_set_associative_cache.clk)");
    }
}

void Vtb_set_associative_cache___024root___timing_resume(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___timing_resume\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h1d5194e3__0.moveToResumeQueue(
                                                          "@(posedge tb_set_associative_cache.clk)");
    vlSelfRef.__VtrigSched_h1d5194e3__0.resume("@(posedge tb_set_associative_cache.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_set_associative_cache___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_set_associative_cache___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_set_associative_cache___024root___eval_phase__act(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___eval_phase__act\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_set_associative_cache__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_set_associative_cache__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_set_associative_cache__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_set_associative_cache__DOT__clk__0 
            = vlSelfRef.tb_set_associative_cache__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_set_associative_cache__DOT__rst_n__0 
            = vlSelfRef.tb_set_associative_cache__DOT__rst_n;
    }
    Vtb_set_associative_cache___024root___timing_ready(vlSelf);
    Vtb_set_associative_cache___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_set_associative_cache___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_set_associative_cache___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_set_associative_cache___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_set_associative_cache___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_set_associative_cache___024root___act_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_set_associative_cache___024root___eval_phase__inact(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___eval_phase__inact\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_set_associative_cache.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_set_associative_cache___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_set_associative_cache___024root___eval_phase__nba(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___eval_phase__nba\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_set_associative_cache___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_set_associative_cache___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_set_associative_cache___024root___nba_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[5U] = 1U;
            }
        }
        Vtb_set_associative_cache___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_set_associative_cache___024root___eval(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___eval\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_set_associative_cache___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_set_associative_cache.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_set_associative_cache.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_set_associative_cache___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_set_associative_cache.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_set_associative_cache___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_set_associative_cache___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_set_associative_cache___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0(Vtb_set_associative_cache___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root____VbeforeTrig_h1d5194e3__0\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_set_associative_cache__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_set_associative_cache__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_set_associative_cache__DOT__clk__0 
        = vlSelfRef.tb_set_associative_cache__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1d5194e3__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_set_associative_cache___024root___eval_debug_assertions(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___eval_debug_assertions\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
