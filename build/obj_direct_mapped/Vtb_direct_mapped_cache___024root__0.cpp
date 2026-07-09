// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_direct_mapped_cache.h for the primary calling header

#include "Vtb_direct_mapped_cache__pch.h"

VlCoroutine Vtb_direct_mapped_cache___024root___eval_initial__TOP__Vtiming__0(Vtb_direct_mapped_cache___024root* vlSelf);
VlCoroutine Vtb_direct_mapped_cache___024root___eval_initial__TOP__Vtiming__1(Vtb_direct_mapped_cache___024root* vlSelf);

void Vtb_direct_mapped_cache___024root___eval_initial(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___eval_initial\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_direct_mapped_cache___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_direct_mapped_cache___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(Vtb_direct_mapped_cache___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vtb_direct_mapped_cache__ConstPool__CONST_hb4e69377_0;
extern const VlWide<8>/*255:0*/ Vtb_direct_mapped_cache__ConstPool__CONST_ha7187103_0;
extern const VlWide<8>/*255:0*/ Vtb_direct_mapped_cache__ConstPool__CONST_h6fcbf9f8_0;
extern const VlWide<8>/*255:0*/ Vtb_direct_mapped_cache__ConstPool__CONST_h57cc9279_0;
extern const VlWide<8>/*255:0*/ Vtb_direct_mapped_cache__ConstPool__CONST_h52e81592_0;
extern const VlWide<8>/*255:0*/ Vtb_direct_mapped_cache__ConstPool__CONST_h989cbd94_0;

VlCoroutine Vtb_direct_mapped_cache___024root___eval_initial__TOP__Vtiming__0(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_direct_mapped_cache__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_direct_mapped_cache__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_direct_mapped_cache__DOT__do_read__0__addr;
    __Vtask_tb_direct_mapped_cache__DOT__do_read__0__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_direct_mapped_cache__DOT__do_read__0__label;
    VL_ZERO_W(256, __Vtask_tb_direct_mapped_cache__DOT__do_read__0__label);
    IData/*31:0*/ __Vtask_tb_direct_mapped_cache__DOT__do_read__1__addr;
    __Vtask_tb_direct_mapped_cache__DOT__do_read__1__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_direct_mapped_cache__DOT__do_read__1__label;
    VL_ZERO_W(256, __Vtask_tb_direct_mapped_cache__DOT__do_read__1__label);
    IData/*31:0*/ __Vtask_tb_direct_mapped_cache__DOT__do_read__2__addr;
    __Vtask_tb_direct_mapped_cache__DOT__do_read__2__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_direct_mapped_cache__DOT__do_read__2__label;
    VL_ZERO_W(256, __Vtask_tb_direct_mapped_cache__DOT__do_read__2__label);
    IData/*31:0*/ __Vtask_tb_direct_mapped_cache__DOT__do_read__3__addr;
    __Vtask_tb_direct_mapped_cache__DOT__do_read__3__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_direct_mapped_cache__DOT__do_read__3__label;
    VL_ZERO_W(256, __Vtask_tb_direct_mapped_cache__DOT__do_read__3__label);
    IData/*31:0*/ __Vtask_tb_direct_mapped_cache__DOT__do_read__4__addr;
    __Vtask_tb_direct_mapped_cache__DOT__do_read__4__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_direct_mapped_cache__DOT__do_read__4__label;
    VL_ZERO_W(256, __Vtask_tb_direct_mapped_cache__DOT__do_read__4__label);
    IData/*31:0*/ __Vtask_tb_direct_mapped_cache__DOT__do_read__5__addr;
    __Vtask_tb_direct_mapped_cache__DOT__do_read__5__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_direct_mapped_cache__DOT__do_read__5__label;
    VL_ZERO_W(256, __Vtask_tb_direct_mapped_cache__DOT__do_read__5__label);
    // Body
    vlSelfRef.tb_direct_mapped_cache__DOT__clk = 0U;
    vlSelfRef.tb_direct_mapped_cache__DOT__rst_n = 0U;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 0U;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr = 0U;
    vlSelfRef.tb_direct_mapped_cache__DOT__hits = 0U;
    vlSelfRef.tb_direct_mapped_cache__DOT__misses = 0U;
    tb_direct_mapped_cache__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_direct_mapped_cache__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                      "@(posedge tb_direct_mapped_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_direct_mapped_cache.clk)", 
                                                             "tb/tb_direct_mapped_cache.v", 
                                                             79);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_direct_mapped_cache__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_direct_mapped_cache__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_direct_mapped_cache__DOT__rst_n = 1U;
    Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                  "@(posedge tb_direct_mapped_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_direct_mapped_cache.clk)", 
                                                         "tb/tb_direct_mapped_cache.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- direct_mapped_cache directed trace ---\n(predict hit/miss for each line by hand first)\n\n",0);
    VL_ASSIGN_W(256, __Vtask_tb_direct_mapped_cache__DOT__do_read__0__label, Vtb_direct_mapped_cache__ConstPool__CONST_hb4e69377_0);
    __Vtask_tb_direct_mapped_cache__DOT__do_read__0__addr = 0U;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__0__addr;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[0U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__0__label[0U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[1U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__0__label[1U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[2U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__0__label[2U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[3U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__0__label[3U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[4U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__0__label[4U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[5U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__0__label[5U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[6U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__0__label[6U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[7U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__0__label[7U];
    Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                  "@(posedge tb_direct_mapped_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_direct_mapped_cache.clk)", 
                                                         "tb/tb_direct_mapped_cache.v", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
        = vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_direct_mapped_cache.v", 
                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss 
        = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss) {
        vlSelfRef.tb_direct_mapped_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_direct_mapped_cache__DOT__misses);
    } else {
        vlSelfRef.tb_direct_mapped_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_direct_mapped_cache__DOT__hits);
    }
    while (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                      "@(posedge tb_direct_mapped_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_direct_mapped_cache.clk)", 
                                                             "tb/tb_direct_mapped_cache.v", 
                                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_direct_mapped_cache.v", 
                                             66);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0t] %-28s addr=%08h index=%0d %-4s rdata=%08h\n",7, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                >> 4U)), '#',32,((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss)
                                                  ? 0x4d495353U
                                                  : 0x00484954U)
                 , '#',32,vlSelfRef.tb_direct_mapped_cache__DOT__cpu_rdata);
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_direct_mapped_cache__DOT__do_read__1__label, Vtb_direct_mapped_cache__ConstPool__CONST_ha7187103_0);
    __Vtask_tb_direct_mapped_cache__DOT__do_read__1__addr = 0U;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__1__addr;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[0U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__1__label[0U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[1U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__1__label[1U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[2U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__1__label[2U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[3U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__1__label[3U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[4U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__1__label[4U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[5U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__1__label[5U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[6U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__1__label[6U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[7U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__1__label[7U];
    Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                  "@(posedge tb_direct_mapped_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_direct_mapped_cache.clk)", 
                                                         "tb/tb_direct_mapped_cache.v", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
        = vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_direct_mapped_cache.v", 
                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss 
        = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss) {
        vlSelfRef.tb_direct_mapped_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_direct_mapped_cache__DOT__misses);
    } else {
        vlSelfRef.tb_direct_mapped_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_direct_mapped_cache__DOT__hits);
    }
    while (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                      "@(posedge tb_direct_mapped_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_direct_mapped_cache.clk)", 
                                                             "tb/tb_direct_mapped_cache.v", 
                                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_direct_mapped_cache.v", 
                                             66);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0t] %-28s addr=%08h index=%0d %-4s rdata=%08h\n",7, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                >> 4U)), '#',32,((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss)
                                                  ? 0x4d495353U
                                                  : 0x00484954U)
                 , '#',32,vlSelfRef.tb_direct_mapped_cache__DOT__cpu_rdata);
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_direct_mapped_cache__DOT__do_read__2__label, Vtb_direct_mapped_cache__ConstPool__CONST_h6fcbf9f8_0);
    __Vtask_tb_direct_mapped_cache__DOT__do_read__2__addr = 0x00000080U;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__2__addr;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[0U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__2__label[0U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[1U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__2__label[1U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[2U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__2__label[2U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[3U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__2__label[3U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[4U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__2__label[4U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[5U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__2__label[5U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[6U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__2__label[6U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[7U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__2__label[7U];
    Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                  "@(posedge tb_direct_mapped_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_direct_mapped_cache.clk)", 
                                                         "tb/tb_direct_mapped_cache.v", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
        = vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_direct_mapped_cache.v", 
                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss 
        = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss) {
        vlSelfRef.tb_direct_mapped_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_direct_mapped_cache__DOT__misses);
    } else {
        vlSelfRef.tb_direct_mapped_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_direct_mapped_cache__DOT__hits);
    }
    while (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                      "@(posedge tb_direct_mapped_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_direct_mapped_cache.clk)", 
                                                             "tb/tb_direct_mapped_cache.v", 
                                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_direct_mapped_cache.v", 
                                             66);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0t] %-28s addr=%08h index=%0d %-4s rdata=%08h\n",7, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                >> 4U)), '#',32,((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss)
                                                  ? 0x4d495353U
                                                  : 0x00484954U)
                 , '#',32,vlSelfRef.tb_direct_mapped_cache__DOT__cpu_rdata);
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_direct_mapped_cache__DOT__do_read__3__label, Vtb_direct_mapped_cache__ConstPool__CONST_h57cc9279_0);
    __Vtask_tb_direct_mapped_cache__DOT__do_read__3__addr = 0U;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__3__addr;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[0U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__3__label[0U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[1U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__3__label[1U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[2U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__3__label[2U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[3U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__3__label[3U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[4U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__3__label[4U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[5U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__3__label[5U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[6U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__3__label[6U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[7U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__3__label[7U];
    Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                  "@(posedge tb_direct_mapped_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_direct_mapped_cache.clk)", 
                                                         "tb/tb_direct_mapped_cache.v", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
        = vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_direct_mapped_cache.v", 
                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss 
        = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss) {
        vlSelfRef.tb_direct_mapped_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_direct_mapped_cache__DOT__misses);
    } else {
        vlSelfRef.tb_direct_mapped_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_direct_mapped_cache__DOT__hits);
    }
    while (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                      "@(posedge tb_direct_mapped_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_direct_mapped_cache.clk)", 
                                                             "tb/tb_direct_mapped_cache.v", 
                                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_direct_mapped_cache.v", 
                                             66);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0t] %-28s addr=%08h index=%0d %-4s rdata=%08h\n",7, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                >> 4U)), '#',32,((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss)
                                                  ? 0x4d495353U
                                                  : 0x00484954U)
                 , '#',32,vlSelfRef.tb_direct_mapped_cache__DOT__cpu_rdata);
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_direct_mapped_cache__DOT__do_read__4__label, Vtb_direct_mapped_cache__ConstPool__CONST_h52e81592_0);
    __Vtask_tb_direct_mapped_cache__DOT__do_read__4__addr = 0x00000010U;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__4__addr;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[0U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__4__label[0U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[1U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__4__label[1U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[2U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__4__label[2U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[3U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__4__label[3U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[4U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__4__label[4U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[5U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__4__label[5U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[6U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__4__label[6U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[7U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__4__label[7U];
    Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                  "@(posedge tb_direct_mapped_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_direct_mapped_cache.clk)", 
                                                         "tb/tb_direct_mapped_cache.v", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
        = vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_direct_mapped_cache.v", 
                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss 
        = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss) {
        vlSelfRef.tb_direct_mapped_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_direct_mapped_cache__DOT__misses);
    } else {
        vlSelfRef.tb_direct_mapped_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_direct_mapped_cache__DOT__hits);
    }
    while (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                      "@(posedge tb_direct_mapped_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_direct_mapped_cache.clk)", 
                                                             "tb/tb_direct_mapped_cache.v", 
                                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_direct_mapped_cache.v", 
                                             66);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0t] %-28s addr=%08h index=%0d %-4s rdata=%08h\n",7, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                >> 4U)), '#',32,((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss)
                                                  ? 0x4d495353U
                                                  : 0x00484954U)
                 , '#',32,vlSelfRef.tb_direct_mapped_cache__DOT__cpu_rdata);
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 0U;
    VL_ASSIGN_W(256, __Vtask_tb_direct_mapped_cache__DOT__do_read__5__label, Vtb_direct_mapped_cache__ConstPool__CONST_h989cbd94_0);
    __Vtask_tb_direct_mapped_cache__DOT__do_read__5__addr = 0U;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__5__addr;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[0U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__5__label[0U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[1U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__5__label[1U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[2U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__5__label[2U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[3U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__5__label[3U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[4U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__5__label[4U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[5U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__5__label[5U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[6U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__5__label[6U];
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label[7U] 
        = __Vtask_tb_direct_mapped_cache__DOT__do_read__5__label[7U];
    Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                  "@(posedge tb_direct_mapped_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_direct_mapped_cache.clk)", 
                                                         "tb/tb_direct_mapped_cache.v", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
        = vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr;
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_direct_mapped_cache.v", 
                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss 
        = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall;
    if (vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss) {
        vlSelfRef.tb_direct_mapped_cache__DOT__misses 
            = ((IData)(1U) + vlSelfRef.tb_direct_mapped_cache__DOT__misses);
    } else {
        vlSelfRef.tb_direct_mapped_cache__DOT__hits 
            = ((IData)(1U) + vlSelfRef.tb_direct_mapped_cache__DOT__hits);
    }
    while (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall) {
        Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(vlSelf, 
                                                                      "@(posedge tb_direct_mapped_cache.clk)");
        co_await vlSelfRef.__VtrigSched_h7f7917ad__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_direct_mapped_cache.clk)", 
                                                             "tb/tb_direct_mapped_cache.v", 
                                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/tb_direct_mapped_cache.v", 
                                             66);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0t] %-28s addr=%08h index=%0d %-4s rdata=%08h\n",7, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',256,vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label.data()
                 , '#',32,vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr
                 , '#',3,(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                >> 4U)), '#',32,((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss)
                                                  ? 0x4d495353U
                                                  : 0x00484954U)
                 , '#',32,vlSelfRef.tb_direct_mapped_cache__DOT__cpu_rdata);
    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req = 0U;
    VL_WRITEF_NX("\nhits=%0d misses=%0d hit_rate=%0.1f%%\n",3
                 , '~',32,vlSelfRef.tb_direct_mapped_cache__DOT__hits
                 , '~',32,vlSelfRef.tb_direct_mapped_cache__DOT__misses
                 , 'D',((100.0 * VL_ISTOR_D_I(32, vlSelfRef.tb_direct_mapped_cache__DOT__hits)) 
                        / VL_ISTOR_D_I(32, (vlSelfRef.tb_direct_mapped_cache__DOT__hits 
                                            + vlSelfRef.tb_direct_mapped_cache__DOT__misses))));
    VL_FINISH_MT("tb/tb_direct_mapped_cache.v", 95, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_direct_mapped_cache___024root___eval_initial__TOP__Vtiming__1(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/tb_direct_mapped_cache.v", 
                                             48);
        vlSelfRef.tb_direct_mapped_cache__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__clk)));
    }
    co_return;
}

bool Vtb_direct_mapped_cache___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___trigger_anySet__act\n"); );
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

void Vtb_direct_mapped_cache___024root___nba_sequent__TOP__0(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___nba_sequent__TOP__0\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tb_direct_mapped_cache__DOT__dut__DOT__state;
    __Vdly__tb_direct_mapped_cache__DOT__dut__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__busy;
    __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__busy = 0;
    CData/*2:0*/ __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__cnt;
    __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__cnt = 0;
    CData/*2:0*/ __VdlyDim0__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v0;
    __VdlyDim0__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v0;
    __VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v0 = 0;
    IData/*24:0*/ __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__tag_array__v0;
    __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__tag_array__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb_direct_mapped_cache__DOT__dut__DOT__tag_array__v0;
    __VdlyDim0__tb_direct_mapped_cache__DOT__dut__DOT__tag_array__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v0;
    __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v0 = 0;
    CData/*2:0*/ __VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v0;
    __VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1;
    __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1 = 0;
    CData/*2:0*/ __VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1;
    __VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1;
    __VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v2;
    __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v2 = 0;
    CData/*2:0*/ __VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v2;
    __VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v3;
    __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v3 = 0;
    CData/*2:0*/ __VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v3;
    __VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v1;
    __VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v1 = 0;
    // Body
    __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__busy 
        = vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__busy;
    __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__cnt 
        = vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__cnt;
    __Vdly__tb_direct_mapped_cache__DOT__dut__DOT__state 
        = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state;
    __VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v1 = 0U;
    __VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1 = 0U;
    __VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__rst_n)))) {
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__i = 8U;
    }
    if (vlSelfRef.tb_direct_mapped_cache__DOT__rst_n) {
        if (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state) {
            if (vlSelfRef.tb_direct_mapped_cache__DOT__mem_ready) {
                vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__w = 4U;
                __VdlyDim0__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v0 
                    = (7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                             >> 4U));
                __VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v0 = 1U;
                __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__tag_array__v0 
                    = (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                       >> 7U);
                __VdlyDim0__tb_direct_mapped_cache__DOT__dut__DOT__tag_array__v0 
                    = (7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                             >> 4U));
                __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v0 
                    = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata[0U];
                __VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v0 
                    = (7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                             >> 4U));
                __Vdly__tb_direct_mapped_cache__DOT__dut__DOT__state = 0U;
                __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1 
                    = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata[1U];
                __VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1 
                    = (7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                             >> 4U));
                __VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1 = 1U;
                __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v2 
                    = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata[2U];
                __VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v2 
                    = (7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                             >> 4U));
                __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v3 
                    = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata[3U];
                __VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v3 
                    = (7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                             >> 4U));
            }
        } else if (((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req) 
                    & (~ (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb)))) {
            __Vdly__tb_direct_mapped_cache__DOT__dut__DOT__state = 1U;
        }
        vlSelfRef.tb_direct_mapped_cache__DOT__mem_ready = 0U;
        if (((~ (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__busy)) 
             & (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state))) {
            __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__busy = 1U;
            __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__cnt = 0U;
            vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched 
                = (0xfffffff0U & vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr);
        } else if (vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__busy) {
            if ((3U == (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__cnt))) {
                vlSelfRef.tb_direct_mapped_cache__DOT__mem_ready = 1U;
                __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__busy = 0U;
            } else {
                __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__cnt)));
            }
        }
    } else {
        __Vdly__tb_direct_mapped_cache__DOT__dut__DOT__state = 0U;
        __VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v1 = 1U;
        __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__busy = 0U;
        __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__cnt = 0U;
        vlSelfRef.tb_direct_mapped_cache__DOT__mem_ready = 0U;
    }
    if (__VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v0) {
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array[__VdlyDim0__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v0] = 1U;
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__tag_array[__VdlyDim0__tb_direct_mapped_cache__DOT__dut__DOT__tag_array__v0] 
            = __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__tag_array__v0;
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__data_array[__VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v0][0U] 
            = __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v0;
    }
    if (__VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__valid_array__v1) {
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array[0U] = 0U;
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array[1U] = 0U;
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array[2U] = 0U;
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array[3U] = 0U;
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array[4U] = 0U;
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array[5U] = 0U;
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array[6U] = 0U;
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array[7U] = 0U;
    }
    if (__VdlySet__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1) {
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__data_array[__VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1][1U] 
            = __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v1;
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__data_array[__VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v2][2U] 
            = __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v2;
        vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__data_array[__VdlyDim1__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v3][3U] 
            = __VdlyVal__tb_direct_mapped_cache__DOT__dut__DOT__data_array__v3;
    }
    vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__busy 
        = __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__busy;
    vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__cnt 
        = __Vdly__tb_direct_mapped_cache__DOT__mem__DOT__cnt;
    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state 
        = __Vdly__tb_direct_mapped_cache__DOT__dut__DOT__state;
    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata[0U] 
        = vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched;
    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata[1U] 
        = (IData)((((QData)((IData)(((IData)(8U) + vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((IData)(4U) 
                                                       + vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched)))));
    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata[2U] 
        = (IData)(((((QData)((IData)(((IData)(8U) + vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       ((IData)(4U) 
                                                        + vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched)))) 
                   >> 0x00000020U));
    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata[3U] 
        = ((IData)(0x0000000cU) + vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched);
}

void Vtb_direct_mapped_cache___024root___timing_ready(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___timing_ready\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready("@(posedge tb_direct_mapped_cache.clk)");
    }
}

void Vtb_direct_mapped_cache___024root___timing_resume(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___timing_resume\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h7f7917ad__0.moveToResumeQueue(
                                                          "@(posedge tb_direct_mapped_cache.clk)");
    vlSelfRef.__VtrigSched_h7f7917ad__0.resume("@(posedge tb_direct_mapped_cache.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_direct_mapped_cache___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_direct_mapped_cache___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_direct_mapped_cache___024root___eval_phase__act(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___eval_phase__act\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_direct_mapped_cache__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_direct_mapped_cache__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_direct_mapped_cache__DOT__clk__0 
            = vlSelfRef.tb_direct_mapped_cache__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_direct_mapped_cache__DOT__rst_n__0 
            = vlSelfRef.tb_direct_mapped_cache__DOT__rst_n;
    }
    Vtb_direct_mapped_cache___024root___timing_ready(vlSelf);
    Vtb_direct_mapped_cache___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_direct_mapped_cache___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_direct_mapped_cache___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_direct_mapped_cache___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_direct_mapped_cache___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_rdata 
                        = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__data_array
                        [(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                >> 4U))][(3U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                                >> 2U))];
                    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb 
                        = (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array
                           [(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                   >> 4U))] & (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__tag_array
                                               [(7U 
                                                 & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                                    >> 4U))] 
                                               == (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                                   >> 7U)));
                    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall 
                        = ((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state) 
                           | ((~ (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb)) 
                              & (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req)));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_direct_mapped_cache___024root___eval_phase__inact(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___eval_phase__inact\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_direct_mapped_cache.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_direct_mapped_cache___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_direct_mapped_cache___024root___eval_phase__nba(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___eval_phase__nba\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_direct_mapped_cache___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_direct_mapped_cache___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_comb__TOP__0
                    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb 
                        = (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array
                           [(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                   >> 4U))] & (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__tag_array
                                               [(7U 
                                                 & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                                    >> 4U))] 
                                               == (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                                   >> 7U)));
                    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_rdata 
                        = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__data_array
                        [(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                >> 4U))][(3U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                                >> 2U))];
                    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall 
                        = ((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state) 
                           | ((~ (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb)) 
                              & (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req)));
                }
            }
        }
        Vtb_direct_mapped_cache___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_direct_mapped_cache___024root___eval(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___eval\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_direct_mapped_cache___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_direct_mapped_cache.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_direct_mapped_cache.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_direct_mapped_cache___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_direct_mapped_cache.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_direct_mapped_cache___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_direct_mapped_cache___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_direct_mapped_cache___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0(Vtb_direct_mapped_cache___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root____VbeforeTrig_h7f7917ad__0\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_direct_mapped_cache__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_direct_mapped_cache__DOT__clk__0 
        = vlSelfRef.tb_direct_mapped_cache__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f7917ad__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_direct_mapped_cache___024root___eval_debug_assertions(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___eval_debug_assertions\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
