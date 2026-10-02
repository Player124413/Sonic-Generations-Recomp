"""The offline replay is the only way renderer work is verified without a GPU.

These tests pin the decisions that make a recording usable: the sidecar format is
written by the recorder and read by the tool, missing guest memory fails instead
of returning zeros, the replay streams a frame through the ring the way the guest
does, and the tool and its report travel with the package.
"""
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
GPU = ROOT / 'rex/src/gpu_native'
IMAGE = (GPU / 'memory_image.cpp').read_text(encoding='utf-8')
IMAGE_HEADER = (GPU / 'memory_image.h').read_text(encoding='utf-8')
SIDECAR = (GPU / 'memory_sidecar.cpp').read_text(encoding='utf-8')
SIDECAR_HEADER = (GPU / 'memory_sidecar.h').read_text(encoding='utf-8')
REPLAY = (GPU / 'replay.cpp').read_text(encoding='utf-8')
REPLAY_HEADER = (GPU / 'replay.h').read_text(encoding='utf-8')
DUMP = (GPU / 'stream_dump.cpp').read_text(encoding='utf-8')
DUMP_HEADER = (GPU / 'stream_dump.h').read_text(encoding='utf-8')
TOOL = (ROOT / 'rex/tools/replay.cpp').read_text(encoding='utf-8')
TESTS = (ROOT / 'rex/tests/replay_tests.cpp').read_text(encoding='utf-8')
CMAKE = (ROOT / 'rex/CMakeLists.txt').read_text(encoding='utf-8')
WORKFLOW = (ROOT / '.github/workflows/windows-rexglue.yml').read_text(encoding='utf-8')
SCRIPT = (ROOT / 'rex/windows/Run-Native-GPU-Replay.cmd').read_text(encoding='utf-8')


