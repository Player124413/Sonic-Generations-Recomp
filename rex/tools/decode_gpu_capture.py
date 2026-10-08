#!/usr/bin/env python3
"""Read a GPU capture and say what the native frame path decided about it.

`assets/rex-cache/gpu-capture.bin` (SONIC_REX_GPU_CAPTURE=1) is the only artifact
from a player's machine that holds the raw arguments of the hooked D3D entry
points. The native frame path decides from exactly those arguments: which texture
a resolve writes, whether its mode fields are zero, and which texture the swap
selects as the backbuffer. So a capture answers "why is the frame black" without
a GPU, without Windows, and without a second run -- which is the point of this
tool: a black window that can only be explained by a new run cannot be fixed.

The format is written by rex/src/gpu_capture.cpp and never includes host structs,
so it is decoded here field by field:

    header  "SGRXGPU1" u32 version u32 deviceStateBytes
    record  u32 tag u32 payloadBytes u32 sequence u32 entry u32 status
            9 x u64 arguments (r3..r10, then the raw bits of f1)
            deviceStateBytes of guest state when status == 1

The argument use mirrors the native path on purpose and is pinned by
rex/tests/test_gpu_capture_tools.py, so a change on one side fails the tests of
the other instead of silently disagreeing:

    DrawVertices/DrawIndexedVertices  r3=device, r4..r7 indices and counts
    Clear                             r3=device, r4..r6 rectangle, f1=depth
    Resolve                           r4=flags, r5=rectangle, r6=destination,
                                      r7=point, r8=mip, r9=slice
    SwapHelper                        r3=device, r4=frontbuffer texture

Everything the native path refuses when it is nonzero is listed as refused here,
because that is the difference between a frame and a black screen.
"""
from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
ENTRIES = ROOT / 'SonicGenerationsRecomp/gpu/guest_entries.inc'
CAPTURE_SOURCE = ROOT / 'rex/src/gpu_capture.cpp'

MAGIC = b'SGRXGPU1'
TAG = 0x544E5645
STATE_BYTES = 13052
ARGUMENTS = 9
HEADER_BYTES = 8 + 4 + 4
# tag and payload size, then the payload itself (sequence, entry, status, args).
RECORD_HEADER = 8
PAYLOAD_BYTES = 12 + ARGUMENTS * 8
RECORD_BYTES = RECORD_HEADER + PAYLOAD_BYTES
# State block offsets, from NativeState in gpu/native_commands.h (guest byte
# offsets converted to word indices, as NativeState::Read does).
COLOR_TARGETS = 12792 // 4
DEPTH_TARGET = 12808 // 4
INDEX_BUFFER = 12788 // 4
# Fetch constants (6 words per slot) and the 26 texture pointers, as
# NativeState::TextureFetch and NativeState::Textures read them.
FETCH_CONSTANTS = 1152
TEXTURE_POINTERS = 12896 // 4
TEXTURE_SLOTS = 26
VIEWPORT = 13000 // 4
SCISSOR = 13028 // 4
PIXEL_SHADER = 13044 // 4
VERTEX_SHADER = 13048 // 4


def entry_names() -> list[str]:
    names: list[str] = []
    for line in ENTRIES.read_text(encoding='utf-8').splitlines():
        line = line.strip()
        if line.startswith('SONIC_GPU_ENTRY('):
            names.append(line[len('SONIC_GPU_ENTRY('):].split(',')[0].strip())
    if not names:
        raise SystemExit(f'no entries in {ENTRIES}')
    return names


