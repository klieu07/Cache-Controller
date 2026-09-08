#!/usr/bin/env python3

import sys
import csv
import matplotlib.pyplot as plt

def load(path):
    rows = []
    with open(path) as f:
        for row in csv.DictReader(f):
            row['num_sets'] = int(row['num_sets'])
            row['num_ways'] = int(row['num_ways'])
            row['capacity_lines'] = int(row['capacity_lines'])
            row['hit_rate_pct'] = float(row['hit_rate_pct'])
            row['amat_cycles'] = float(row['amat_cycles'])
            rows.append(row)
    return rows

def main():
    path = sys.argv[1] if len(sys.argv) > 1 else 'results_predicted.csv'
    predicted = 'predicted' in path
    rows = load(path)

    assoc = sorted([r for r in rows if r['label'].startswith('assoc_')], key=lambda r: r['num_ways'])
    size  = sorted([r for r in rows if r['label'].startswith('size_')],  key=lambda r: r['num_sets'])

    fig, axes = plt.subplots(1, 3, figsize=(15, 4.2))
    title_suffix = ' (PREDICTED -- run sweep.sh for real data)' if predicted else ' (measured via sweep.sh)'
    fig.suptitle('A8 Day 6: hit rate vs. cache configuration' + title_suffix, fontsize=12)

    # Panel 1: hit rate vs NUM_WAYS (associativity sweep, NUM_SETS=8 fixed)
    ax = axes[0]
    ax.plot([r['num_ways'] for r in assoc], [r['hit_rate_pct'] for r in assoc],
            marker='o', color='#1f77b4', linewidth=2)
    ax.set_xscale('log', base=2)
    ax.set_xticks([r['num_ways'] for r in assoc])
    ax.set_xticklabels([str(r['num_ways']) for r in assoc])
    ax.set_xlabel('NUM_WAYS (NUM_SETS=8 fixed)')
    ax.set_ylabel('Hit rate (%)')
    ax.set_title('Hit rate vs. associativity')
    ax.set_ylim(60, 100)
    ax.grid(alpha=0.3)

    # Panel 2: hit rate vs NUM_SETS (cache size sweep, NUM_WAYS=2 fixed)
    ax = axes[1]
    ax.plot([r['num_sets'] for r in size], [r['hit_rate_pct'] for r in size],
            marker='s', color='#d62728', linewidth=2)
    ax.set_xscale('log', base=2)
    ax.set_xticks([r['num_sets'] for r in size])
    ax.set_xticklabels([str(r['num_sets']) for r in size])
    ax.set_xlabel('NUM_SETS (NUM_WAYS=2 fixed)')
    ax.set_title('Hit rate vs. cache size')
    ax.set_ylim(60, 100)
    ax.grid(alpha=0.3)

    # Panel 3: both sweeps vs total capacity (lines) -- do they collapse onto one curve?
    ax = axes[2]
    ax.plot([r['capacity_lines'] for r in assoc], [r['hit_rate_pct'] for r in assoc],
            marker='o', color='#1f77b4', linewidth=2, label='associativity sweep')
    ax.plot([r['capacity_lines'] for r in size], [r['hit_rate_pct'] for r in size],
            marker='s', color='#d62728', linewidth=2, linestyle='--', label='cache-size sweep')
    ax.axvline(16, color='gray', linestyle=':', linewidth=1.5, label='footprint = 16 lines')
    ax.set_xscale('log', base=2)
    ax.set_xlabel('Total capacity (lines = NUM_SETS x NUM_WAYS)')
    ax.set_title('Both sweeps vs. total capacity')
    ax.set_ylim(60, 100)
    ax.legend(fontsize=8)
    ax.grid(alpha=0.3)

    plt.tight_layout()
    out = 'hit_rate_vs_config.png'
    plt.savefig(out, dpi=150)
    print(f'wrote {out}')

if __name__ == '__main__':
    main()