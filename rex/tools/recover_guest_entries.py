"""Recover only byte-checkable, straight-line PPC entry thunks.

Never port legacy C++ bodies or synthesize success returns. The legacy disassembly
is an inventory; the loaded XEX must match every encoded instruction at runtime.
"""
import argparse
import json
from pathlib import Path
import re


def mappings(text):
    return {int(a, 16): name for a, name in re.findall(
        r'(?:\{\s*|SetFunction\()0x([0-9A-Fa-f]+),\s*(\w+)', text)}


def encode(op, pc):
    if m := re.fullmatch(r'addi r(\d+),r(\d+),(-?\d+)', op):
        dst, src, imm = map(int, m.groups())
        if not (0 <= dst < 32 and 0 <= src < 32 and -32768 <= imm <= 32767):
            raise ValueError(op)
        value = f'ctx.r{src}.u64' if src else 'uint64_t(0)'
        return 0x38000000 | dst << 21 | src << 16 | (imm & 65535), f'ctx.r{dst}.u64 = {value} + uint64_t(int64_t({imm}));'
    if m := re.fullmatch(r'li r(\d+),(-?\d+)', op):
        dst, imm = map(int, m.groups())
        return encode(f'addi r{dst},r0,{imm}', pc)
    if m := re.fullmatch(r'mr r(\d+),r(\d+)', op):
        dst, src = map(int, m.groups())
        if not (0 <= dst < 32 and 0 <= src < 32):
            raise ValueError(op)
        return 0x7C000378 | src << 21 | dst << 16 | src << 11, f'ctx.r{dst}.u64 = ctx.r{src}.u64;'
    if m := re.fullmatch(r'b 0x([0-9a-f]+)', op):
        delta = int(m[1], 16) - pc
        if delta % 4 or not -(1 << 25) <= delta < (1 << 25):
            raise ValueError(op)
        return 0x48000000 | (delta & 0x03FFFFFC), None
    raise ValueError(op)


def discover(legacy, registered):
    found = []
    unresolved = []
    padding = 0
    for path in sorted(legacy.glob('ppc_recomp.*.cpp')):
        for addr, body in re.findall(r'PPC_FUNC_IMPL\(__imp__sub_([0-9A-F]+)\) \{(.*?)\n\}', path.read_text(), re.S):
            address = int(addr, 16)
            if address in registered:
                continue
            ops = [x.strip() for x in re.findall(r'^\s*// (.+)$', body, re.M)]
            if ops == ['.long 0x0']:
                padding += 1
                continue
            target = int(ops[-1][2:], 16) if ops and re.fullmatch(r'b 0x[0-9a-f]+', ops[-1]) else None
            try:
                if not (2 <= len(ops) <= 5 and target in registered):
                    raise ValueError('not a supported tail thunk')
                encoded = [encode(op, address + i * 4) for i, op in enumerate(ops)]
                if any(statement is None for _, statement in encoded[:-1]):
                    raise ValueError('intermediate branch')
            except ValueError:
                unresolved.append(f'0x{address:08X}')
                continue
            found.append(dict(address=address, target=target, symbol=registered[target],
                              words=[w for w, _ in encoded], statements=[s for _, s in encoded[:-1]],
                              ops=ops, source=path.name))
    return sorted(found, key=lambda t: t['address']), sorted(unresolved), padding


def emit(legacy, generated, output):
    init = (generated / 'sonicgenerations_init.cpp').read_text()
    register = (generated / 'sonicgenerations_register.cpp').read_text()
    registered = mappings(init)
    if not registered or registered != mappings(register):
        raise ValueError('Generated mapping inventories disagree or are empty')
    thunks, unresolved, padding = discover(legacy, registered)
    if 0x8310BEE0 not in registered and not any(t['address'] == 0x8310BEE0 for t in thunks):
        raise ValueError('Known missing entry 0x8310BEE0 was not recovered')
    output.mkdir(parents=True, exist_ok=True)
    header = '#pragma once\n'
    cpp = '''// Generated from legacy disassembly, with mandatory live-XEX validation.
#include "sonicgenerations_pch.h"
#include "guest_entry_recovery.h"
#include <cstdio>
#include <stdexcept>
#include <cstdint>
namespace {
template<size_t N> void CheckCode(const uint8_t* base, uint32_t address, const uint32_t (&words)[N]) {
    if (!base) throw std::runtime_error("Missing guest memory for entry recovery");
    for (size_t i = 0; i < N; ++i) {
        const auto* p = base + address + i * 4;
        uint32_t actual = uint32_t(p[0]) << 24 | uint32_t(p[1]) << 16 | uint32_t(p[2]) << 8 | p[3];
        if (actual != words[i]) {
            char message[160];
            std::snprintf(message, sizeof(message), "Guest entry 0x%08X instruction %zu mismatch: expected %08X, got %08X; incompatible XEX or code inventory", address, i, words[i], actual);
            throw std::runtime_error(message);
        }
    }
}
}
'''
    for target in sorted({t['symbol'] for t in thunks}):
        cpp += f'REX_EXTERN({target});\n'
    entries = []
    calls = []
    for t in thunks:
        name = f"sonic_recovered_{t['address']:08X}"
        header += f'REX_EXTERN({name});\n'
        words = ', '.join(f'0x{w:08X}' for w in t['words'])
        cpp += f'REX_EXTERN({name}) {{\n    static constexpr uint32_t words[] = {{{words}}};\n    CheckCode(base, 0x{t["address"]:08X}, words);\n'
        cpp += ''.join(f'    {s}\n' for s in t['statements'])
        cpp += f'    {t["symbol"]}(ctx, base);\n}}\n'
        entries.append(f'    {{ 0x{t["address"]:08X}, {name} }},')
        calls.append(f'  registrar->SetFunction(0x{t["address"]:08X}, {name});')
    include = '#include "sonicgenerations_init.h"'
    for name, text, marker, insertion in [
        ('sonicgenerations_init.cpp', init, 'PPCFuncMapping PPCFuncMappings[] = {', '\n'.join(entries)),
        ('sonicgenerations_register.cpp', register, 'void sonicgenerations_RegisterFunctions(rex::runtime::IModuleRegistrar* registrar) {', '\n'.join(calls))]:
        if text.count(marker) != 1 or text.count(include) != 1:
            raise ValueError(f'Unexpected generated layout: {name}')
        text = text.replace(include, include + '\n#include "guest_entry_recovery.h"')
        if name == 'sonicgenerations_init.cpp':
            # Retain sorted address order for consumers that inspect the table.
            for thunk, entry in reversed(list(zip(thunks, entries))):
                following = next((m for m in re.finditer(r'(?m)^[ \t]*\{\s*0x([0-9A-Fa-f]+),', text)
                                  if int(m[1], 16) > thunk['address']), None)
                if following is None:
                    raise ValueError('Recovered entry is outside generated mapping range')
                text = text[:following.start()] + entry + '\n' + text[following.start():]
        else:
            text = text.replace(marker, marker + '\n' + insertion)
        (output / name).write_text(text)
    (output / 'guest_entry_recovery.h').write_text(header)
    (output / 'guest_entry_recovery.cpp').write_text(cpp)
    report = dict(recovered=thunks, excluded_padding=padding, unresolved=unresolved)
    (output / 'guest-entry-audit.json').write_text(json.dumps(report, indent=2) + '\n')
    emit_tests(thunks, output)
    print(f'Guest entry audit: recovered {len(thunks)}, excluded {padding} padding entries, left {len(unresolved)} unclassified entries untouched')


