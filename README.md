# L1 Data Cache Controller

A Verilog RTL implementation of an L1 data cache — starting direct-mapped, extending to N-way set-associative. Built as a hands-on learning project (Project A8) to establish Verilog fundamentals (module hierarchy, FSMs, memory interfaces, testbench methodology) ahead of a future RISC-V CPU project.

## Status

🚧 **In progress — Day 1 of 7**

Currently working on address-splitting logic and a minimal single-line cache that can hit and miss.

## Scope

- One L1 data cache. No CPU, no full memory system.
- Phase order: direct-mapped working and verified first, then extended to N-way set-associative.
- Policies: write-back with write-allocate, LRU (pseudo-LRU for 4-way+) replacement.
- Verification is part of the deliverable — a trace-driven testbench with hit/miss statistics is required, not optional.

## Address Breakdown

Every memory address is sliced into three fields:

```
31                                     0
+----------------+--------+------------+
|      TAG       | INDEX  |   OFFSET   |
+----------------+--------+------------+

OFFSET = which byte within the cache line
INDEX  = which set the line maps to
TAG    = the rest, stored to confirm identity on a hit
```

*(Note: a single-line cache, as built on Day 1, has no INDEX field — every address maps to the one line. INDEX becomes meaningful starting Day 2, once multiple cache lines exist.)*

## Design Decisions

| Decision | Choice |
| --- | --- |
| Language | Verilog-2001 |
| Simulator | Verilator (primary) / Icarus Verilog |
| Waveform viewer | GTKWave |
| Mapping strategy | Direct-mapped → N-way set-associative |
| Write policy | Write-back, write-allocate |
| Replacement policy | LRU (true for 2-way, pseudo-LRU for 4-way+) |
| Read path latency | *TBD — document once decided (Day 1/2)* |

## Repository Structure

```
cache-controller/
├── rtl/              # Design files (synthesizable Verilog)
├── tb/               # Testbenches (simulation-only)
├── sim/              # Simulation outputs — waveforms (.vcd), compiled binaries
├── scripts/          # Python scripts for plots, trace generation
├── docs/             # Notes, diagrams, results
└── README.md
```

## Roadmap

| Day | Focus | Deliverable |
| --- | --- | --- |
| 1 | Environment + address math | Single-line cache that can hit and miss |
| 2 | Direct-mapped read path | Full tag/valid/data arrays, hit detection, directed testbench |
| 3 | Write path + write-back | Dirty bit, write path, write-back-on-eviction |
| 4 | Set-associative + LRU | N-way parameterization, tag comparators, LRU |
| 5 | Trace-driven testbench | Hit/miss statistics, AMAT calculation |
| 6 | Analysis + plots | Hit rate vs. size/associativity sweep, plotted in Python |
| 7 | Package | Repo cleanup, this README finalized, waveform screenshots |

## Results

*(To be filled in as of Day 5–6: hit rate, miss rate, AMAT, and the hit-rate-vs-size/associativity plot.)*

## Running the Simulation

```bash
# Verilator (primary)
verilator --binary tb/tb_single_line_cache.v rtl/single_line_cache.v
./obj_dir/Vtb_single_line_cache

# or Icarus Verilog
iverilog -o sim/single_line_cache tb/tb_single_line_cache.v rtl/single_line_cache.v
vvp sim/single_line_cache

# View waveform
gtkwave sim/*.vcd
```

## Part of a Larger Sequence

This project is the first in a chip-design track and is fully self-contained. It feeds forward into **Project A1 (RISC-V CPU)** by establishing module hierarchy, the testbench-and-verify discipline, and a working mental model of memory interfaces and FSM behavior — exactly what the CPU's MEM stage will interact with.
