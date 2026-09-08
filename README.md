Direct-mapped and N-way set-associative L1 data cache, written in Verilog and verified with Verilator.

Built this to actually understand RTL design — module hierarchy, FSMs, memory interfaces, testbench methodology — rather than just get a simulation to pass.

## Structure

```
cache-controller/
├── rtl/
│   ├── single_line_cache.v       single-line cache, no index field
│   ├── address_decoder.v         tag/index/word_sel decomposition, shared by both caches
│   ├── direct_mapped_cache.v     direct-mapped, read + write, write-back
│   └── set_associative_cache.v   N-way set-associative, exact LRU
├── tb/
│   ├── tb_single_line_cache.v
│   ├── mem_model.v                behavioral memory stub, testbench only
│   ├── tb_direct_mapped_cache.v
│   ├── tb_set_associative_cache.v
│   ├── tb_trace_driven.v          generic trace-driven testbench
│   └── trace_random1.txt          192-op synthetic access trace
├── sweep.sh                       runs a 9-point parameter sweep
├── plot_hit_rate.py               turns results.csv into a plot
├── images/
├── build/                         gitignored — Verilator output, waveforms
└── README.md
```

## Addressing

Every address splits into three fields, computed once in `address_decoder.v` and shared by both cache designs:

```
| 31                                    0 |
+----------------+--------+--------------+
|      TAG       | INDEX  |    OFFSET    |
+----------------+--------+--------------+
```

OFFSET is `$clog2(LINE_BYTES)` bits — byte offset within a line, with the top bits also selecting which word in the line. INDEX is `$clog2(NUM_SETS)` bits — which set an address maps to (`single_line_cache.v` has zero index bits, since there's exactly one line and no sets at all). TAG is whatever's left over, stored per line and compared on every access to confirm a hit.

With the default parameters (`ADDR_WIDTH=32`, `LINE_BYTES=16`, `NUM_SETS=8`), that's OFFSET=4, INDEX=3, TAG=25.

Associativity (`NUM_WAYS`) doesn't touch this split — it only changes how many candidate lines exist per set. That distinction matters for the results below: a conflict miss avoided by adding ways isn't the same mechanism as a capacity miss avoided by adding sets.

## Policies

Write-back, with a dirty bit per line tracking whether main memory is stale. Write-allocate on a miss — the line gets fetched first, then the store is spliced into it in the same cycle (`set_associative_cache.v`'s `S_REFILL` state). A clean victim just gets overwritten on eviction; a dirty one is drained to memory first, through a dedicated `S_WRITEBACK` state — verified by forcing an eviction and confirming the writeback happens and a later re-fetch returns the written value.

Replacement is exact LRU via per-set age counters, not the cheaper pseudo-LRU tree most real 4-way+ caches use. Each way holds a permutation of `0..NUM_WAYS-1`; the accessed way jumps to most-recent and everything above it shifts down. Updates on every access, not just misses. An invalid way is always preferred over evicting a valid one.

## Results

A 7-step directed trace, built to force a conflict (two addresses aliasing to the same set):

| Cache | Hits | Misses | Hit rate |
|---|---|---|---|
| Direct-mapped | 3 | 4 | 42.9% |
| 2-way set-associative | 4 | 3 | 57.1% |

A 192-op synthetic trace, 3 passes over a 64-word footprint:

| Cache | Hits | Misses | Hit rate | AMAT (100-cycle miss penalty) |
|---|---|---|---|---|
| Direct-mapped (8 lines) | 144 | 48 | 75.0% | 26.00 cycles |
| 2-way set-assoc (16 lines) | 176 | 16 | 91.7% | 9.33 cycles |

Swept across 9 configurations with `sweep.sh`. For this trace, hit rate turns out to depend only on total capacity (`NUM_SETS x NUM_WAYS`) — the associativity sweep and the capacity sweep land on the exact same curve, with a hard threshold at 16 lines (the trace's footprint). Below it, 75.0% no matter what. At or above it, 91.7%, with no further gain from over-provisioning. Needed two different traces to see this, since the first one isolates conflict misses (via aliasing) and this one isolates capacity misses (via a uniform scan) — one trace can't show both.

![hit rate vs cache configuration](images/hit_rate_vs_config_measured.png)

## Waveforms

![single_line_cache waveform](images/single_line_cache_waveform.png)

Captured from `tb_single_line_cache.vcd` in GTKWave.

## Running it

Assumes you're in the repo root with Verilator installed (`verilator --version` to check).

```bash
# single-line cache
verilator --binary --timing --trace -Wall --Wno-fatal --top-module tb_single_line_cache rtl/single_line_cache.v tb/tb_single_line_cache.v --Mdir build/obj_single_line
./build/obj_single_line/Vtb_single_line_cache

# direct-mapped
verilator --binary --timing --trace -Wall --Wno-fatal --top-module tb_direct_mapped_cache rtl/address_decoder.v rtl/direct_mapped_cache.v tb/mem_model.v tb/tb_direct_mapped_cache.v --Mdir build/obj_direct_mapped
./build/obj_direct_mapped/Vtb_direct_mapped_cache

# 2-way set-associative
verilator --binary --timing --trace -Wall --Wno-fatal --top-module tb_set_associative_cache rtl/address_decoder.v rtl/set_associative_cache.v tb/mem_model.v tb/tb_set_associative_cache.v --Mdir build/obj_set_assoc
./build/obj_set_assoc/Vtb_set_associative_cache

# trace-driven (either cache)
verilator --binary --timing --trace -Wall --Wno-fatal --top-module tb_trace_driven rtl/address_decoder.v rtl/direct_mapped_cache.v tb/mem_model.v tb/tb_trace_driven.v --Mdir build/obj_trace_direct
./build/obj_trace_direct/Vtb_trace_driven

# full parameter sweep
chmod +x sweep.sh && ./sweep.sh
python3 plot_hit_rate.py results.csv
```

## Next

Feeding this in as the memory-stage cache for the RV32IM CPU I'm building separately.
