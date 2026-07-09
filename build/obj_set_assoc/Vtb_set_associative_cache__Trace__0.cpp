// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_set_associative_cache__Syms.h"


void Vtb_set_associative_cache___024root__trace_chg_0_sub_0(Vtb_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_set_associative_cache___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root__trace_chg_0\n"); );
    // Body
    Vtb_set_associative_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_set_associative_cache___024root*>(voidSelf);
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_set_associative_cache___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_set_associative_cache___024root__trace_chg_dtype____0(Vtb_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 8>& __VdtypeVar);
void Vtb_set_associative_cache___024root__trace_chg_dtype____1(Vtb_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 8>& __VdtypeVar);
void Vtb_set_associative_cache___024root__trace_chg_dtype____2(Vtb_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*24:0*/, 2>, 8>& __VdtypeVar);
void Vtb_set_associative_cache___024root__trace_chg_dtype____3(Vtb_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 8>& __VdtypeVar);

void Vtb_set_associative_cache___024root__trace_chg_0_sub_0(Vtb_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root__trace_chg_0_sub_0\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_set_associative_cache__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_set_associative_cache__DOT__cpu_req));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_set_associative_cache__DOT__cpu_we));
        bufp->chgIData(oldp+3,(vlSelfRef.tb_set_associative_cache__DOT__cpu_addr),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_set_associative_cache__DOT__cpu_wdata),32);
        bufp->chgIData(oldp+5,((0xfffffff0U & vlSelfRef.tb_set_associative_cache__DOT__cpu_addr)),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_set_associative_cache__DOT__hits),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_set_associative_cache__DOT__misses),32);
        bufp->chgBit(oldp+8,(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__rw));
        bufp->chgIData(oldp+9,(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__addr),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__wdata),32);
        bufp->chgWData(oldp+11,(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__label),256);
        bufp->chgCData(oldp+19,((7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                       >> 4U))),3);
        bufp->chgIData(oldp+20,((vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 7U)),25);
        bufp->chgCData(oldp+21,((3U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                       >> 2U))),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgWData(oldp+22,(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r),128);
        bufp->chgBit(oldp+26,(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r));
        bufp->chgBit(oldp+27,(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r));
        bufp->chgBit(oldp+28,(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r));
        bufp->chgBit(oldp+29,(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+30,((2U == (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state))));
        bufp->chgBit(oldp+31,(vlSelfRef.tb_set_associative_cache__DOT__mem_ready));
        bufp->chgWData(oldp+32,(vlSelfRef.tb_set_associative_cache__DOT__mem_rdata),128);
        bufp->chgBit(oldp+36,((1U == (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state))));
        bufp->chgBit(oldp+37,(vlSelfRef.tb_set_associative_cache__DOT__mem_wr_done));
        Vtb_set_associative_cache___024root__trace_chg_dtype____0(vlSelf, bufp, 38, vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array);
        Vtb_set_associative_cache___024root__trace_chg_dtype____1(vlSelf, bufp, 54, vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array);
        Vtb_set_associative_cache___024root__trace_chg_dtype____2(vlSelf, bufp, 70, vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__tag_array);
        Vtb_set_associative_cache___024root__trace_chg_dtype____3(vlSelf, bufp, 86, vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter);
        bufp->chgCData(oldp+102,(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state),2);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__si),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__wi),32);
        bufp->chgIData(oldp+105,(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__wj),32);
        bufp->chgBit(oldp+106,(vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__busy));
        bufp->chgBit(oldp+107,(vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__op_is_write));
        bufp->chgCData(oldp+108,(vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__cnt),3);
        bufp->chgIData(oldp+109,(vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched),32);
        bufp->chgWData(oldp+110,(vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wdata_latched),128);
        bufp->chgCData(oldp+114,((0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                                                 >> 4U))),8);
        bufp->chgIData(oldp+115,(vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__li),32);
        bufp->chgIData(oldp+116,(vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__wj),32);
    }
    bufp->chgBit(oldp+117,(vlSelfRef.tb_set_associative_cache__DOT__clk));
    bufp->chgBit(oldp+118,(((IData)(vlSelfRef.tb_set_associative_cache__DOT__cpu_req) 
                            & ((IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r) 
                               & (0U == (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state))))));
    bufp->chgIData(oldp+119,(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
                             [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                     >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r]
                             [(3U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                     >> 2U))]),32);
    bufp->chgBit(oldp+120,(((0U != (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state)) 
                            | ((~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r)) 
                               & (IData)(vlSelfRef.tb_set_associative_cache__DOT__cpu_req)))));
    bufp->chgIData(oldp+121,(((vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__tag_array
                               [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                       >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r] 
                               << 7U) | (0x00000070U 
                                         & vlSelfRef.tb_set_associative_cache__DOT__cpu_addr))),32);
    bufp->chgBit(oldp+122,(vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss));
    bufp->chgBit(oldp+123,((vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
                            [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                    >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r] 
                            & vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array
                            [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                    >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r])));
}

