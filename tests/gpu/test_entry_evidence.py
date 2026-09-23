"""Structural address guards, not proof of a complete D3D ABI or renderer."""
from pathlib import Path
import re
import unittest
ROOT = Path(__file__).resolve().parents[2]
EVIDENCE = {
    "sub_82DB11C0": (272, ["stw r11,0(r8)", "li r4,128", "li r3,24704", "bl 0x82dc3108", "bl 0x82dc3690"]),
    "sub_82DB0D38": (272, ["addi r11,r3,60", "lwarx r10,0,r11", "stwcx. r10,0,r11", "bl 0x82dc3248"]),
    "sub_82DAB270": (272, ["lfs f1,0(r4)", "lfs f6,20(r4)", "b 0x82daaf88"]),
    "sub_82DAA888": (272, ["stw r11,13028(r3)"]),
    "sub_82DAB320": (272, ["addi r11,r4,3198", "rlwinm r6,r11,2,0,29", "stwx r5,r6,r3"]),
    "sub_82DA7A48": (270, ["mr r25,r4", "mr r23,r5", "mr r24,r6", "lis r11,-16383", "ori r11,r11,8705", "rlwinm r10,r29,16,0,15", "stw r11,48(r31)"]),
    "sub_82DA7E60": (270, ["mr r18,r4", "mr r17,r5", "mr r21,r6", "mr r19,r7", "lis r11,-16381", "ori r11,r11,8705", "stw r11,48(r31)"]),
    "sub_82DC48B0": (274, ["mr r31,r3", "stw r11,48(r31)"]),
}

class EntryEvidenceTests(unittest.TestCase):
    def test_native_state_layout_anchors(self):
        # These are checked even though they are not all individually hooked:
        # draw snapshots cover native and inlined changes to the same fields.
        evidence = {
            "sub_82DA6DC0": (270, ["addi r11,r4,3224", "addi r11,r4,48", "mulli r11,r11,24", "stwx r5,r29,r31", "lwz r7,32(r5)", "clrlwi r30,r7,3", "addi r10,r10,512"]),
            "sub_82DAA9E8": (272, ["lwz r10,24(r5)", "lwz r5,28(r5)", "subfic r11,r4,17",
                                     "addi r4,r11,222", "stw r6,1780(r9)", "addi r11,r29,3203",
                                     "stb r9,12880(r11)", "rlwinm r9,r26,30,24,31"]),
            "sub_82DAAB08": (272, ["stw r29,12788(r31)"]),
            "sub_82DAB6B0": (272, ["stw r4,12808(r3)"]),
            "sub_82DAAF88": (272, ["stfs f31,13000(r31)", "stfs f28,13020(r31)"]),
            "sub_82DA7A48": (270, ["addi r6,r3,1920", "li r5,16384", "addi r6,r31,6016", "li r5,17408"]),
            "sub_82DA7E60": (270, ["lwz r24,12788(r31)", "lwz r10,24(r24)", "lwz r6,0(r24)",
                                  "rlwinm r6,r6,0,0,0", "rlwinm r11,r21,1,0,30", "rlwinm r9,r21,2,0,29", "rlwinm r11,r6,1,0,1", "or r29,r5,r11"]),
        }
        for symbol, (part, anchors) in evidence.items():
            with self.subTest(symbol=symbol):
                code = (ROOT / f"ppc/ppc_recomp.{part}.cpp").read_text()
                match = re.search(r"PPC_FUNC_IMPL\(__imp__" + symbol + r"\) \{(.*?)^\}", code, re.M | re.S)
                self.assertIsNotNone(match)
                asm = re.findall(r"^\t// (.*)$", match.group(1), re.M)
                for instruction in anchors:
                    self.assertIn(instruction, asm)

    def test_dispatch_table_initializer(self):
        code = (ROOT / 'ppc/ppc_recomp.273.cpp').read_text()
        match = re.search(r'PPC_FUNC_IMPL\(__imp__sub_82DC2A50\) \{(.*?)^\}', code, re.M | re.S)
        self.assertIsNotNone(match)
        asm = re.findall(r'^\t// (.*)$', match.group(1), re.M)
        # Source base + record stride, destination index math, loop bounds,
        # default argument registers and actual indirect calls are all guarded.
        anchors = [
            'lis r11,-31879', 'addi r29,r11,1944',
            'addi r8,r11,16', 'addi r11,r11,137', 'stwx r10,r8,r31', 'stwx r10,r11,r31',
            'lwz r4,8(r29)', 'lwz r11,64(r9)', 'mtctr r11', 'bctrl ',
            'addi r30,r30,4', 'addi r29,r29,12', 'cmplwi cr6,r30,404',
            'addi r26,r11,3160', 'addi r29,r26,8', 'addi r8,r11,117', 'addi r11,r11,238',
            'lwz r5,0(r29)', 'lwz r11,468(r9)', 'cmplwi cr6,r30,80', 'cmplwi cr6,r28,26',
        ]
        for instruction in anchors:
            self.assertIn(instruction, asm)
        self.assertEqual((-31879 * 65536 + 1944) & 0xffffffff, 0x83790798)
        self.assertEqual((-31879 * 65536 + 3160) & 0xffffffff, 0x83790C58)
        # Both immediate and type-2 recording devices use the initializer.
        for symbol in ('sub_82DC3690', 'sub_82DC3178'):
            body = re.search(r'PPC_FUNC_IMPL\(__imp__' + symbol + r'\) \{(.*?)^\}', code, re.M | re.S)
            self.assertIsNotNone(body)
            self.assertIn('sub_82DC2A50(ctx, base);', body.group(1))

    def test_entries_match_generated_code(self):
        inc = (ROOT / "SonicGenerationsRecomp/gpu/guest_entries.inc").read_text()
        hooks = re.findall(r"^SONIC_GPU_ENTRY\(\w+, (sub_[0-9A-F]+)\)$", inc, re.M)
        self.assertEqual(set(hooks), set(EVIDENCE))
        self.assertEqual(len(hooks), len(EVIDENCE))
        files = {part: (ROOT / f"ppc/ppc_recomp.{part}.cpp").read_text()
                 for part in {v[0] for v in EVIDENCE.values()}}
        mapping = (ROOT / "ppc/ppc_func_mapping.cpp").read_text()
        for symbol, (part, expected) in EVIDENCE.items():
            with self.subTest(symbol=symbol):
                code = files[part]
                self.assertIn(f'alias("__imp__{symbol}")', code)
                match = re.search(r"PPC_FUNC_IMPL\(__imp__" + symbol + r"\) \{(.*?)^\}", code, re.M | re.S)
                self.assertIsNotNone(match)
                body = match.group(1)
                asm = re.findall(r"^\t// (.*)$", body, re.M)
                for instruction in expected:
                    self.assertIn(instruction, asm)
                self.assertIn(symbol, mapping)
                if symbol == "sub_82DC48B0":
                    self.assertIn("__imp__VdSwap(ctx, base);", body)

if __name__ == "__main__":
    unittest.main()