class Record:
    __slots__ = ('sequence', 'entry', 'status', 'args', 'state')

    def __init__(self, sequence: int, entry: int, status: int, args: list[int], state: bytes):
        self.sequence = sequence
        self.entry = entry
        self.status = status
        self.args = args
        self.state = state

    def word(self, byte_offset: int) -> int:
        return struct.unpack_from('>I', self.state, byte_offset)[0]

    def words(self, byte_offset: int, count: int) -> list[int]:
        return list(struct.unpack_from(f'>{count}I', self.state, byte_offset))

    def floats(self, byte_offset: int, count: int) -> list[float]:
        return list(struct.unpack_from(f'>{count}f', self.state, byte_offset))

    @property
    def device(self) -> int:
        return self.args[0]

    @property
    def frontbuffer(self) -> int:
        return self.args[1]

    @property
    def destination(self) -> int:
        # r6: the texture the resolve writes. ReadTexture(memory, args[2]) in
        # CaptureResolve gets it from the third slot of {r4..r9}, which is r6.
        return self.args[3]

    def resolve_mode(self) -> dict[str, int]:
        # Mirror of the native path's refusal: anything nonzero here means the
        # resolve is not a plain full-surface resolve.
        return {'flags': self.args[1], 'rectangle': self.args[2], 'point': self.args[4],
                'mip': self.args[5], 'slice': self.args[6]}

    def resolve_is_refused(self) -> bool:
        return any(self.resolve_mode().values())

    def active_textures(self) -> list[tuple[int, int, int]]:
        # (slot, texture pointer, fetch address) for the slots the guest bound.
        # The texture pointer is what a draw binds; the fetch address is what a
        # resolve destination has to match for the frame to be used.
        if len(self.state) < STATE_BYTES:
            return []
        found = []
        for slot in range(TEXTURE_SLOTS):
            pointer = self.word(TEXTURE_POINTERS * 4 + slot * 4)
            fetch = self.word(FETCH_CONSTANTS + slot * 24 + 4)
            if pointer or fetch:
                found.append((slot, pointer, fetch))
        return found


def read_capture(path: Path) -> tuple[int, int, list[Record]]:
    data = path.read_bytes()
    if len(data) < HEADER_BYTES or data[:8] != MAGIC:
        raise SystemExit(f'{path} is not a GPU capture (bad magic)')
    version, state_bytes = struct.unpack_from('<II', data, 8)
    records: list[Record] = []
    offset = HEADER_BYTES
    while offset + RECORD_BYTES <= len(data):
        tag, payload, sequence, entry, status = struct.unpack_from('<IIIII', data, offset)
        if tag != TAG:
            raise SystemExit(f'record {len(records)} at {offset}: bad tag {tag:#x}')
        if payload < PAYLOAD_BYTES or payload > PAYLOAD_BYTES + state_bytes:
            raise SystemExit(f'record {len(records)} at {offset}: bad payload {payload}')
        args = list(struct.unpack_from(f'<{ARGUMENTS}Q', data, offset + RECORD_HEADER + 12))
        state = data[offset + RECORD_BYTES:offset + RECORD_HEADER + payload]
        records.append(Record(sequence, entry, status, args, state))
        offset += RECORD_HEADER + payload
    return version, state_bytes, records


def frames(records: list[Record], names: list[str]) -> list[list[Record]]:
    """Split into frames: a SwapHelper ends one, which is when the frame is used."""
    result: list[list[Record]] = []
    current: list[Record] = []
    for record in records:
        current.append(record)
        if names[record.entry] == 'SwapHelper':
            result.append(current)
            current = []
    if current:
        result.append(current)  # an unfinished frame still says what it contained
    return result


