"""The capture decoder must agree with the C++ that writes and consumes captures.

A decoder that quietly disagrees with the writer is worse than no decoder: it
would explain a black screen with numbers that were never in the file. So every
constant and every argument use is pinned on both sides here, and the decoder is
run over a synthetic capture whose answers are known by construction.
"""
import importlib.util
import struct
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
TOOL = ROOT / 'rex/tools/decode_gpu_capture.py'
WRITER = ROOT / 'rex/src/gpu_capture.cpp'
WRITER_HEADER = ROOT / 'rex/src/gpu_capture.h'
BRIDGE = ROOT / 'rex/src/native_gpu_bridge.cpp'
COMMANDS = ROOT / 'SonicGenerationsRecomp/gpu/native_commands.cpp'
FRAME = ROOT / 'SonicGenerationsRecomp/gpu/native_frame.cpp'
ENTRIES = ROOT / 'SonicGenerationsRecomp/gpu/guest_entries.inc'


def load_tool():
    spec = importlib.util.spec_from_file_location('decode_gpu_capture', TOOL)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def build_capture(records, state_bytes=13052):
    """Write a capture the way gpu_capture.cpp does, with known contents."""
    tool = load_tool()
    names = tool.entry_names()
    out = bytearray(b'SGRXGPU1' + struct.pack('<II', 1, state_bytes))
    for sequence, (name, args, words) in enumerate(records):
        state = bytearray(state_bytes)
        for index, value in words.items():
            struct.pack_into('>I', state, index * 4, value)
        payload = 12 + 9 * 8 + (state_bytes if words is not None else 0)
        out += struct.pack('<IIIII', tool.TAG, payload, sequence, names.index(name),
                           1 if words is not None else 0)
        out += struct.pack('<9Q', *(args + [0] * (9 - len(args))))
        out += bytes(state)
    return bytes(out)


class GpuCaptureToolTests(unittest.TestCase):
    def test_the_format_constants_match_the_writer(self):
        tool = load_tool()
        writer = WRITER.read_text(encoding='utf-8')
        header = WRITER_HEADER.read_text(encoding='utf-8')
        self.assertEqual(tool.MAGIC, b'SGRXGPU1')
        self.assertEqual(tool.TAG, 0x544E5645)
        self.assertEqual(tool.STATE_BYTES, 13052)
        self.assertEqual(tool.ARGUMENTS, 9)
        self.assertIn('output_.write("SGRXGPU1", 8)', writer)
        self.assertIn('Put32(output_, 0x544E5645); // EVNT', writer)
        self.assertIn('Put32(output_, 12 + 9 * 8 + (valid ? DeviceSnapshotBytes : 0))', writer)
        self.assertIn('constexpr size_t DeviceSnapshotBytes = 13052;', header)
        self.assertIn('using CaptureArguments = std::array<uint64_t, 9>;', header)

    def test_the_argument_use_matches_the_native_path(self):
        bridge = BRIDGE.read_text(encoding='utf-8')
        commands = COMMANDS.read_text(encoding='utf-8')
        # The hook passes r4..r9 as the resolve arguments, so the destination is
        # argument r6 -- the decoder says the same only if it says args[4].
        self.assertIn('stream_.CaptureResolve(memory, u(0), {u(1), u(2), u(3), u(4), u(5), u(6)})',
                      bridge)
        self.assertIn('stream_.SelectBackbuffer(memory, u(0), u(1));', bridge)
        self.assertIn('resolve.flags=args[0];', commands)
        self.assertIn('resolve.rectangle=args[1];', commands)
        self.assertIn('resolve.point=args[3];', commands)
        self.assertIn('resolve.mip=args[4];', commands)
        self.assertIn('resolve.slice=args[5];', commands)
        self.assertIn('resolve.destination=ReadTexture(memory,args[2]);', commands)
        tool = load_tool()
        record = tool.Record(0, 0, 1, [0, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0], b'')
        self.assertEqual(record.resolve_mode(),
                         {'flags': 0x11, 'rectangle': 0x22, 'point': 0x44, 'mip': 0x55,
                          'slice': 0x66})
        self.assertEqual(record.destination, 0x33)

    def test_the_frontbuffer_and_the_resolved_destination_are_compared_by_page(self):
        frame_source = FRAME.read_text(encoding='utf-8')
        self.assertIn('Guest backbuffer has no matching resolved image', frame_source)
        self.assertIn('auto selected=texturePlan.find(batch.backbuffer.physical);', frame_source)
        tool = load_tool()
        capture = build_capture([
            ('DrawIndexedVertices', [0x1000, 1, 2, 3], {}),
            ('Resolve', [0x2000, 0, 0, 0x12345678, 0, 0, 0], {}),
            ('SwapHelper', [0x2000, 0x12345ABC], {}),
        ])
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / 'gpu-capture.bin'
            path.write_bytes(capture)
            _, _, records = tool.read_capture(path)
            split = tool.frames(records, tool.entry_names())
        self.assertEqual(len(split), 1)
        verdicts = tool.check(split[0], tool.entry_names())
        self.assertTrue(any(v.startswith('ok:') for v in verdicts), verdicts)

    def test_a_frame_that_never_resolves_the_frontbuffer_is_named_as_refused(self):
        tool = load_tool()
        capture = build_capture([
            ('DrawIndexedVertices', [0x1000, 1, 2, 3], {}),
            ('Resolve', [0x2000, 0, 0, 0x22222000, 0, 0, 0], {}),
            ('SwapHelper', [0x2000, 0x12345000], {}),
        ])
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / 'gpu-capture.bin'
            path.write_bytes(capture)
            completed = subprocess.run([sys.executable, str(TOOL), str(path)],
                                       capture_output=True, text=True)
        self.assertEqual(completed.returncode, 0, completed.stderr)
        self.assertIn('Guest backbuffer has no matching resolved image', completed.stdout)
        self.assertIn('REFUSED', completed.stdout)

    def test_a_resolve_mode_this_renderer_refuses_is_reported(self):
        tool = load_tool()
        capture = build_capture([
            ('Resolve', [0x2000, 1, 0, 0x12345678, 0, 0, 0], {}),
            ('SwapHelper', [0x2000, 0x12345678], {}),
        ])
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / 'gpu-capture.bin'
            path.write_bytes(capture)
            completed = subprocess.run([sys.executable, str(TOOL), str(path), '--checks'],
                                       capture_output=True, text=True)
        self.assertIn('Native resolve uses a mode this renderer does not implement',
                      completed.stdout)
        self.assertIn('Native resolve uses a mode this renderer does not implement',
                      FRAME.read_text(encoding='utf-8'))

    def test_a_frame_is_what_the_swap_drains(self):
        bridge = BRIDGE.read_text(encoding='utf-8')
        self.assertIn('return stream_.Drain();', bridge)
        tool = load_tool()
        names = tool.entry_names()
        self.assertEqual(names, [line.split('(')[1].split(',')[0].strip()
                                 for line in ENTRIES.read_text(encoding='utf-8').splitlines()
                                 if line.startswith('SONIC_GPU_ENTRY(')])
        self.assertIn('SwapHelper', names)


if __name__ == '__main__':
    unittest.main()
