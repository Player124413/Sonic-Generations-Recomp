"""Scan generated PPC code for the PM4 packets a D3D library emits, and print a bring-up report.

This is the first step of NativeXRenderer's bring-up (native_x_renderer/docs/integrating-a-game.md,
step 1): every packet the XDK Direct3D library writes is built as a `lis` + `ori`/`addi` pair, so the
functions that build `DRAW_INDX`, `SET_BIN_MASK`, `EVENT_WRITE` and the constant writes show up in the
generated code without a disassembler.

It needs the index from tools/nxr/ppc_index.py (same output as native_x_renderer/tools/ppc_index.py,
so that repository's pm4_consts.py / fn_summary.py / rs_setters.py read it too).

Usage, from the repository root:

  python tools/nxr/scan.py                 # index ppc/ if needed, then report
  python tools/nxr/scan.py --rebuild       # rebuild the index first
  python tools/nxr/scan.py --dir ppc generated/default
  python tools/nxr/scan.py --markdown      # the report as Markdown, for docs/

The report is evidence, not a conclusion: a candidate function is named by the packets it builds,
which is a hypothesis until the trace and the observer (steps 3 of the bring-up) confirm it.
"""
import sys

import os
import re

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import ppc_index as index  # noqa: E402  (the tool next to this file)

OPCODES = {
    0x10: "NOP", 0x21: "REG_RMW", 0x22: "DRAW_INDX", 0x23: "SET_SHADER_BASES?", 0x24: "VIZ_QUERY",
    0x25: "?25", 0x26: "?26", 0x27: "IM_LOAD", 0x2B: "IM_LOAD_IMM", 0x2D: "SET_CONSTANT",
    0x2F: "LOAD_ALU_CONSTANT", 0x34: "DRAW_INDX_BIN", 0x35: "DRAW_INDX_2_BIN", 0x36: "DRAW_INDX_2",
    0x3B: "INVALIDATE_STATE", 0x3C: "WAIT_REG_MEM", 0x3D: "MEM_WRITE", 0x3E: "COND_EXEC",
    0x3F: "INDIRECT_BUFFER", 0x45: "COND_WRITE", 0x46: "EVENT_WRITE", 0x48: "ME_INIT",
    0x4A: "?4A", 0x4B: "SET_SHADER_BASES", 0x4C: "CONTEXT_UPDATE", 0x50: "SET_BIN_MASK",
    0x51: "SET_BIN_SELECT", 0x54: "INTERRUPT", 0x55: "SET_CONSTANT2", 0x56: "SET_SHADER_CONSTANTS",
    0x57: "?57", 0x58: "EVENT_WRITE_SHD", 0x5A: "EVENT_WRITE_EXT", 0x5B: "EVENT_WRITE_ZPD",
    0x60: "SET_BIN_MASK_LO", 0x61: "SET_BIN_MASK_HI", 0x62: "SET_BIN_SELECT_LO", 0x63: "SET_BIN_SELECT_HI",
}
DRAWS = {"DRAW_INDX", "DRAW_INDX_2", "DRAW_INDX_BIN", "DRAW_INDX_2_BIN"}
TILING = {"SET_BIN_MASK", "SET_BIN_MASK_LO", "SET_BIN_MASK_HI", "SET_BIN_SELECT", "SET_BIN_SELECT_LO",
          "SET_BIN_SELECT_HI"}
EVENTS = {"EVENT_WRITE", "EVENT_WRITE_EXT", "EVENT_WRITE_SHD", "EVENT_WRITE_ZPD"}
QUERIES = {"VIZ_QUERY"}

LIS = re.compile(r"^lis r(\d+),(-?\d+)$")
LO = re.compile(r"^(ori|addi) r(\d+),r(\d+),(-?\d+)$")


def constants(instructions):
    """The (address, value) of every constant built as lis + ori/addi, as pm4_consts.py does it."""
    last_lis = {}
    out = []
    for addr, asm in instructions:
        asm = asm.strip()
        m = LIS.match(asm)
        if m:
            last_lis[int(m.group(1))] = (int(m.group(2)) & 0xFFFF) << 16
            out.append((addr, last_lis[int(m.group(1))]))
            continue
        m = LO.match(asm)
        if m and int(m.group(3)) in last_lis:
            hi = last_lis[int(m.group(3))]
            lo_ = int(m.group(4))
            value = (hi | (lo_ & 0xFFFF)) if m.group(1) == "ori" else (hi + lo_) & 0xFFFFFFFF
            out.append((addr, value))
    return out


def describe(value):
    """Type-3 packet header -> (opcode name, count), or None."""
    if value >> 30 != 3:
        return None
    opcode = (value >> 8) & 0x7F
    count = ((value >> 16) & 0x3FFF) + 1
    return OPCODES.get(opcode, f"0x{opcode:02x}"), count


def function_packets(instructions):
    packets = []
    for addr, value in constants(instructions):
        kind = describe(value)
        if kind:
            packets.append((addr, kind[0], kind[1]))
    return packets


def main(argv):
    if "--rebuild" in argv or not os.path.exists(index.PKL):
        dirs = [d for d in index.DEFAULT_DIRS if os.path.isdir(d)]
        after = argv.index("--dir") + 1 if "--dir" in argv else 0
        if after:
            dirs = argv[after:]
        index.build(dirs)
    funcs = index.load()
    markdown = "--markdown" in argv

    by_name = {}
    rows = []
    for faddr in sorted(funcs):
        packets = function_packets(funcs[faddr])
        if not packets:
            continue
        hits = []
        for addr, name, count in packets:
            kind = None
            if name in DRAWS:
                kind = "draw"
            elif name in TILING:
                kind = "tiling"
            elif name in EVENTS:
                kind = "event"
            elif name in QUERIES:
                kind = "query"
            if kind:
                hits.append((kind, name, addr, count))
        for kind, name, addr, count in hits:
            by_name.setdefault(name, []).append((faddr, addr))
        if hits:
            rows.append((faddr, hits, len(funcs[faddr])))

    out = []
    out.append("# NSR scan: PM4 packets in the generated code\n" if markdown else
               "PM4 packets in the generated code\n" + "=" * 34)
    out.append("")
    out.append(f"{len(funcs)} functions indexed; {len(rows)} of them build a draw, tiling, event or query packet.")
    out.append("")
    counts = sorted(((name, len(v)) for name, v in by_name.items()), key=lambda x: (-x[1], x[0]))
    if markdown:
        out.append("| Packet | Functions |")
        out.append("|---|---|")
        out.extend(f"| `{name}` | {n} |" for name, n in counts)
    else:
        for name, n in counts:
            out.append(f"  {name:<20} {n}")
    out.append("")

    for faddr, hits, insn_count in rows:
        kinds = {h[0] for h in hits}
        if not kinds & {"draw", "query"}:
            continue
        cells = ", ".join(f"{name}[{count}]@{addr:08X}" for _, name, addr, count in hits)
        out.append(f"- sub_{faddr:08X} ({insn_count} insns): {cells}")
    text = "\n".join(out)
    print(text)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
