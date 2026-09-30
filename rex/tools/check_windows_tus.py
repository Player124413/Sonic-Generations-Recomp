#!/usr/bin/env python3
"""Check the Windows-only translation units away from Windows.

The contract build on Linux never compiles the game's Windows-only sources, so
their mistakes stay invisible until a Windows runner gets far enough to try. Two
such mistakes already cost a full CI round trip each:

* `native_gpu.cpp` used the host-policy parsers without including them (a compile
  error, caught by compiling the unit at all);
* the same file closed its anonymous namespace early, so `WriteStatus()` was
  declared internal and defined externally -- no compile error, only
  `lld-link: undefined symbol` on Windows.

The second kind is the reason this tool compiles to an object file instead of
stopping at `-fsyntax-only`: any undefined symbol that belongs to an anonymous
namespace is a bug by construction, because that namespace is this translation
unit. It skips (exit code 0) when no compiler, no `nm` or no Vulkan headers are
available, so it can run on any host.
"""
from __future__ import annotations

import argparse
import os
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
STUB = Path(__file__).resolve().parent / 'winstub'

# Translation units that only the Windows game build compiles.
DEFAULT_UNITS = ('rex/src/native_gpu.cpp',)
# Include roots the game build passes: ReXGlue's host sources and the GPU bridge.
INCLUDE_ROOTS = ('rex/src', 'SonicGenerationsRecomp', 'rex/src/gpu')
VULKAN_HEADER_HINTS = ('VULKAN_HEADERS_DIR', 'VULKAN_SDK')
ANONYMOUS_NAMESPACE = 'anonymous namespace'


def find_compiler() -> str | None:
    for candidate in ('g++', 'clang++', 'c++'):
        found = shutil.which(candidate)
        if found:
            return found
    return None


def find_nm() -> str | None:
    for candidate in ('nm', 'llvm-nm'):
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


def undefined_internal_symbols(nm: str, object_path: Path) -> list[str]:
    completed = subprocess.run([nm, '-C', '-u', str(object_path)],
                               capture_output=True, text=True)
    if completed.returncode != 0:
        return []
    offenders = []
    for line in completed.stdout.splitlines():
        if ANONYMOUS_NAMESPACE in line and ' U ' in f' {line.strip().split(" ", 1)[0]} ':
            offenders.append(line.strip())
    return offenders


def check_unit(unit: str, compiler: str, nm: str, vulkan: Path | None) -> tuple[int, list[str]]:
    path = Path(unit)
    if not path.is_absolute():
        path = ROOT / unit
    with tempfile.TemporaryDirectory() as directory:
        object_path = Path(directory) / 'unit.o'
        command = [compiler, '-std=c++20', '-c', '-O0', '-o', str(object_path), '-I', str(STUB)]
        if vulkan is not None:
            command += ['-I', str(vulkan)]
        for relative in INCLUDE_ROOTS:
            command += ['-I', str(ROOT / relative)]
        command.append(str(path))
        completed = subprocess.run(command, cwd=ROOT, capture_output=True, text=True)
        if completed.returncode != 0:
            return completed.returncode, (completed.stderr or completed.stdout).strip().splitlines()
        offenders = undefined_internal_symbols(nm, object_path)
    if offenders:
        report = ['undefined symbol from an anonymous namespace (defined nowhere):']
        report += [f'  {symbol}' for symbol in offenders]
        return 1, report
    return 0, []


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('units', nargs='*', default=list(DEFAULT_UNITS))
    parser.add_argument('--require', action='store_true',
                        help='fail instead of skipping when tools are missing')
    arguments = parser.parse_args()

    compiler = find_compiler()
    nm = find_nm()
    vulkan = find_vulkan_include()
    missing = []
    if compiler is None:
        missing.append('compiler')
    if nm is None:
        missing.append('nm')
    if vulkan is None:
        missing.append('Vulkan headers (set VULKAN_HEADERS_DIR)')
    if missing:
        print(f'windows syntax check skipped: no {", ".join(missing)}', file=sys.stderr)
        return 1 if arguments.require else 0

    failed = False
    for unit in arguments.units:
        code, report = check_unit(unit, compiler, nm, vulkan)
        if code == 0:
            print(f'ok   {unit}')
            continue
        failed = True
        print(f'FAIL {unit}', file=sys.stderr)
        for line in report:
            print(line, file=sys.stderr)
    return 1 if failed else 0


if __name__ == '__main__':
    raise SystemExit(main())
