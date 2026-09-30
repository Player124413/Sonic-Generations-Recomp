"""Guards the Xenos-free command-stream front end and its probe.

The decoder is the first module of a renderer that does not use the SDK GPU
plugin, and the probe is how real guest command streams get captured. Both rules
that make them safe -- only a signed swap token presents, and the probe never
writes guest memory -- are asserted here so a later refactor cannot quietly drop
them.
"""
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
PM4_HEADER = (ROOT / 'rex/src/pm4.h').read_text()
PM4 = (ROOT / 'rex/src/pm4.cpp').read_text()
HOOKS = (ROOT / 'rex/src/gpu_hooks.cpp').read_text()
TESTS = (ROOT / 'rex/tests/pm4_tests.cpp').read_text()
CMAKE = (ROOT / 'rex/CMakeLists.txt').read_text()
README = (ROOT / 'rex/README.md').read_text()
PLAN = (ROOT / 'docs/OWN_GPU_PLAN.md').read_text()


class Pm4PolicyTests(unittest.TestCase):
    def test_decoder_has_no_sdk_dependency(self):
        # The point of this module is that it does not need the SDK graphics
        # code, so it must not start including it.
        for text in (PM4_HEADER, PM4):
            self.assertNotIn('rex/', text)
            self.assertNotIn('rexglue', text)
        self.assertNotIn('xenos.h', PM4_HEADER)

    def test_packet_layout_matches_the_hardware(self):
        # Type 0: count-1 in bits 16..29, register index in 0..14, bit 15 means
        # "write one register". Type 3: opcode in bits 8..14, predicate is bit 0.
        self.assertIn('static_cast<PacketType>(word >> kTypeShift)', PM4)
        self.assertIn('((word >> 16) & kCountMask) + 1', PM4)
        self.assertIn('word & kType0IndexMask', PM4)
        self.assertIn('((word >> kType0OneIndexBit) & 1u) != 0', PM4)
        self.assertIn('(word >> kOpcodeShift) & kOpcodeMask', PM4)
        self.assertIn('(word & kPredicateBit) != 0', PM4)
        self.assertIn("0x50415753u", PM4_HEADER)  # 'SWAP'

    def test_only_a_signed_unpredicated_token_presents(self):
        self.assertIn('words[0] != kSwapSignature', PM4)
        self.assertIn('action = Action::Unsupported;', PM4)
        self.assertIn('header.opcode == static_cast<uint32_t>(Opcode::kXeSwap)', PM4)
        # A token with an impossible size is corruption, not a frame.
        self.assertIn('width > 8192', PM4)
        self.assertIn('height > 8192', PM4)

    def test_walk_is_bounded(self):
        for lock in ('maxPackets', 'maxRegisterWrites', 'maxIndirectDepth',
                     'maxIndirectBuffers', 'maxPayloadWords'):
            self.assertIn(lock, PM4_HEADER)
        self.assertIn('kMaxPayloadBufferWords', PM4)
        self.assertIn('limitsHit', PM4_HEADER)

    def test_probe_is_read_only_env_gated_and_capped(self):
        self.assertIn('SONIC_REX_PM4_DUMP', HOOKS)
        self.assertIn('SONIC_REX_PM4_DUMP must be 1', HOOKS)
        self.assertIn('kMaxPm4Dumps', HOOKS)
        self.assertIn('ReadGuestMemory(base, address, destination)', HOOKS)
        # No write path into guest memory may appear in the probe.
        for forbidden in ('WriteGuestMemory', 'TranslateVirtual(', 'std::memcpy(base'):
            self.assertNotIn(forbidden, HOOKS)

    def test_probe_runs_after_the_swap_helper_only(self):
        # VdSwap writes the token inside the call, so the probe must be post-call.
        self.assertIn('__imp__##symbol(ctx, base); \\\n        '
                      'sonic::rex_host::ObserveGpuEntryAfter', HOOKS)
        self.assertIn('if (entry == GpuEntry::SwapHelper) ProbeSwapCommandStream(args, base);',
                      HOOKS)

    def test_decoder_and_probe_have_contract_tests(self):
        self.assertIn('add_library(sonic_rex_pm4 STATIC src/pm4.cpp)', CMAKE)
        self.assertIn('add_test(NAME rex_pm4 COMMAND rex_pm4_tests)', CMAKE)
        for case in ('TestSwapTokenPresents', 'TestBogusSwapNeverPresents',
                     'TestIndirectBufferRecursion', 'TestTruncatedStreamIsReported',
                     'TestGuestEndianness', 'TestProbeFindsRealToken'):
            self.assertIn(case, TESTS)

    def test_readme_and_plan_explain_the_path_off_xenos(self):
        for document in (README, PLAN):
            self.assertIn('IGraphicsSystem', document)
        self.assertIn('SONIC_REX_PM4_DUMP', README)
        self.assertIn('coverage.txt', PLAN)
        self.assertIn('rexgpu-xenos', PLAN)


if __name__ == '__main__':
    unittest.main()
