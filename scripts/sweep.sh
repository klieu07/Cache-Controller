set -e

OUT=results.csv
echo "label,module,num_sets,num_ways,capacity_lines,hits,misses,hit_rate_pct,amat_cycles" > "$OUT"

run_one () {
    local label=$1 module=$2 num_sets=$3 num_ways=$4 define_flag=$5 way_flag=$6

    local mdir="build/sweep_${label}"
    mkdir -p "$mdir"

    verilator --binary --timing --trace -Wall --Wno-fatal \
        $define_flag -GNUM_SETS=$num_sets $way_flag \
        --top-module tb_trace_driven \
        rtl/address_decoder.v rtl/$module.v \
        tb/mem_model.v tb/tb_trace_driven.v \
        --Mdir "$mdir" > "$mdir/build.log" 2>&1

    local raw
    raw=$("./$mdir/Vtb_trace_driven")

    local hits misses hitrate amat capacity
    hits=$(echo "$raw"     | sed -nE 's/.*hits=([0-9]+).*/\1/p')
    misses=$(echo "$raw"   | sed -nE 's/.*misses=([0-9]+).*/\1/p')
    hitrate=$(echo "$raw"  | sed -nE 's/.*hit_rate=([0-9.]+)%.*/\1/p')
    amat=$(echo "$raw"     | sed -nE 's/.*AMAT=([0-9.]+) cycles.*/\1/p')
    capacity=$((num_sets * num_ways))

    echo "$label,$module,$num_sets,$num_ways,$capacity,$hits,$misses,$hitrate,$amat" >> "$OUT"
    echo "[$label] module=$module num_sets=$num_sets num_ways=$num_ways capacity=$capacity -> hit_rate=$hitrate% amat=$amat"
}

echo "=== Sweep A: associativity (NUM_SETS=8 fixed) ==="
run_one "assoc_w1" "direct_mapped_cache"   8 1 ""                  ""
run_one "assoc_w2" "set_associative_cache" 8 2 "+define+USE_SET_ASSOC" "-GNUM_WAYS=2"
run_one "assoc_w4" "set_associative_cache" 8 4 "+define+USE_SET_ASSOC" "-GNUM_WAYS=4"
run_one "assoc_w8" "set_associative_cache" 8 8 "+define+USE_SET_ASSOC" "-GNUM_WAYS=8"

echo "=== Sweep B: cache size (NUM_WAYS=2 fixed) ==="
run_one "size_s2"  "set_associative_cache" 2  2 "+define+USE_SET_ASSOC" "-GNUM_WAYS=2"
run_one "size_s4"  "set_associative_cache" 4  2 "+define+USE_SET_ASSOC" "-GNUM_WAYS=2"
run_one "size_s8"  "set_associative_cache" 8  2 "+define+USE_SET_ASSOC" "-GNUM_WAYS=2"
run_one "size_s16" "set_associative_cache" 16 2 "+define+USE_SET_ASSOC" "-GNUM_WAYS=2"
run_one "size_s32" "set_associative_cache" 32 2 "+define+USE_SET_ASSOC" "-GNUM_WAYS=2"

echo ""
echo "Done. Results written to $OUT"
cat "$OUT"