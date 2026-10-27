"""Index generated PPC code into functions -> (address, PPC instruction), for the NativeXRenderer
bring-up tools (tools/pm4_consts.py, tools/fn_summary.py, tools/rs_setters.py).

This is native_x_renderer/tools/ppc_index.py (MIT, ElGuslml/NativeXRenderer) with one addition: it
reads both codegen formats, so it works on the code this repository already has.

  * ReXGlue recomp-tools:   DEFINE_REX_FUNC(sub_822AD000) { ... // lwz r3,4(r3) ... loc_822AD010: }
  * XenonRecomp (ppc/):     PPC_FUNC_IMPL(__imp__sub_82480000) { ... // lwz r3,4(r3) ... loc_82480004: }

Usage, from the repository root:

  python tools/nxr/ppc_index.py build                  # index ppc/ (or generated/default when present)
  python tools/nxr/ppc_index.py build <dir> [<dir>...]  # index the given directories
  python tools/nxr/ppc_index.py dis 822AD000           # disassemble one function
  python tools/nxr/ppc_index.py callers 822AC3C0       # list its call sites
  python tools/nxr/ppc_index.py range 822AD000 822C7000
  python tools/nxr/ppc_index.py grep "lis r11,0x3c"

The index is written to out/ppc_index.pkl; PPC_INDEX changes the path. The other NativeXRenderer
tools read the same file, so they can be pointed at it with the same PPC_INDEX value.
"""
import os
import pickle
import re
import sys

DEFAULT_DIRS = ("generated/default", "ppc")
PKL = os.environ.get("PPC_INDEX", os.path.join("out", "ppc_index.pkl"))

# Both codegens. The recomp-tools one is what a ReXGlue project produces; the XenonRecomp one is what
# this repository's ppc/ was produced with.
FUNC_RES = (
    re.compile(r"^DEFINE_REX_FUNC\(sub_([0-9A-F]{8})\)"),
    re.compile(r"^PPC_FUNC_IMPL\(__imp__sub_([0-9A-F]{8})\)"),
)
ASM_RE = re.compile(r"^\t// (.*)$")
LR_RE = re.compile(r"ctx\.lr = 0x([0-9A-F]{8});")
LABEL_RE = re.compile(r"^loc_([0-9A-F]{8}):")
CODEGEN_FILE_RE = re.compile(r".+_recomp\.\d+\.cpp$")


def build(dirs):
    funcs = {}
    bad = 0
    read = 0
    for gen in dirs:
        if not os.path.isdir(gen):
            continue
        for name in sorted(os.listdir(gen)):
            if not CODEGEN_FILE_RE.match(name):
                continue
            read += 1
            cur = None
            next_addr = 0
            pending_bl = None
            with open(os.path.join(gen, name), encoding="utf-8", errors="replace") as f:
                for line in f:
                    m = LABEL_RE.match(line)
                    if m:
                        # Blocks are not always emitted in address order: a label anchors the next one.
                        next_addr = int(m.group(1), 16)
                        continue
                    matched = None
                    for func_re in FUNC_RES:
                        matched = func_re.match(line)
                        if matched:
                            break
                    if matched:
                        cur = int(matched.group(1), 16)
                        next_addr = cur
                        funcs[cur] = []
                        pending_bl = None
                        continue
                    if cur is None:
                        continue
                    m = ASM_RE.match(line)
                    if m:
                        funcs[cur].append((next_addr, m.group(1)))
                        pending_bl = next_addr if m.group(1).startswith("bl ") else None
                        next_addr += 4
                        continue
                    if pending_bl is not None:
                        m = LR_RE.search(line)
                        if m:
                            if int(m.group(1), 16) != pending_bl + 4:
                                bad += 1
                            pending_bl = None
    for v in funcs.values():
        v.sort()
    os.makedirs(os.path.dirname(PKL) or ".", exist_ok=True)
    with open(PKL, "wb") as f:
        pickle.dump(funcs, f)
    n = sum(len(v) for v in funcs.values())
    print(f"{len(funcs)} functions, {n} instructions, {bad} bl/lr mismatches, {read} files -> {PKL}")


def load():
    with open(PKL, "rb") as f:
        return pickle.load(f)


def main(argv):
    if not argv:
        print(__doc__)
        return 1
    cmd = argv[0]
    if cmd == "build":
        dirs = argv[1:] or [d for d in DEFAULT_DIRS if os.path.isdir(d)]
        if not dirs:
            print("No generated code found: pass a directory (python tools/nxr/ppc_index.py build ppc)")
            return 1
        build(dirs)
        return 0
    funcs = load()
    if cmd == "dis":
        addr = int(argv[1], 16)
        for a, asm in funcs.get(addr, []):
            print(f"{a:08X}  {asm}")
        return 0
    if cmd == "callers":
        target = int(argv[1], 16)
        for faddr, ins in funcs.items():
            for a, asm in ins:
                m = re.match(r"bl (?:0x)?([0-9A-Fa-f]+)", asm)
                if m and int(m.group(1), 16) == target:
                    print(f"{a:08X} in sub_{faddr:08X}")
        return 0
    if cmd == "range":
        lo, hi = int(argv[1], 16), int(argv[2], 16)
        for faddr in sorted(funcs):
            if lo <= faddr <= hi:
                print(f"sub_{faddr:08X} ({len(funcs[faddr])} instructions)")
        return 0
    if cmd == "grep":
        pattern = re.compile(argv[1])
        for faddr in sorted(funcs):
            for a, asm in funcs[faddr]:
                if pattern.search(asm):
                    print(f"{a:08X}  {asm}   (sub_{faddr:08X})")
        return 0
    print(__doc__)
    return 1


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
