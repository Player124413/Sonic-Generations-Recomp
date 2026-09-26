#!/usr/bin/env python3
"""Inspect a bounded Sonic/ReXGlue D3D capture; this is not a rendered-frame test."""
import argparse
import collections
import json
from pathlib import Path
import struct

ENTRIES = (
    "CreateDevice", "ReleaseDevice", "SetViewport", "SetScissor", "SetRenderTarget",
    "DrawVertices", "DrawIndexedVertices", "SwapHelper", "Clear", "Resolve",
)
STATE_BYTES = 13052
MAX_RECORDS = 4096


def inspect(stream):
    if stream.read(16) != b"SGRXGPU1" + struct.pack("<II", 1, STATE_BYTES):
        raise ValueError("unsupported or incomplete capture header")
    counts = collections.Counter()
    pipelines = collections.Counter()
    invalid = 0
    sequence = 0
    while header := stream.read(8):
        if len(header) != 8:
            raise ValueError("truncated record header")
        tag, size = struct.unpack("<II", header)
        if tag != 0x544E5645 or size not in (84, 84 + STATE_BYTES):
            raise ValueError("invalid record tag/size")
        if sequence >= MAX_RECORDS:
            raise ValueError("record cap exceeded")
        payload = stream.read(size)
        if len(payload) != size:
            raise ValueError("truncated record payload")
        number, entry, status = struct.unpack_from("<III", payload)
        if number != sequence or entry >= len(ENTRIES) or status > 2:
            raise ValueError("invalid record sequence/entry/status")
        if (status == 1) != (size == 84 + STATE_BYTES):
            raise ValueError("state status and size disagree")
        sequence += 1
        name = ENTRIES[entry]
        counts[name] += 1
        invalid += status == 2
        if name in ("DrawVertices", "DrawIndexedVertices") and status == 1:
            args = struct.unpack_from("<9Q", payload, 12)
            state = payload[84:]
            # Sonic offsets, not Rayman's +0x330C/+0x3310.
            ps, vs = struct.unpack_from(">II", state, 13044)
            pipelines[(args[1] & 0xFFFFFFFF, vs, ps)] += 1
    return {
        "format_version": 1,
        "records": sequence,
        "record_limit_reached": sequence == MAX_RECORDS,
        "entries": dict(counts),
        "unreadable_device_snapshots": invalid,
        "draw_bindings": [
            {"primitive": primitive, "vertex_shader_object": f"0x{vs:08X}",
             "pixel_shader_object": f"0x{ps:08X}", "draws": count}
            for (primitive, vs, ps), count in sorted(pipelines.items())
        ],
        "limitations": "Entry snapshots only; no texture/index/vertex payloads or shader hashes. "
                       "SwapHelper is not proof of a presented frame. EOF below the record limit "
                       "does not prove a normal game exit. This does not validate native rendering.",
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("capture", type=Path)
    args = parser.parse_args()
    try:
        with args.capture.open("rb") as stream:
            result = inspect(stream)
    except (OSError, ValueError) as error:
        parser.exit(1, f"capture error: {error}\n")
    print(json.dumps(result, indent=2))


if __name__ == "__main__":
    main()
