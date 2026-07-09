// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_direct_mapped_cache__Syms.h"


VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_dtype____0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_dtype____1(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_dtype____2(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_sub__TOP__0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_init_sub__TOP__0\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_direct_mapped_cache", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"LINE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"cpu_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"cpu_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"cpu_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"cpu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"cpu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"mem_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+20,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"hits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"misses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"do_read__Vstatic__addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+7,0,"do_read__Vstatic__label",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"do_read__Vstatic__was_miss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"LINE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"cpu_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"cpu_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"cpu_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+20,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"WORDS_PER_LINE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"WORD_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vtb_direct_mapped_cache___024root__trace_init_dtype____0(vlSelf, tracep, "valid_array", 0, c+24, VerilatedTraceSigDirection::NONE);

    Vtb_direct_mapped_cache___024root__trace_init_dtype____1(vlSelf, tracep, "tag_array", 0, c+32, VerilatedTraceSigDirection::NONE);

    Vtb_direct_mapped_cache___024root__trace_init_dtype____2(vlSelf, tracep, "data_array", 0, c+40, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"tag_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"word_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"S_REFILL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"hit_comb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "addr_dec", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"LINE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"index",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"word_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"WORDS_PER_LINE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"WORD_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"LINE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"mem_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"mem_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+20,0,"mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"WORDS_PER_LINE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"addr_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_dtype_sub____0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_dtype____0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_init_dtype____0\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_direct_mapped_cache___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_dtype_sub____0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_init_dtype_sub____0\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    for (int i = 0; i < 8; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_dtype_sub____1(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_dtype____1(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_init_dtype____1\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_direct_mapped_cache___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_dtype_sub____1(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_init_dtype_sub____1\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    for (int i = 0; i < 8; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 24,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_dtype_sub____2(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_dtype____2(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_init_dtype____2\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_direct_mapped_cache___024root__trace_init_dtype_sub____2(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_dtype_sub____2(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_init_dtype_sub____2\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+4,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+8,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+12,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+13,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+16,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+17,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+18,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+19,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[5]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+20,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[6]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+24,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+27,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[7]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+28,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+29,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_init_top(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_init_top\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_direct_mapped_cache___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_direct_mapped_cache___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_direct_mapped_cache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_register(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_register\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_direct_mapped_cache___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_direct_mapped_cache___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_direct_mapped_cache___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_direct_mapped_cache___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_const_0_sub_0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_const_0\n"); );
    // Body
    Vtb_direct_mapped_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_direct_mapped_cache___024root*>(voidSelf);
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_direct_mapped_cache___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_const_0_sub_0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_const_0_sub_0\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+83,(0x00000020U),32);
    bufp->fullIData(oldp+84,(0x00000010U),32);
    bufp->fullIData(oldp+85,(8U),32);
    bufp->fullIData(oldp+86,(4U),32);
    bufp->fullIData(oldp+87,(2U),32);
    bufp->fullIData(oldp+88,(3U),32);
    bufp->fullIData(oldp+89,(0x00000019U),32);
    bufp->fullBit(oldp+90,(0U));
    bufp->fullBit(oldp+91,(1U));
    bufp->fullIData(oldp+92,(4U),32);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_full_0_sub_0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_full_0\n"); );
    // Body
    Vtb_direct_mapped_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_direct_mapped_cache___024root*>(voidSelf);
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_direct_mapped_cache___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_full_dtype____0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 8>& __VdtypeVar);
VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_full_dtype____1(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*24:0*/, 8>& __VdtypeVar);
VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_full_dtype____2(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 8>& __VdtypeVar);

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_full_0_sub_0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_full_0_sub_0\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_direct_mapped_cache__DOT__rst_n));
    bufp->fullBit(oldp+1,(vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req));
    bufp->fullIData(oldp+2,(vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr),32);
    bufp->fullIData(oldp+3,((0xfffffff0U & vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr)),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_direct_mapped_cache__DOT__hits),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_direct_mapped_cache__DOT__misses),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__addr),32);
    bufp->fullWData(oldp+7,(vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__label),256);
    bufp->fullCData(oldp+15,((7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                    >> 4U))),3);
    bufp->fullIData(oldp+16,((vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                              >> 7U)),25);
    bufp->fullCData(oldp+17,((3U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                    >> 2U))),2);
    bufp->fullBit(oldp+18,(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state));
    bufp->fullBit(oldp+19,(vlSelfRef.tb_direct_mapped_cache__DOT__mem_ready));
    bufp->fullWData(oldp+20,(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata),128);
    Vtb_direct_mapped_cache___024root__trace_full_dtype____0(vlSelf, bufp, 24, vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array);
    Vtb_direct_mapped_cache___024root__trace_full_dtype____1(vlSelf, bufp, 32, vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__tag_array);
    Vtb_direct_mapped_cache___024root__trace_full_dtype____2(vlSelf, bufp, 40, vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__data_array);
    bufp->fullIData(oldp+72,(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__i),32);
    bufp->fullIData(oldp+73,(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__w),32);
    bufp->fullCData(oldp+74,(vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__cnt),3);
    bufp->fullBit(oldp+75,(vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__busy));
    bufp->fullIData(oldp+76,(vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched),32);
    bufp->fullBit(oldp+77,(vlSelfRef.tb_direct_mapped_cache__DOT__clk));
    bufp->fullBit(oldp+78,(((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req) 
                            & ((~ (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state)) 
                               & (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb)))));
    bufp->fullIData(oldp+79,(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__data_array
                             [(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                     >> 4U))][(3U & 
                                               (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                                >> 2U))]),32);
    bufp->fullBit(oldp+80,(((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state) 
                            | ((~ (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb)) 
                               & (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req)))));
    bufp->fullBit(oldp+81,(vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss));
    bufp->fullBit(oldp+82,(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb));
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_full_dtype____0(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_full_dtype____0\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
    bufp->fullBit(oldp+1,(__VdtypeVar[1]));
    bufp->fullBit(oldp+2,(__VdtypeVar[2]));
    bufp->fullBit(oldp+3,(__VdtypeVar[3]));
    bufp->fullBit(oldp+4,(__VdtypeVar[4]));
    bufp->fullBit(oldp+5,(__VdtypeVar[5]));
    bufp->fullBit(oldp+6,(__VdtypeVar[6]));
    bufp->fullBit(oldp+7,(__VdtypeVar[7]));
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_full_dtype____1(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*24:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_full_dtype____1\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),25);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),25);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),25);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),25);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),25);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),25);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),25);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),25);
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root__trace_full_dtype____2(Vtb_direct_mapped_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root__trace_full_dtype____2\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0U][0U]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[0U][1U]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[0U][2U]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[0U][3U]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[1U][0U]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[1U][1U]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[1U][2U]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[1U][3U]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[2U][0U]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[2U][1U]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[2U][2U]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[2U][3U]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[3U][0U]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[3U][1U]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[3U][2U]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[3U][3U]),32);
    bufp->fullIData(oldp+16,(__VdtypeVar[4U][0U]),32);
    bufp->fullIData(oldp+17,(__VdtypeVar[4U][1U]),32);
    bufp->fullIData(oldp+18,(__VdtypeVar[4U][2U]),32);
    bufp->fullIData(oldp+19,(__VdtypeVar[4U][3U]),32);
    bufp->fullIData(oldp+20,(__VdtypeVar[5U][0U]),32);
    bufp->fullIData(oldp+21,(__VdtypeVar[5U][1U]),32);
    bufp->fullIData(oldp+22,(__VdtypeVar[5U][2U]),32);
    bufp->fullIData(oldp+23,(__VdtypeVar[5U][3U]),32);
    bufp->fullIData(oldp+24,(__VdtypeVar[6U][0U]),32);
    bufp->fullIData(oldp+25,(__VdtypeVar[6U][1U]),32);
    bufp->fullIData(oldp+26,(__VdtypeVar[6U][2U]),32);
    bufp->fullIData(oldp+27,(__VdtypeVar[6U][3U]),32);
    bufp->fullIData(oldp+28,(__VdtypeVar[7U][0U]),32);
    bufp->fullIData(oldp+29,(__VdtypeVar[7U][1U]),32);
    bufp->fullIData(oldp+30,(__VdtypeVar[7U][2U]),32);
    bufp->fullIData(oldp+31,(__VdtypeVar[7U][3U]),32);
}
