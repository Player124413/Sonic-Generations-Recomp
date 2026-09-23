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