def emit_tests(thunks, output):
    # Compile the actual wrappers against SDK PPCContext; fake ONLY final callees.
    text = '''#include "sonicgenerations_pch.h"
#include "guest_entry_recovery.h"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <cstring>
#include <stdexcept>
#include <cstdio>
static unsigned calls;
static uint32_t called;
'''
    for t in {t['symbol']: t for t in thunks}.values():
        text += f'REX_EXTERN({t["symbol"]}) {{ ++calls; called = 0x{t["target"]:08X}; }}\n'
    text += '''int main() {
    auto* base = static_cast<uint8_t*>(VirtualAlloc(nullptr, size_t(1) << 32, MEM_RESERVE, PAGE_NOACCESS));
    if (!base) return 1;
    unsigned failed = 0;
'''
    for t in thunks:
        addr = t['address']
        text += f'    if (!VirtualAlloc(base + 0x{addr & ~4095:08X}, 8192, MEM_COMMIT, PAGE_READWRITE)) return 2;\n'
        for i, word in enumerate(t['words']):
            for j in range(4):
                text += f'    base[0x{addr+i*4+j:08X}] = {(word >> (24-8*j)) & 255};\n'
        text += '''    for (auto seed : {uint64_t(0), uint64_t(0x7FFFFFFFFFFFFFFF), ~uint64_t(0)}) {
        PPCContext ctx{}, expected{};
'''
        # Initialize all bytes to expose unintended state mutation; seed all GPRs.
        text += '        std::memset(&ctx, 0x5A, sizeof(ctx));\n'
        text += ''.join(f'        ctx.r{i}.u64 = seed;\n' for i in range(32))
        text += '        std::memcpy(&expected, &ctx, sizeof(ctx));\n'
        # Independent arithmetic reference from assembly, not emitted statements.
        for op in t['ops'][:-1]:
            nums = [int(v) for v in re.findall(r'-?\d+', op)]
            dst = nums[0]
            if op.startswith('mr '): expr = f'expected.r{nums[1]}.u64'
            elif op.startswith('li '): expr = f'uint64_t(int64_t({nums[1]}))'
            else: expr = (f'expected.r{nums[1]}.u64' if nums[1] else 'uint64_t(0)') + f' + uint64_t(int64_t({nums[2]}))'
            text += f'        expected.r{dst}.u64 = {expr};\n'
        text += f'''        calls = 0; called = 0;
        sonic_recovered_{addr:08X}(ctx, base);
        if (calls != 1 || called != 0x{t['target']:08X} || std::memcmp(&ctx, &expected, sizeof(ctx))) ++failed;
    }}
'''
        # Reject a mismatch in EVERY instruction before touching any context.
        for i in range(len(t['words'])):
            text += f'''    {{
        PPCContext ctx{{}}, before{{}}; calls = 0;
        std::memcpy(&before, &ctx, sizeof(ctx));
        base[0x{addr+i*4:08X}] ^= 1;
        bool rejected = false;
        try {{ sonic_recovered_{addr:08X}(ctx, base); }} catch (const std::runtime_error&) {{ rejected = true; }}
        if (!rejected || calls || std::memcmp(&ctx, &before, sizeof(ctx))) ++failed;
        base[0x{addr+i*4:08X}] ^= 1;
    }}
'''
    text += '''    VirtualFree(base, 0, MEM_RELEASE);
    std::printf("Guest entry recovery failures: %u\\n", failed);
    return failed ? 1 : 0;
}
'''
    (output / 'guest_entry_recovery_tests.cpp').write_text(text)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--legacy-root', type=Path, required=True)
    parser.add_argument('--generated-dir', type=Path, required=True)
    parser.add_argument('--output-dir', type=Path, required=True)
    args = parser.parse_args()
    emit(args.legacy_root, args.generated_dir, args.output_dir)