void Vtb_set_associative_cache___024root__trace_chg_dtype____0(Vtb_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root__trace_chg_dtype____0\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->chgBit(oldp+2,(__VdtypeVar[1U][0U]));
    bufp->chgBit(oldp+3,(__VdtypeVar[1U][1U]));
    bufp->chgBit(oldp+4,(__VdtypeVar[2U][0U]));
    bufp->chgBit(oldp+5,(__VdtypeVar[2U][1U]));
    bufp->chgBit(oldp+6,(__VdtypeVar[3U][0U]));
    bufp->chgBit(oldp+7,(__VdtypeVar[3U][1U]));
    bufp->chgBit(oldp+8,(__VdtypeVar[4U][0U]));
    bufp->chgBit(oldp+9,(__VdtypeVar[4U][1U]));
    bufp->chgBit(oldp+10,(__VdtypeVar[5U][0U]));
    bufp->chgBit(oldp+11,(__VdtypeVar[5U][1U]));
    bufp->chgBit(oldp+12,(__VdtypeVar[6U][0U]));
    bufp->chgBit(oldp+13,(__VdtypeVar[6U][1U]));
    bufp->chgBit(oldp+14,(__VdtypeVar[7U][0U]));
    bufp->chgBit(oldp+15,(__VdtypeVar[7U][1U]));
}

void Vtb_set_associative_cache___024root__trace_chg_dtype____1(Vtb_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root__trace_chg_dtype____1\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->chgBit(oldp+2,(__VdtypeVar[1U][0U]));
    bufp->chgBit(oldp+3,(__VdtypeVar[1U][1U]));
    bufp->chgBit(oldp+4,(__VdtypeVar[2U][0U]));
    bufp->chgBit(oldp+5,(__VdtypeVar[2U][1U]));
    bufp->chgBit(oldp+6,(__VdtypeVar[3U][0U]));
    bufp->chgBit(oldp+7,(__VdtypeVar[3U][1U]));
    bufp->chgBit(oldp+8,(__VdtypeVar[4U][0U]));
    bufp->chgBit(oldp+9,(__VdtypeVar[4U][1U]));
    bufp->chgBit(oldp+10,(__VdtypeVar[5U][0U]));
    bufp->chgBit(oldp+11,(__VdtypeVar[5U][1U]));
    bufp->chgBit(oldp+12,(__VdtypeVar[6U][0U]));
    bufp->chgBit(oldp+13,(__VdtypeVar[6U][1U]));
    bufp->chgBit(oldp+14,(__VdtypeVar[7U][0U]));
    bufp->chgBit(oldp+15,(__VdtypeVar[7U][1U]));
}

void Vtb_set_associative_cache___024root__trace_chg_dtype____2(Vtb_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*24:0*/, 2>, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root__trace_chg_dtype____2\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0U][0U]),25);
    bufp->chgIData(oldp+1,(__VdtypeVar[0U][1U]),25);
    bufp->chgIData(oldp+2,(__VdtypeVar[1U][0U]),25);
    bufp->chgIData(oldp+3,(__VdtypeVar[1U][1U]),25);
    bufp->chgIData(oldp+4,(__VdtypeVar[2U][0U]),25);
    bufp->chgIData(oldp+5,(__VdtypeVar[2U][1U]),25);
    bufp->chgIData(oldp+6,(__VdtypeVar[3U][0U]),25);
    bufp->chgIData(oldp+7,(__VdtypeVar[3U][1U]),25);
    bufp->chgIData(oldp+8,(__VdtypeVar[4U][0U]),25);
    bufp->chgIData(oldp+9,(__VdtypeVar[4U][1U]),25);
    bufp->chgIData(oldp+10,(__VdtypeVar[5U][0U]),25);
    bufp->chgIData(oldp+11,(__VdtypeVar[5U][1U]),25);
    bufp->chgIData(oldp+12,(__VdtypeVar[6U][0U]),25);
    bufp->chgIData(oldp+13,(__VdtypeVar[6U][1U]),25);
    bufp->chgIData(oldp+14,(__VdtypeVar[7U][0U]),25);
    bufp->chgIData(oldp+15,(__VdtypeVar[7U][1U]),25);
}

void Vtb_set_associative_cache___024root__trace_chg_dtype____3(Vtb_set_associative_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root__trace_chg_dtype____3\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->chgBit(oldp+2,(__VdtypeVar[1U][0U]));
    bufp->chgBit(oldp+3,(__VdtypeVar[1U][1U]));
    bufp->chgBit(oldp+4,(__VdtypeVar[2U][0U]));
    bufp->chgBit(oldp+5,(__VdtypeVar[2U][1U]));
    bufp->chgBit(oldp+6,(__VdtypeVar[3U][0U]));
    bufp->chgBit(oldp+7,(__VdtypeVar[3U][1U]));
    bufp->chgBit(oldp+8,(__VdtypeVar[4U][0U]));
    bufp->chgBit(oldp+9,(__VdtypeVar[4U][1U]));
    bufp->chgBit(oldp+10,(__VdtypeVar[5U][0U]));
    bufp->chgBit(oldp+11,(__VdtypeVar[5U][1U]));
    bufp->chgBit(oldp+12,(__VdtypeVar[6U][0U]));
    bufp->chgBit(oldp+13,(__VdtypeVar[6U][1U]));
    bufp->chgBit(oldp+14,(__VdtypeVar[7U][0U]));
    bufp->chgBit(oldp+15,(__VdtypeVar[7U][1U]));
}

void Vtb_set_associative_cache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root__trace_cleanup\n"); );
    // Body
    Vtb_set_associative_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_set_associative_cache___024root*>(voidSelf);
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
