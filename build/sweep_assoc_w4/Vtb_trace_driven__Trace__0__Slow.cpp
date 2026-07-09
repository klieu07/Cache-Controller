// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_trace_driven__Syms.h"


VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype____0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype____1(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype____2(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype____3(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_sub__TOP__0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_init_sub__TOP__0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_trace_driven", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"LINE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"HIT_TIME_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"MISS_PENALTY_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"cpu_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"cpu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"cpu_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"cpu_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+184,0,"cpu_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"cpu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+186,0,"cpu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"mem_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+34,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"mem_wr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"mem_wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+24,0,"mem_wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"mem_wr_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"hits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"misses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"do_op__Vstatic__rw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"do_op__Vstatic__addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"do_op__Vstatic__wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+188,0,"do_op__Vstatic__was_miss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"scan_ret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+13,0,"op_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"trace_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"n_ops",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_DOUBLE(tracep,c+17,0,"hit_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+19,0,"amat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"LINE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"cpu_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"cpu_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"cpu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+184,0,"cpu_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+186,0,"cpu_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+34,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"mem_wr_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"mem_wr_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+24,0,"mem_wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"mem_wr_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"WORDS_PER_LINE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"WORD_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"WAY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vtb_trace_driven___024root__trace_init_dtype____0(vlSelf, tracep, "valid_array", 0, c+40, VerilatedTraceSigDirection::NONE);

    Vtb_trace_driven___024root__trace_init_dtype____1(vlSelf, tracep, "dirty_array", 0, c+72, VerilatedTraceSigDirection::NONE);

    Vtb_trace_driven___024root__trace_init_dtype____2(vlSelf, tracep, "tag_array", 0, c+104, VerilatedTraceSigDirection::NONE);

    Vtb_trace_driven___024root__trace_init_dtype____3(vlSelf, tracep, "lru_counter", 0, c+136, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"tag_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"word_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"hit_comb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"hit_way_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"hw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"victim_way_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"victim_is_invalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"vw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"need_writeback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+200,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+201,0,"S_WRITEBACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+202,0,"S_REFILL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+24,0,"mem_wr_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"wi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"wj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "addr_dec", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"LINE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"index",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"word_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"WORDS_PER_LINE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"WORD_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"LINE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"mem_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"mem_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+34,0,"mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"mem_wr_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"mem_wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+24,0,"mem_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"mem_wr_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"WORDS_PER_LINE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"LINE_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+172,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+173,0,"op_is_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"addr_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+176,0,"wdata_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+180,0,"line_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"li",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"wj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"wk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype_sub____0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype____0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_init_dtype____0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_trace_driven___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype_sub____0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_init_dtype_sub____0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+4,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+8,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+12,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+16,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[5]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+20,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+21,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[6]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+24,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+25,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[7]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+28,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype_sub____1(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype____1(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_init_dtype____1\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_trace_driven___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype_sub____1(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_init_dtype_sub____1\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+4,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+8,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+12,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+16,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[5]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+20,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+21,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[6]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+24,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+25,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[7]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BIT(tracep,c+28,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype_sub____2(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype____2(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_init_dtype____2\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_trace_driven___024root__trace_init_dtype_sub____2(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype_sub____2(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_init_dtype_sub____2\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+4,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+5,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+6,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+7,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+8,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+9,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+10,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+11,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+12,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+13,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+15,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+16,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+17,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+18,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+19,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[5]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+20,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+21,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+22,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+23,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[6]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+24,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+25,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+26,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+27,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[7]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+28,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+29,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+30,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+31,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype_sub____3(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype____3(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_init_dtype____3\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_trace_driven___024root__trace_init_dtype_sub____3(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_dtype_sub____3(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_init_dtype_sub____3\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+4,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+5,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+6,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+7,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+8,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+9,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+10,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+11,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+12,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+13,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+15,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[4]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+16,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+17,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+18,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+19,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[5]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+20,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+21,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+22,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+23,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[6]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+24,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+25,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+26,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+27,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[7]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+28,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+29,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+30,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+31,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_init_top(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_init_top\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_trace_driven___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_trace_driven___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_trace_driven___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_trace_driven___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_register(Vtb_trace_driven___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_register\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_trace_driven___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_trace_driven___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_trace_driven___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_trace_driven___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_const_0_sub_0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_const_0\n"); );
    // Body
    Vtb_trace_driven___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_trace_driven___024root*>(voidSelf);
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_trace_driven___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_const_0_sub_0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_const_0_sub_0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+190,(0x00000020U),32);
    bufp->fullIData(oldp+191,(0x00000010U),32);
    bufp->fullIData(oldp+192,(8U),32);
    bufp->fullIData(oldp+193,(4U),32);
    bufp->fullIData(oldp+194,(1U),32);
    bufp->fullIData(oldp+195,(0x00000064U),32);
    bufp->fullIData(oldp+196,(2U),32);
    bufp->fullIData(oldp+197,(3U),32);
    bufp->fullIData(oldp+198,(0x00000019U),32);
    bufp->fullIData(oldp+199,(4U),32);
    bufp->fullCData(oldp+200,(0U),2);
    bufp->fullCData(oldp+201,(1U),2);
    bufp->fullCData(oldp+202,(2U),2);
    bufp->fullIData(oldp+203,(0x00000100U),32);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_full_0_sub_0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_full_0\n"); );
    // Body
    Vtb_trace_driven___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_trace_driven___024root*>(voidSelf);
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_trace_driven___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_full_dtype____0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 8>& __VdtypeVar);
VL_ATTR_COLD void Vtb_trace_driven___024root__trace_full_dtype____1(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 8>& __VdtypeVar);
VL_ATTR_COLD void Vtb_trace_driven___024root__trace_full_dtype____2(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*24:0*/, 4>, 8>& __VdtypeVar);
VL_ATTR_COLD void Vtb_trace_driven___024root__trace_full_dtype____3(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 8>& __VdtypeVar);

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_full_0_sub_0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_full_0_sub_0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_trace_driven__DOT__rst_n));
    bufp->fullBit(oldp+1,(vlSelfRef.tb_trace_driven__DOT__cpu_req));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_trace_driven__DOT__cpu_we));
    bufp->fullIData(oldp+3,(vlSelfRef.tb_trace_driven__DOT__cpu_addr),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_trace_driven__DOT__cpu_wdata),32);
    bufp->fullIData(oldp+5,((0xfffffff0U & vlSelfRef.tb_trace_driven__DOT__cpu_addr)),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_trace_driven__DOT__hits),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_trace_driven__DOT__misses),32);
    bufp->fullBit(oldp+8,(vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__rw));
    bufp->fullIData(oldp+9,(vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__addr),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__wdata),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_trace_driven__DOT__fd),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_trace_driven__DOT__scan_ret),32);
    bufp->fullQData(oldp+13,(vlSelfRef.tb_trace_driven__DOT__op_str),64);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_trace_driven__DOT__trace_addr),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_trace_driven__DOT__n_ops),32);
    bufp->fullDouble(oldp+17,(vlSelfRef.tb_trace_driven__DOT__hit_rate));
    bufp->fullDouble(oldp+19,(vlSelfRef.tb_trace_driven__DOT__amat));
    bufp->fullCData(oldp+21,((7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                    >> 4U))),3);
    bufp->fullIData(oldp+22,((vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                              >> 7U)),25);
    bufp->fullCData(oldp+23,((3U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                    >> 2U))),2);
    bufp->fullWData(oldp+24,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r),128);
    bufp->fullBit(oldp+28,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r));
    bufp->fullCData(oldp+29,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r),2);
    bufp->fullCData(oldp+30,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r),2);
    bufp->fullBit(oldp+31,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r));
    bufp->fullBit(oldp+32,((2U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state))));
    bufp->fullBit(oldp+33,(vlSelfRef.tb_trace_driven__DOT__mem_ready));
    bufp->fullWData(oldp+34,(vlSelfRef.tb_trace_driven__DOT__mem_rdata),128);
    bufp->fullBit(oldp+38,((1U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state))));
    bufp->fullBit(oldp+39,(vlSelfRef.tb_trace_driven__DOT__mem_wr_done));
    Vtb_trace_driven___024root__trace_full_dtype____0(vlSelf, bufp, 40, vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array);
    Vtb_trace_driven___024root__trace_full_dtype____1(vlSelf, bufp, 72, vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array);
    Vtb_trace_driven___024root__trace_full_dtype____2(vlSelf, bufp, 104, vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array);
    Vtb_trace_driven___024root__trace_full_dtype____3(vlSelf, bufp, 136, vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter);
    bufp->fullCData(oldp+168,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state),2);
    bufp->fullIData(oldp+169,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__si),32);
    bufp->fullIData(oldp+170,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__wi),32);
    bufp->fullIData(oldp+171,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__wj),32);
    bufp->fullBit(oldp+172,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__busy));
    bufp->fullBit(oldp+173,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__op_is_write));
    bufp->fullCData(oldp+174,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__cnt),3);
    bufp->fullIData(oldp+175,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched),32);
    bufp->fullWData(oldp+176,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched),128);
    bufp->fullCData(oldp+180,((0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                                              >> 4U))),8);
    bufp->fullIData(oldp+181,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__li),32);
    bufp->fullIData(oldp+182,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__wj),32);
    bufp->fullBit(oldp+183,(vlSelfRef.tb_trace_driven__DOT__clk));
    bufp->fullBit(oldp+184,(((IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req) 
                             & ((IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r) 
                                & (0U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state))))));
    bufp->fullIData(oldp+185,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
                              [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                      >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r]
                              [(3U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                      >> 2U))]),32);
    bufp->fullBit(oldp+186,(((0U != (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state)) 
                             | ((~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r)) 
                                & (IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req)))));
    bufp->fullIData(oldp+187,(((vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array
                                [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                        >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r] 
                                << 7U) | (0x00000070U 
                                          & vlSelfRef.tb_trace_driven__DOT__cpu_addr))),32);
    bufp->fullBit(oldp+188,(vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__was_miss));
    bufp->fullBit(oldp+189,((vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
                             [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                     >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r] 
                             & vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array
                             [(7U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                     >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r])));
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_full_dtype____0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_full_dtype____0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->fullBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->fullBit(oldp+2,(__VdtypeVar[0U][2U]));
    bufp->fullBit(oldp+3,(__VdtypeVar[0U][3U]));
    bufp->fullBit(oldp+4,(__VdtypeVar[1U][0U]));
    bufp->fullBit(oldp+5,(__VdtypeVar[1U][1U]));
    bufp->fullBit(oldp+6,(__VdtypeVar[1U][2U]));
    bufp->fullBit(oldp+7,(__VdtypeVar[1U][3U]));
    bufp->fullBit(oldp+8,(__VdtypeVar[2U][0U]));
    bufp->fullBit(oldp+9,(__VdtypeVar[2U][1U]));
    bufp->fullBit(oldp+10,(__VdtypeVar[2U][2U]));
    bufp->fullBit(oldp+11,(__VdtypeVar[2U][3U]));
    bufp->fullBit(oldp+12,(__VdtypeVar[3U][0U]));
    bufp->fullBit(oldp+13,(__VdtypeVar[3U][1U]));
    bufp->fullBit(oldp+14,(__VdtypeVar[3U][2U]));
    bufp->fullBit(oldp+15,(__VdtypeVar[3U][3U]));
    bufp->fullBit(oldp+16,(__VdtypeVar[4U][0U]));
    bufp->fullBit(oldp+17,(__VdtypeVar[4U][1U]));
    bufp->fullBit(oldp+18,(__VdtypeVar[4U][2U]));
    bufp->fullBit(oldp+19,(__VdtypeVar[4U][3U]));
    bufp->fullBit(oldp+20,(__VdtypeVar[5U][0U]));
    bufp->fullBit(oldp+21,(__VdtypeVar[5U][1U]));
    bufp->fullBit(oldp+22,(__VdtypeVar[5U][2U]));
    bufp->fullBit(oldp+23,(__VdtypeVar[5U][3U]));
    bufp->fullBit(oldp+24,(__VdtypeVar[6U][0U]));
    bufp->fullBit(oldp+25,(__VdtypeVar[6U][1U]));
    bufp->fullBit(oldp+26,(__VdtypeVar[6U][2U]));
    bufp->fullBit(oldp+27,(__VdtypeVar[6U][3U]));
    bufp->fullBit(oldp+28,(__VdtypeVar[7U][0U]));
    bufp->fullBit(oldp+29,(__VdtypeVar[7U][1U]));
    bufp->fullBit(oldp+30,(__VdtypeVar[7U][2U]));
    bufp->fullBit(oldp+31,(__VdtypeVar[7U][3U]));
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_full_dtype____1(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_full_dtype____1\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->fullBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->fullBit(oldp+2,(__VdtypeVar[0U][2U]));
    bufp->fullBit(oldp+3,(__VdtypeVar[0U][3U]));
    bufp->fullBit(oldp+4,(__VdtypeVar[1U][0U]));
    bufp->fullBit(oldp+5,(__VdtypeVar[1U][1U]));
    bufp->fullBit(oldp+6,(__VdtypeVar[1U][2U]));
    bufp->fullBit(oldp+7,(__VdtypeVar[1U][3U]));
    bufp->fullBit(oldp+8,(__VdtypeVar[2U][0U]));
    bufp->fullBit(oldp+9,(__VdtypeVar[2U][1U]));
    bufp->fullBit(oldp+10,(__VdtypeVar[2U][2U]));
    bufp->fullBit(oldp+11,(__VdtypeVar[2U][3U]));
    bufp->fullBit(oldp+12,(__VdtypeVar[3U][0U]));
    bufp->fullBit(oldp+13,(__VdtypeVar[3U][1U]));
    bufp->fullBit(oldp+14,(__VdtypeVar[3U][2U]));
    bufp->fullBit(oldp+15,(__VdtypeVar[3U][3U]));
    bufp->fullBit(oldp+16,(__VdtypeVar[4U][0U]));
    bufp->fullBit(oldp+17,(__VdtypeVar[4U][1U]));
    bufp->fullBit(oldp+18,(__VdtypeVar[4U][2U]));
    bufp->fullBit(oldp+19,(__VdtypeVar[4U][3U]));
    bufp->fullBit(oldp+20,(__VdtypeVar[5U][0U]));
    bufp->fullBit(oldp+21,(__VdtypeVar[5U][1U]));
    bufp->fullBit(oldp+22,(__VdtypeVar[5U][2U]));
    bufp->fullBit(oldp+23,(__VdtypeVar[5U][3U]));
    bufp->fullBit(oldp+24,(__VdtypeVar[6U][0U]));
    bufp->fullBit(oldp+25,(__VdtypeVar[6U][1U]));
    bufp->fullBit(oldp+26,(__VdtypeVar[6U][2U]));
    bufp->fullBit(oldp+27,(__VdtypeVar[6U][3U]));
    bufp->fullBit(oldp+28,(__VdtypeVar[7U][0U]));
    bufp->fullBit(oldp+29,(__VdtypeVar[7U][1U]));
    bufp->fullBit(oldp+30,(__VdtypeVar[7U][2U]));
    bufp->fullBit(oldp+31,(__VdtypeVar[7U][3U]));
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_full_dtype____2(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*24:0*/, 4>, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_full_dtype____2\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0U][0U]),25);
    bufp->fullIData(oldp+1,(__VdtypeVar[0U][1U]),25);
    bufp->fullIData(oldp+2,(__VdtypeVar[0U][2U]),25);
    bufp->fullIData(oldp+3,(__VdtypeVar[0U][3U]),25);
    bufp->fullIData(oldp+4,(__VdtypeVar[1U][0U]),25);
    bufp->fullIData(oldp+5,(__VdtypeVar[1U][1U]),25);
    bufp->fullIData(oldp+6,(__VdtypeVar[1U][2U]),25);
    bufp->fullIData(oldp+7,(__VdtypeVar[1U][3U]),25);
    bufp->fullIData(oldp+8,(__VdtypeVar[2U][0U]),25);
    bufp->fullIData(oldp+9,(__VdtypeVar[2U][1U]),25);
    bufp->fullIData(oldp+10,(__VdtypeVar[2U][2U]),25);
    bufp->fullIData(oldp+11,(__VdtypeVar[2U][3U]),25);
    bufp->fullIData(oldp+12,(__VdtypeVar[3U][0U]),25);
    bufp->fullIData(oldp+13,(__VdtypeVar[3U][1U]),25);
    bufp->fullIData(oldp+14,(__VdtypeVar[3U][2U]),25);
    bufp->fullIData(oldp+15,(__VdtypeVar[3U][3U]),25);
    bufp->fullIData(oldp+16,(__VdtypeVar[4U][0U]),25);
    bufp->fullIData(oldp+17,(__VdtypeVar[4U][1U]),25);
    bufp->fullIData(oldp+18,(__VdtypeVar[4U][2U]),25);
    bufp->fullIData(oldp+19,(__VdtypeVar[4U][3U]),25);
    bufp->fullIData(oldp+20,(__VdtypeVar[5U][0U]),25);
    bufp->fullIData(oldp+21,(__VdtypeVar[5U][1U]),25);
    bufp->fullIData(oldp+22,(__VdtypeVar[5U][2U]),25);
    bufp->fullIData(oldp+23,(__VdtypeVar[5U][3U]),25);
    bufp->fullIData(oldp+24,(__VdtypeVar[6U][0U]),25);
    bufp->fullIData(oldp+25,(__VdtypeVar[6U][1U]),25);
    bufp->fullIData(oldp+26,(__VdtypeVar[6U][2U]),25);
    bufp->fullIData(oldp+27,(__VdtypeVar[6U][3U]),25);
    bufp->fullIData(oldp+28,(__VdtypeVar[7U][0U]),25);
    bufp->fullIData(oldp+29,(__VdtypeVar[7U][1U]),25);
    bufp->fullIData(oldp+30,(__VdtypeVar[7U][2U]),25);
    bufp->fullIData(oldp+31,(__VdtypeVar[7U][3U]),25);
}

