"""Guards the native-diagnostics cost controls against silent regressions.

Every replayed frame is a second full render on top of the renderer that draws
the visible game, so the sampling default, the readback default and the wording
that tells the player about it all matter.
"""
import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
POLICY = (ROOT / 'rex/src/host_policy.h').read_text()
COVERAGE = (ROOT / 'rex/src/native_coverage.h').read_text()
NATIVE = (ROOT / 'rex/src/native_gpu.cpp').read_text()
TEST_SCRIPT = (ROOT / 'rex/windows/Run-Native-GPU-Test.cmd').read_text()
FAST_SCRIPT = (ROOT / 'rex/windows/Run-ReXGlue-Fast.cmd').read_text()


class NativeReplayPolicyTests(unittest.TestCase):
    def test_full_replay_remains_the_default(self):
        # No environment variable means every frame, so nobody loses evidence by
        # upgrading; the sampling is explicit.
        self.assertIn('if (value.empty()) return 1;', POLICY)
        self.assertIn('if (value.empty() || value == "0" || value == "false") return false;', POLICY)

    def test_bounds_are_enforced_and_zero_is_rejected(self):
        self.assertIn('parsed > 1000000', POLICY)
        self.assertIn('parsed == 0', POLICY)
        self.assertIn('must be at least 1', POLICY)

    def test_parsing_is_checked_on_windows(self):
        contract = (ROOT / 'rex/tests/host_contract_tests.cpp').read_text()
        for expected in ('ParseNativeFrameStride("30")==30', 'ParseNativeFrameStride("")==1',
                         'ParseNativeReadback("true")'):
            self.assertIn(expected, contract)
        # Out-of-range and malformed values must be exercised, not just documented.
        self.assertIn('ParseNativeFrameStride(bad)', contract)
        self.assertIn('ParseNativeReadback(bad)', contract)
        self.assertIn('"1000001"', contract)
        # Case matters: only the documented lower-case spellings are accepted.
        self.assertIn('"TRUE"', contract)

    def test_a_typo_disables_diagnostics_instead_of_the_game(self):
        # The knob is diagnostic: an invalid value must not abort a play session.
        self.assertIn('Offscreen replay stays off; Xenos remains the renderer', NATIVE)
        self.assertNotIn('throw std::invalid_argument(error', NATIVE)

    def test_skipped_frames_release_their_memory(self):
        drain = NATIVE.index('auto batch = bridge->Capture')
        sample = NATIVE.index('frameStride > 1')
        self.assertLess(drain, sample, 'sampling must happen after the stream drained')

    def test_empty_frames_do_not_submit_or_wait(self):
        self.assertIn('batch->draws.empty() && batch->clears.empty() && batch->resolves.empty()',
                      NATIVE)
        self.assertIn('++skipped;', NATIVE)

    def test_readback_is_opt_in(self):
        self.assertIn('readbackEnabled && success && images < 8', NATIVE)

    def test_the_cost_is_reported_every_session(self):
        self.assertIn('average_replay_ms', NATIVE)
        self.assertIn('max_replay_ms', NATIVE)
        self.assertIn('[native] frames=', NATIVE)
        self.assertIn('every replayed frame is a second full render on top of Xenos', NATIVE)

    def test_scripts_do_not_silently_replay_every_frame(self):
        self.assertIn('SONIC_REX_NATIVE_FRAME_STRIDE=30', TEST_SCRIPT)
        self.assertIn('SONIC_REX_NATIVE_READBACK=1', TEST_SCRIPT)
        # A pre-set value from the user must survive the script.
        self.assertIn('if not defined SONIC_REX_NATIVE_FRAME_STRIDE', TEST_SCRIPT)

    def test_fast_profile_only_sets_environment_variables(self):
        self.assertIn('REX_VSYNC=false', FAST_SCRIPT)
        self.assertNotIn('rex-runtime.toml=', FAST_SCRIPT)
        self.assertNotIn('set /p', FAST_SCRIPT)
        for line in FAST_SCRIPT.splitlines():
            stripped = line.strip()
            if stripped.startswith('set "') and 'PATH' not in stripped:
                self.assertRegex(stripped, r'^set "(REX_[A-Z0-9_]+|SONIC_[A-Z0-9_]+)=.*"$',
                                 f'{stripped} must only set documented REX_/SONIC_ variables')

    def test_coverage_ledger_drives_the_xenos_free_decision(self):
        # Order matters: a resolved shader pair plus captured resources that the
        # backend still refuses means a missing renderer feature, not a resource.
        order = [
            COVERAGE.index('if (!vertexShaderResolved) return DrawSupport::VertexShaderUnresolved;'),
            COVERAGE.index('if (!pixelShaderResolved) return DrawSupport::PixelShaderUnresolved;'),
            COVERAGE.index('if (!resourcesCaptured) return DrawSupport::ResourcesUnsupported;'),
            COVERAGE.index('return DrawSupport::BackendRefused;'),
        ]
        self.assertEqual(order, sorted(order))
        self.assertIn('Xenos-free renderer would show today', COVERAGE)
        self.assertIn('return draws ? double(Supported()) / double(draws) : 0.0;', COVERAGE)

    def test_runtime_writes_the_ledger_and_reports_it(self):
        self.assertIn('coverage.txt', NATIVE)
        self.assertIn('coverage.Record(', NATIVE)
        self.assertIn('coverage.SupportedRatio()', NATIVE)
        self.assertIn('[native] coverage: draws=', NATIVE)
        for reason in ('vertexShader.status == GuestGpu::ShaderReadStatus::Success',
                       'pixelShader.status == GuestGpu::ShaderReadStatus::Success',
                       'draw.resources.captured'):
            self.assertIn(reason, NATIVE)

    def test_readme_explains_the_cost_and_the_knobs(self):
        readme = (ROOT / 'rex/README.md').read_text()
        self.assertIn('SONIC_REX_NATIVE_FRAME_STRIDE', readme)
        self.assertIn('SONIC_REX_NATIVE_READBACK', readme)
        # The README documents the SDK-side knobs by their real cvar names and
        # explains how they map to per-run REX_* environment variables; the
        # runnable profile is where the REX_ spelling has to appear.
        self.assertIn('REX_<ИМЯ_КАПСОМ>', readme)
        for cvar in ('vsync', 'native_2x_msaa', 'vulkan_pipeline_creation_threads'):
            self.assertIn(cvar, readme)
        # The takeover question must be answered with data, in the README, not
        # with a promise.
        self.assertIn('coverage.txt', readme)
        self.assertIn('IGraphicsSystem', readme)
        self.assertIn('SONIC_REX_GRAPHICS_MODE=native', readme)
        self.assertIn('REX_VSYNC=false', FAST_SCRIPT)
        # The takeover question must be answered with data, in the README, not
        # with a promise.
        self.assertIn('coverage.txt', readme)
        self.assertIn('IGraphicsSystem', readme)


if __name__ == '__main__':
    unittest.main()
