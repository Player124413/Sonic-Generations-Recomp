"""The NativeXRenderer bring-up tools read both codegen formats (tools/nxr/).

The point of these tests is the one thing that cannot be checked by looking at the repository: the
indexer has to understand the old XenonRecomp output (ppc/, PPC_FUNC_IMPL) as well as the ReXGlue one
(DEFINE_REX_FUNC) that the NativeXRenderer tools were written for. The fixtures below are two functions
that each build the same PM4 type-3 header (DRAW_INDX, one dword) with a lis + ori pair, as the XDK
Direct3D library does.
"""

import importlib.util
import os
import pathlib
import sys
import tempfile
import unittest

REPO = pathlib.Path(__file__).resolve().parents[1]
TOOLS = REPO / "tools" / "nxr"

DRAW_HEADER = 0xC0002200  # type 3, DRAW_INDX (0x22), one payload dword
LIS_IMM16 = -16384  # 0xC000, the type bits of every type-3 packet
ORI_VAL = 0x2200

REXGLUE_FIXTURE = f"""// ReXGlue recomp-tools output
DEFINE_REX_FUNC(sub_82200000) {{
\t// lis r11,{LIS_IMM16}
\tctx.r11.s64 = {LIS_IMM16 << 16};
\t// ori r11,r11,{ORI_VAL}
\tctx.r11.u64 = ctx.r11.u64 | {ORI_VAL};
\t// blr
\treturn;
}}
"""

XENONRECOMP_FIXTURE = f"""#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82480000) {{
\tPPC_FUNC_PROLOGUE();
\t// lis r11,{LIS_IMM16}
\tctx.r11.s64 = {LIS_IMM16 << 16};
\t// ori r11,r11,{ORI_VAL}
\tctx.r11.u64 = ctx.r11.u64 | {ORI_VAL};
}}
"""


def load_module(name, filename):
    spec = importlib.util.spec_from_file_location(name, TOOLS / filename)
    module = importlib.util.module_from_spec(spec)
    sys.modules[name] = module
    spec.loader.exec_module(module)
    return module


class NxrToolsTest(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.root = pathlib.Path(self.temp.name)
        self.index_path = self.root / "out" / "ppc_index.pkl"
        os.environ["PPC_INDEX"] = str(self.index_path)
        # scan.py imports ppc_index by name from its own directory.
        sys.path.insert(0, str(TOOLS))
        self.index = load_module("nxr_ppc_index", "ppc_index.py")
        self.scan = load_module("nxr_scan", "scan.py")

        (self.root / "generated" / "default").mkdir(parents=True)
        (self.root / "generated" / "default" / "game_recomp.0.cpp").write_text(REXGLUE_FIXTURE)
        (self.root / "ppc").mkdir()
        (self.root / "ppc" / "ppc_recomp.0.cpp").write_text(XENONRECOMP_FIXTURE)

    def tearDown(self):
        sys.path.remove(str(TOOLS))
        sys.modules.pop("nxr_ppc_index", None)
        sys.modules.pop("nxr_scan", None)
        self.temp.cleanup()

    def test_both_codegen_formats_are_indexed(self):
        self.index.build([str(self.root / "generated" / "default"), str(self.root / "ppc")])
        funcs = self.index.load()
        self.assertEqual(sorted(funcs), [0x82200000, 0x82480000])
        # The instructions are keyed by their own addresses, in order.
        addresses = [addr for addr, _ in funcs[0x82480000]]
        self.assertEqual(addresses, sorted(addresses))
        self.assertIn("lis r11", funcs[0x82200000][0][1])

    def test_the_draw_header_is_decoded_from_both(self):
        self.index.build([str(self.root / "generated" / "default"), str(self.root / "ppc")])
        funcs = self.index.load()
        for address in (0x82200000, 0x82480000):
            packets = self.scan.function_packets(funcs[address])
            draws = [p for p in packets if p[1] == "DRAW_INDX"]
            self.assertEqual(len(draws), 1, f"sub_{address:08X}: {packets}")
            self.assertEqual(draws[0][2], 1)  # one payload dword
            self.assertEqual(draws[0][0], address + 4)  # the ori that completes the header

    def test_the_header_arithmetic_matches_the_pm4_encoding(self):
        self.assertEqual(self.scan.describe(DRAW_HEADER), ("DRAW_INDX", 1))
        # Sanity: the fixture really encodes the header the test claims.
        self.assertEqual(((LIS_IMM16 & 0xFFFF) << 16) | ORI_VAL, DRAW_HEADER)


if __name__ == "__main__":
    unittest.main(verbosity=2)