VL_ATTR_COLD void Vtb_trace_driven___024root__trace_full_dtype____3(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_full_dtype____3\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0U][0U]),2);
    bufp->fullCData(oldp+1,(__VdtypeVar[0U][1U]),2);
    bufp->fullCData(oldp+2,(__VdtypeVar[0U][2U]),2);
    bufp->fullCData(oldp+3,(__VdtypeVar[0U][3U]),2);
    bufp->fullCData(oldp+4,(__VdtypeVar[1U][0U]),2);
    bufp->fullCData(oldp+5,(__VdtypeVar[1U][1U]),2);
    bufp->fullCData(oldp+6,(__VdtypeVar[1U][2U]),2);
    bufp->fullCData(oldp+7,(__VdtypeVar[1U][3U]),2);
    bufp->fullCData(oldp+8,(__VdtypeVar[2U][0U]),2);
    bufp->fullCData(oldp+9,(__VdtypeVar[2U][1U]),2);
    bufp->fullCData(oldp+10,(__VdtypeVar[2U][2U]),2);
    bufp->fullCData(oldp+11,(__VdtypeVar[2U][3U]),2);
    bufp->fullCData(oldp+12,(__VdtypeVar[3U][0U]),2);
    bufp->fullCData(oldp+13,(__VdtypeVar[3U][1U]),2);
    bufp->fullCData(oldp+14,(__VdtypeVar[3U][2U]),2);
    bufp->fullCData(oldp+15,(__VdtypeVar[3U][3U]),2);
    bufp->fullCData(oldp+16,(__VdtypeVar[4U][0U]),2);
    bufp->fullCData(oldp+17,(__VdtypeVar[4U][1U]),2);
    bufp->fullCData(oldp+18,(__VdtypeVar[4U][2U]),2);
    bufp->fullCData(oldp+19,(__VdtypeVar[4U][3U]),2);
    bufp->fullCData(oldp+20,(__VdtypeVar[5U][0U]),2);
    bufp->fullCData(oldp+21,(__VdtypeVar[5U][1U]),2);
    bufp->fullCData(oldp+22,(__VdtypeVar[5U][2U]),2);
    bufp->fullCData(oldp+23,(__VdtypeVar[5U][3U]),2);
    bufp->fullCData(oldp+24,(__VdtypeVar[6U][0U]),2);
    bufp->fullCData(oldp+25,(__VdtypeVar[6U][1U]),2);
    bufp->fullCData(oldp+26,(__VdtypeVar[6U][2U]),2);
    bufp->fullCData(oldp+27,(__VdtypeVar[6U][3U]),2);
    bufp->fullCData(oldp+28,(__VdtypeVar[7U][0U]),2);
    bufp->fullCData(oldp+29,(__VdtypeVar[7U][1U]),2);
    bufp->fullCData(oldp+30,(__VdtypeVar[7U][2U]),2);
    bufp->fullCData(oldp+31,(__VdtypeVar[7U][3U]),2);
}
