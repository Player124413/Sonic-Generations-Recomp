import importlib.util
import io
import re
from pathlib import Path
import struct
import unittest

spec = importlib.util.spec_from_file_location("capture", Path(__file__).parents[1] / "tools/inspect_gpu_capture.py")
capture = importlib.util.module_from_spec(spec)
spec.loader.exec_module(capture)
HEADER = b"SGRXGPU1" + struct.pack("<II", 1, 13052)


def record(sequence=0, entry=6, status=1):
    state = bytearray(13052) if status == 1 else b""
    if state:
        struct.pack_into(">II", state, 13044, 0x12345000, 0x23456000)
    payload = struct.pack("<III9Q", sequence, entry, status, 0x80010000, 4, 0, 0, 3, 0, 0, 0, 0) + state
    return struct.pack("<II", 0x544E5645, len(payload)) + payload


class CaptureTests(unittest.TestCase):
    def test_entry_inventory(self):
        source = Path(__file__).parents[2] / "SonicGenerationsRecomp/gpu/guest_entries.inc"
        names = re.findall(r"^SONIC_GPU_ENTRY\((\w+),", source.read_text(encoding='utf-8'), re.MULTILINE)
        self.assertEqual(tuple(names), capture.ENTRIES)

    def test_sonic_bindings(self):
        data = HEADER + record() + record(1)
        result = capture.inspect(io.BytesIO(data))
        self.assertEqual(result["records"], 2)
        self.assertEqual(result["draw_bindings"], [{"primitive": 4, "vertex_shader_object": "0x23456000",
                                                  "pixel_shader_object": "0x12345000", "draws": 2}])

    def test_unreadable(self):
        result = capture.inspect(io.BytesIO(HEADER + record(status=2)))
        self.assertEqual(result["unreadable_device_snapshots"], 1)
        self.assertFalse(result["draw_bindings"])

    def test_reject_malformed(self):
        data = HEADER + record()
        for bad in (b"", data[:15], data[:19], data[:-1], HEADER + record(1), HEADER + record(entry=999),
                    HEADER + record(status=3), HEADER + struct.pack("<II", 0x544E5645, 0xFFFFFFFF)):
            with self.subTest(size=len(bad)), self.assertRaises(ValueError):
                capture.inspect(io.BytesIO(bad))

    def test_cap(self):
        with self.assertRaises(ValueError):
            capture.inspect(io.BytesIO(HEADER + b"".join(record(i, status=2) for i in range(4097))))


if __name__ == "__main__":
    unittest.main()