def describe(record: Record, names: list[str], index: int) -> list[str]:
    name = names[record.entry]
    lines = [f'  {index:5d} {record.sequence:5d} {name:22s} status={record.status}'
             f' args={[hex(a) for a in record.args[:8]]}']
    if name == 'Resolve':
        mode = record.resolve_mode()
        refused = 'REFUSED (mode fields nonzero)' if record.resolve_is_refused() else 'a plain resolve'
        lines.append(f'        resolve {refused}: {mode}')
        lines.append(f'        destination texture {record.destination:#x}')
    elif name == 'SwapHelper':
        lines.append(f'        frontbuffer texture {record.frontbuffer:#x} device {record.device:#x}')
    elif name in ('DrawVertices', 'DrawIndexedVertices', 'Clear') and len(record.state) >= STATE_BYTES:
        targets = record.words(COLOR_TARGETS * 4, 4)
        viewport = record.floats(VIEWPORT * 4, 6)
        lines.append('        colour targets'
                     f' {[hex(t) for t in targets]} depth {record.word(DEPTH_TARGET * 4):#x}'
                     f' viewport {viewport} scissor {record.words(SCISSOR * 4, 4)}'
                     f' vs {record.word(VERTEX_SHADER * 4):#x} ps {record.word(PIXEL_SHADER * 4):#x}'
                     f' indices {record.word(INDEX_BUFFER * 4):#x}')
        lines.append(f'        textures bound {record.active_textures()}')
    return lines


def check(frame: list[Record], names: list[str]) -> list[str]:
    """The decisions the native path makes from this frame, in its own order."""
    verdicts: list[str] = []
    resolves = [r for r in frame if names[r.entry] == 'Resolve']
    swaps = [r for r in frame if names[r.entry] == 'SwapHelper']
    draws = [r for r in frame if names[r.entry] in ('DrawVertices', 'DrawIndexedVertices')]
    clears = [r for r in frame if names[r.entry] == 'Clear']
    verdicts.append(f'frames content: {len(draws)} draws, {len(clears)} clears,'
                    f' {len(resolves)} resolves, {len(swaps)} swaps')
    refused = [r for r in resolves if r.resolve_is_refused()]
    if refused:
        verdicts.append(f'REFUSED: {len(refused)} resolve(s) use a mode this renderer does not'
                        ' implement ("Native resolve uses a mode this renderer does not'
                        ' implement") -- every frame with one is refused as a whole')
    if not swaps:
        verdicts.append('no SwapHelper in this frame: the batch is drained by the swap, so this'
                        ' frame never reached the renderer')
        return verdicts
    frontbuffer = swaps[-1].frontbuffer & ~4095
    destinations = {r.destination & ~4095 for r in resolves}
    if frontbuffer in destinations:
        entry = next(r for r in resolves if (r.destination & ~4095) == frontbuffer)
        verdicts.append(f'ok: a resolve writes the swap frontbuffer {frontbuffer:#x}'
                        f' (record {entry.sequence}), so the backbuffer has an image')
    else:
        verdicts.append(f'REFUSED: nothing resolves into the swap frontbuffer {frontbuffer:#x}'
                        f'; resolved destinations are {sorted(hex(d) for d in destinations)}'
                        ' -- this is "Guest backbuffer has no matching resolved image",'
                        ' which refuses every frame')
    return verdicts


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('capture', type=Path,
                        help='path to assets/rex-cache/gpu-capture.bin')
    parser.add_argument('--frame', type=int, default=1,
                        help='frame to describe in detail, 1-based (default: 1)')
    parser.add_argument('--all-frames', action='store_true',
                        help='print every frame instead of one')
    parser.add_argument('--checks', action='store_true',
                        help='print only the verdicts, no record listing')
    arguments = parser.parse_args()

    names = entry_names()
    version, state_bytes, records = read_capture(arguments.capture)
    split = frames(records, names)
    print(f'{arguments.capture}: version {version}, device state {state_bytes} bytes,'
          f' {len(records)} records, {len(split)} frame(s)')
    if len(records) == 0:
        print('no records: the capture never saw a GPU entry, so the game never reached the'
              ' renderer (a capture is written from the first hooked call onwards)')
        return 1

    wanted = split if arguments.all_frames else (
        [split[min(max(arguments.frame, 1), len(split)) - 1]])
    for number, frame in enumerate(wanted, 1):
        print(f'--- frame {number} of {len(split)}')
        for verdict in check(frame, names):
            print(f'    {verdict}')
        if not arguments.checks:
            for index, record in enumerate(frame):
                for line in describe(record, names, index):
                    print(line)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