class ReplayPolicyTests(unittest.TestCase):
    def test_missing_guest_memory_fails_instead_of_returning_zeros(self):
        # Zero-filled constants would draw garbage at the origin, which looks like
        # a renderer bug rather than a missing capture. A refused read is the
        # honest answer, and the replay reports it as unsupported work.
        self.assertIn('if (CoveredLength(physical, uint32_t(destination.size())) != destination.size()) {',
                      IMAGE)
        self.assertIn('++readFailures_;', IMAGE)
        # Page granularity is storage. "Readable" is tracked by captured ranges,
        # because a page that holds 16 captured bytes is not 4096 readable ones.
        self.assertIn('std::vector<std::pair<uint32_t, uint32_t>> covered_;', IMAGE_HEADER)
        self.assertIn('void MemoryImage::AddRange(uint32_t address, uint32_t length) {', IMAGE)
        self.assertIn('uint32_t MemoryImage::CoveredLength(uint32_t address, uint32_t limit) const noexcept {',
                      IMAGE)

    def test_guest_byte_order_is_preserved_end_to_end(self):
        # A byte-order mistake would show up as a plausible-looking wrong value,
        # so the image stores guest order and Write32 writes it explicitly.
        self.assertIn('const uint8_t bytes[4] = {uint8_t(value >> 24), uint8_t(value >> 16),',
                      IMAGE)
        self.assertIn('const uint8_t bytes[4] = {uint8_t(value >> 24), uint8_t(value >> 16), uint8_t(value >> 8),\n                              uint8_t(value)};',
                      IMAGE)

    def test_the_sidecar_round_trips_and_refuses_damage(self):
        self.assertIn("constexpr char kMagic[8] = {'S', 'O', 'N', 'I', 'C', 'M', 'E', 'M'};", SIDECAR)
        self.assertIn('constexpr uint32_t kVersion = 1;', SIDECAR)
        self.assertIn('not a memory sidecar (bad magic)', SIDECAR)
        # A damaged record length must not make the loader allocate it.
        self.assertIn('constexpr uint32_t kMaxRecordBytes = 64u << 20;', SIDECAR)
        self.assertIn('has an implausible region of', SIDECAR)
        self.assertIn('static bool Load(const std::filesystem::path& path, MemoryImage& memory,',
                      SIDECAR_HEADER)

    def test_the_recorder_captures_what_the_stream_reads(self):
        # The recorded frame is only the ring; shader microcode, constants and
        # indirect buffers live elsewhere in guest memory, and without them a
        # replay decodes headers and reports the interesting packets as
        # unsupported.
        self.assertIn('memory.bin', DUMP_HEADER)
        self.assertIn('maxCaptureBytes = 32u << 20', DUMP_HEADER)
        for read in ('pm4::Action::ShaderLoad', 'pm4::Action::StateSet',
                     'pm4::Action::IndirectBuffer'):
            self.assertIn(read, DUMP)
        self.assertIn('CaptureRegion(address, size_t(dwords) * 4u);', DUMP)
        self.assertIn('bool StreamDump::WriteMemorySidecar(std::string& error) {', DUMP)
        # The capture is bounded and its misses are counted, never silent.
        self.assertIn('captures_skipped=', DUMP)
        self.assertIn('captures_failed=', DUMP)
        self.assertIn('memory_regions=', DUMP)

    def test_the_replay_streams_the_frame_through_the_ring(self):
        # The guest does not hand the GPU a flat buffer: it writes into a ring and
        # moves the write pointer. Feeding the whole frame in one go would skip
        # exactly the paths a live ring exercises (truncation, resume, wrap).
        self.assertIn('bool PlaceInRing(MemoryImage& image, uint32_t ringBase, uint32_t ringMask,',
                      REPLAY)
        self.assertIn('processor.OnWritePointer(fed & ringMask);', REPLAY)
        self.assertIn('uint32_t FeedChunkDwords(uint32_t ringDwords) {', REPLAY)
        self.assertIn('while (processor.HasWork() && steps < options.maxSteps) {', REPLAY)
        # A stream that never drains must not hang the tool.
        self.assertIn('size_t maxSteps = 1u << 20;', REPLAY_HEADER)

    def test_the_report_is_the_renderer_work_list(self):
        self.assertIn('opcodes the stream used (Type-3):', REPLAY)
        self.assertIn('registers written (index = count), highest first:', REPLAY)
        self.assertIn('draws=%llu vertices=%llu constant_blocks=%llu shader_uploads=%llu', REPLAY)
        self.assertIn('guest_memory_sidecar=%s regions=%llu bytes=%llu', REPLAY)
        self.assertIn('replay-report.txt', REPLAY)
        # The tool explains a recording-less run instead of printing zeros.
        self.assertIn('Run rex\\\\windows\\\\Run-Native-GPU-Dump.cmd first', TOOL)
        self.assertIn('return 2;', TOOL)

    def test_the_replay_contract_is_tested_and_shipped(self):
        # The tests are the contract: honest memory, sidecar round-trip, every
        # packet class, a frame larger than the ring, and the directory report.
        for scenario in ('TestMemoryImageIsHonestAboutWhatItHas', 'TestSidecarRoundTrips',
                         'TestReplayExecutesEveryPacketClass', 'TestReplayReportsMissingGuestMemory',
                         'TestReplayStreamsFramesLargerThanTheRing',
                         'TestDirectoryReplayWritesTheReport'):
            self.assertIn(scenario, TESTS)
        self.assertIn('src/gpu_native/memory_image.cpp', CMAKE)
        self.assertIn('src/gpu_native/memory_sidecar.cpp', CMAKE)
        self.assertIn('src/gpu_native/replay.cpp', CMAKE)
        self.assertIn('add_test(NAME rex_replay COMMAND rex_replay_tests)', CMAKE)
        self.assertIn('add_executable(rex_gpu_replay tools/replay.cpp)', CMAKE)
        # CI builds the tool, runs the replay test with the device tests, and puts
        # both the tool and the artifact in the package.
        self.assertIn('rex_replay_tests rex_gpu_replay --parallel 2', WORKFLOW)
        self.assertIn('|rex_replay)$', WORKFLOW)
        self.assertIn('native-plugin/rex_gpu_replay.exe', WORKFLOW)
        # The smoke check must be able to say what went wrong: it verifies the
        # tool is present, runs it against a directory it knows is empty, and
        # reports the tool's own output in the annotation.
        self.assertIn("$replay = './package-rex/rex_gpu_replay.exe'", WORKFLOW)
        self.assertIn('rex_gpu_replay did not report an empty recording::exit code $replayCode; output: $replayTail',
                      WORKFLOW)
        self.assertIn("$replaySmokeDir = Join-Path $env:RUNNER_TEMP 'rex-empty-replay'", WORKFLOW)
        self.assertIn("$replaySources = @('build-rex-game/Release/rex_gpu_replay.exe', 'native-plugin/rex_gpu_replay.exe')",
                      WORKFLOW)
        # One click from the package: the replay reads the dump next to the game.
        self.assertIn('rex_gpu_replay.exe', SCRIPT)
        self.assertIn('assets\\rex-cache\\gpu-dump', SCRIPT)
        self.assertIn('replay-report.txt', SCRIPT)


if __name__ == '__main__':
    unittest.main()
