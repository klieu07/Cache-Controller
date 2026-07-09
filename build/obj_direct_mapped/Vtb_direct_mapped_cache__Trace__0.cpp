// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_direct_mapped_cache__Syms.h"


void Vtb_direct_mapped_cache___024root__trace_chg_0_sub_0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_direct_mapped_cache___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_chg_0\n"); );
    // Body
    Vtb_direct_mapped_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_direct_mapped_cache___024root*>(voidSelf);
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_direct_mapped_cache___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_direct_mapped_cache___024root__trace_chg_dtype____0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 8>& __VdtypeVar);
void Vtb_direct_mapped_cache___024root__trace_chg_dtype____1(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*24:0*/, 8>& __VdtypeVar);
void Vtb_direct_mapped_cache___024root__trace_chg_dtype____2(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 8>& __VdtypeVar);

void Vtb_direct_mapped_cache___024root__trace_chg_0_sub_0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_chg_0_sub_0\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_direct_mapped_cache__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req));
        bufp->chgIData(oldp+2,(vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr),32);
        bufp->chgIData(oldp+3,((0xfffffff0U & vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr)),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_direct_mapped_cache__DOT__hits),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_direct_mapped_cache__DOT__misses),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr),32);
        bufp->chgWData(oldp+7,(vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label),256);
        bufp->chgCData(oldp+15,((7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                       >> 4U))),3);
        bufp->chgIData(oldp+16,((vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                 >> 7U)),25);
        bufp->chgCData(oldp+17,((3U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                       >> 2U))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+18,(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state));
        bufp->chgBit(oldp+19,(vlSelfRef.tb_direct_mapped_cache__DOT__mem_ready));
        bufp->chgWData(oldp+20,(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata),128);
        Vtb_direct_mapped_cache___024root__trace_chg_dtype____0(vlSelf, bufp, 24, vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array);
        Vtb_direct_mapped_cache___024root__trace_chg_dtype____1(vlSelf, bufp, 32, vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__tag_array);
        Vtb_direct_mapped_cache___024root__trace_chg_dtype____2(vlSelf, bufp, 40, vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__data_array);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__i),32);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__w),32);
        bufp->chgCData(oldp+74,(vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__cnt),3);
        bufp->chgBit(oldp+75,(vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__busy));
        bufp->chgIData(oldp+76,(vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched),32);
    }
    bufp->chgBit(oldp+77,(vlSelfRef.tb_direct_mapped_cache__DOT__clk));
    bufp->chgBit(oldp+78,(((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req) 
                           & ((~ (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state)) 
                              & (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb)))));
    bufp->chgIData(oldp+79,(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__data_array
                            [(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                    >> 4U))][(3U & 
                                              (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                               >> 2U))]),32);
    bufp->chgBit(oldp+80,(((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state) 
                           | ((~ (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb)) 
                              & (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req)))));
    bufp->chgBit(oldp+81,(vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss));
    bufp->chgBit(oldp+82,(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb));
}

void Vtb_direct_mapped_cache___024root__trace_chg_dtype____0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_chg_dtype____0\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
    bufp->chgBit(oldp+4,(__VdtypeVar[4]));
    bufp->chgBit(oldp+5,(__VdtypeVar[5]));
    bufp->chgBit(oldp+6,(__VdtypeVar[6]));
    bufp->chgBit(oldp+7,(__VdtypeVar[7]));
}

void Vtb_direct_mapped_cache___024root__trace_chg_dtype____1(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*24:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_chg_dtype____1\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),25);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),25);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),25);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),25);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),25);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),25);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),25);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),25);
}

void Vtb_direct_mapped_cache___024root__trace_chg_dtype____2(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_chg_dtype____2\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0U][0U]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0U][1U]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[0U][2U]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[0U][3U]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[1U][0U]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[1U][1U]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[1U][2U]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[1U][3U]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[2U][0U]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[2U][1U]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[2U][2U]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[2U][3U]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[3U][0U]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[3U][1U]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[3U][2U]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[3U][3U]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[4U][0U]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[4U][1U]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[4U][2U]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[4U][3U]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[5U][0U]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[5U][1U]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[5U][2U]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[5U][3U]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[6U][0U]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[6U][1U]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[6U][2U]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[6U][3U]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[7U][0U]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[7U][1U]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[7U][2U]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[7U][3U]),32);
}

void Vtb_direct_mapped_cache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_cleanup\n"); );
    // Body
    Vtb_direct_mapped_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_direct_mapped_cache___024root*>(voidSelf);
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
