#!/usr/bin/env python3
"""Syntax-check Windows-only translation units away from Windows.

The contract build on Linux never compiles the game's Windows-only sources, so a
missing include in one of them stays invisible until the Windows runner gets far
enough to try. That happened once: `native_gpu.cpp` used the host-policy parsers
without including them and cost a full CI round trip.

This tool compiles those units with `-fsyntax-only` against a minimal windows.h
stand-in. It is a guard, not a port: it proves the unit parses and that every
identifier it names is declared somewhere it includes. It skips (exit code 0)
when no compiler or no Vulkan headers are available, so it can run on any host.
"""
from __future__ import annotations

import argparse
import os
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
STUB = Path(__file__).resolve().parent / 'winstub'

# Translation units that only the Windows game build compiles.
DEFAULT_UNITS = ('rex/src/native_gpu.cpp',)
# Include roots the game build passes: ReXGlue's host sources and the GPU bridge.
INCLUDE_ROOTS = ('rex/src', 'SonicGenerationsRecomp', 'rex/src/gpu')
VULKAN_HEADER_HINTS = (
    'VULKAN_HEADERS_DIR',
    'VULKAN_SDK',
)


def find_compiler() -> str | None:
    for candidate in ('g++', 'clang++', 'c++'):
        found = shutil.which(candidate)
        if found:
            return found
    return None


def find_vulkan_include() -> Path | None:
    for variable in VULKAN_HEADER_HINTS:
        value = os.environ.get(variable)
        if not value:
            continue
        for candidate in (Path(value) / 'include', Path(value)):
            if (candidate / 'vulkan/vulkan.h').exists():
                return candidate
    for candidate in (Path('/usr/include'), Path('/usr/local/include')):
        if (candidate / 'vulkan/vulkan.h').exists():
            return candidate
    return None


def syntax_check(unit: str, compiler: str, vulkan: Path | None) -> tuple[int, str]:
    command = [compiler, '-std=c++20', '-fsyntax-only', '-I', str(STUB)]
    if vulkan is not None:
        command += ['-I', str(vulkan)]
    for relative in INCLUDE_ROOTS:
        command += ['-I', str(ROOT / relative)]
    command.append(str(ROOT / unit))
    completed = subprocess.run(command, cwd=ROOT, capture_output=True, text=True)
    return completed.returncode, (completed.stderr or completed.stdout).strip()


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('units', nargs='*', default=list(DEFAULT_UNITS))
    parser.add_argument('--require', action='store_true',
                        help='fail instead of skipping when tools are missing')
    arguments = parser.parse_args()

    compiler = find_compiler()
    vulkan = find_vulkan_include()
    if compiler is None or vulkan is None:
        missing = 'compiler' if compiler is None else 'Vulkan headers (set VULKAN_HEADERS_DIR)'
        message = f'windows syntax check skipped: no {missing}'
        print(message, file=sys.stderr)
        return 1 if arguments.require else 0

    failed = False
    for unit in arguments.units:
        code, output = syntax_check(unit, compiler, vulkan)
        if code == 0:
            print(f'ok   {unit}')
            continue
        failed = True
        print(f'FAIL {unit}', file=sys.stderr)
        print(output, file=sys.stderr)
    return 1 if failed else 0


if __name__ == '__main__':
    raise SystemExit(main())
