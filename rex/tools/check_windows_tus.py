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
unit.

Two toolchains are used, best first:

* a real Windows target (`zig c++ -target x86_64-windows-gnu`, installed from
  PyPI as `ziglang`): the units are compiled as Windows, against the real Windows
  headers, with the platform defines the CMake target passes. This is what
  catches a branch, a type or an include that only exists on Windows;
* otherwise GCC with the Win32 stubs in `winstub/`: enough for the translation
  units whose Win32 use is small, and the only option on a workstation without a
  cross compiler.

It skips (exit code 0) when no compiler, no `nm` or no Vulkan headers are
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
# Units with branches the preprocessor chooses: the window's presenter builds its
# surface from a Win32 HWND, so checking it without _WIN32 would compile the
# branch the game never uses and would verify nothing about the one it does.
WINDOWS_BRANCH_UNITS = ('rex/src/translate_presenter.cpp',)
# _WIN32 picks the Windows branches; __stdcall is a calling convention the stubs
# cannot express, and the Vulkan headers use it in every function pointer type.
WINDOWS_BRANCH_DEFINES = ('-D_WIN32', '-D__stdcall=', '-DSONIC_VULKAN_HEADLESS=1')
# The unit that creates the Win32 surface. It compiles the platform branch of the
# backend, which exists only when VK_USE_PLATFORM_WIN32_KHR is defined -- exactly
# the branch CI compiles and this check used to skip.
PLATFORM_UNITS = ('SonicGenerationsRecomp/gpu/vulkan_backend.cpp',)
# The rest of the backend's target, compiled with the target's defines but not the
# platform one. A platform define applied to a whole CMake target instead of the
# unit that includes windows.h first is a Windows-only build error, and it is the
# reason this category exists.
TARGET_UNITS = ('SonicGenerationsRecomp/gpu/vulkan_host.cpp',
                'SonicGenerationsRecomp/gpu/vulkan_state.cpp',
                'SonicGenerationsRecomp/gpu/native_frame.cpp')
TARGET_DEFINES = ('-D_WIN32', '-D__stdcall=', '-DSONIC_VULKAN_HEADLESS=1')
PLATFORM_DEFINES = TARGET_DEFINES + ('-DVK_USE_PLATFORM_WIN32_KHR=1',)
# Everything the game host compiles for its own Vulkan path, for the runs where a
# real Windows target compiler is available. Compiled together because that is how
# they are built: a header change that breaks one of them breaks the host build,
# and the whole set is what CI's "link native Vulkan backend" step builds.
WINDOWS_TARGET_UNITS = (
    'rex/src/native_gpu.cpp',
    'rex/src/native_gpu_bridge.cpp',
    'rex/src/gpu_capture.cpp',
    'rex/src/translate_presenter.cpp',
    'SonicGenerationsRecomp/gpu/vulkan_backend.cpp',
    'SonicGenerationsRecomp/gpu/vulkan_host.cpp',
    'SonicGenerationsRecomp/gpu/vulkan_state.cpp',
    'SonicGenerationsRecomp/gpu/native_frame.cpp',
    'SonicGenerationsRecomp/gpu/native_commands.cpp',
    'SonicGenerationsRecomp/gpu/native_resources.cpp',
    'SonicGenerationsRecomp/gpu/resource_conversion.cpp',
    'SonicGenerationsRecomp/gpu/shader_bindings.cpp',
    'SonicGenerationsRecomp/gpu/shader_cache_data.cpp',
    'SonicGenerationsRecomp/gpu/shader_cache_loader.cpp',
)
# Mirrors the game host's own defines: headless (ReXGlue owns the window), the
# Win32 surface branch the backend uses, and the native renderer that the EXE
# defines for its own translation unit.
WINDOWS_TARGET_DEFINES = ('-DSONIC_VULKAN_HEADLESS=1', '-DVK_USE_PLATFORM_WIN32_KHR=1',
                          '-DWIN32_LEAN_AND_MEAN', '-DNOMINMAX',
                          '-DSONIC_REX_NATIVE_RENDERER=1')
# Submodule roots the game host adds to its include path. Their absence is not a
# failure: those units are skipped, and the report says why.
CODEC_SUBDIRECTORIES = ('thirdparty/xxHash', 'thirdparty/zstd/lib', 'thirdparty/smol-v/source')
# Include roots the game build passes: ReXGlue's host sources and the GPU bridge.
INCLUDE_ROOTS = ('rex/src', 'SonicGenerationsRecomp', 'rex/src/gpu')
VULKAN_HEADER_HINTS = ('VULKAN_HEADERS_DIR', 'VULKAN_SDK')
# The presenter unit includes the ReXGlue SDK's own headers (its UI interfaces),
# so this check needs an SDK: an installed prefix or a source checkout, pointed at
# by an environment variable. Without one the check says so and skips, exactly
# like it does without a compiler or Vulkan headers, because the alternative --
# faking the SDK's interfaces -- would verify nothing about the real ones.
SDK_INCLUDE_HINTS = ('REX_SDK_DIR', 'REXSDK_PREFIX', 'REX_SDK_ROOT')
# The SDK's own headers include its dependencies (fmt, spdlog, simde...), which a
# source checkout keeps next to it but does not install into it. Extra roots can be
# passed as a path-separator-separated list; an installed prefix needs none,
# because those dependencies live in the same include directory as the SDK.
EXTRA_INCLUDE_HINTS = ('REX_CHECK_INCLUDES',)
ANONYMOUS_NAMESPACE = 'anonymous namespace'
WINDOWS_TARGET = 'x86_64-windows-gnu'


def find_compiler() -> str | None:
    for candidate in ('g++', 'clang++', 'c++'):
        found = shutil.which(candidate)
        if found:
            return found
    return None


def find_windows_compiler() -> list[str] | None:
    # REX_NO_WINDOWS_TARGET forces the stub path, so the fallback stays exercisable
    # on a workstation that does have a Windows target compiler.
    """A compiler that can target Windows locally, or nothing.

    `REX_NO_WINDOWS_TARGET` in the environment forces the stub fallback.

    Zig is the only one that is both installable from a package index and
    complete enough to compile C++ for Windows (it ships libc++ and the Windows
    headers), so it is looked for first, as a `zig` command and as the `ziglang`
    module from PyPI. Wine's GCC, should anyone have it, is used as a fallback.
    """
    if os.environ.get('REX_NO_WINDOWS_TARGET'):
        return None
    zig = shutil.which('zig')
    if zig:
        return [zig, 'c++', '-target', WINDOWS_TARGET]
    completed = subprocess.run([sys.executable, '-m', 'ziglang', 'version'],
                               capture_output=True, text=True)
    if completed.returncode == 0 and completed.stdout.strip():
        return [sys.executable, '-m', 'ziglang', 'c++', '-target', WINDOWS_TARGET]
    mingw = shutil.which('x86_64-w64-mingw32-g++')
    if mingw:
        return [mingw]
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


def find_sdk_include() -> Path | None:
    for variable in SDK_INCLUDE_HINTS:
        value = os.environ.get(variable)
        if not value:
            continue
        for candidate in (Path(value) / 'include', Path(value)):
            if (candidate / 'rex/ui/presenter.h').exists():
                return candidate
    return None


def find_extra_includes() -> list[Path]:
    roots: list[Path] = []
    for variable in EXTRA_INCLUDE_HINTS:
        value = os.environ.get(variable)
        if not value:
            continue
        for part in value.split(os.pathsep):
            candidate = Path(part)
            if candidate.is_dir():
                roots.append(candidate)
    return roots


def find_codec_includes() -> tuple[list[Path], list[str]]:
    """Include roots for the shader codec submodules, and what is missing."""
    roots: list[Path] = []
    missing: list[str] = []
    for relative in CODEC_SUBDIRECTORIES:
        candidate = ROOT / 'tools/XenosRecomp' / relative
        if candidate.is_dir():
            roots.append(candidate)
        else:
            missing.append(relative)
    return roots, missing


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


def check_unit(unit: str, compiler: list[str], nm: str, vulkan: Path | None, sdk: Path | None,
               defines: tuple[str, ...] = (), extra_includes: list[Path] | None = None,
               stub: bool = True) -> tuple[int, list[str]]:
    path = Path(unit)
    if not path.is_absolute():
        path = ROOT / unit
    with tempfile.TemporaryDirectory() as directory:
        object_path = Path(directory) / 'unit.o'
        # C++23: the SDK's headers use std::byteswap, and the game build compiles
        # with the same standard, so the check has to speak it too.
        command = [*compiler, '-std=c++23', '-c', '-O0', '-o', str(object_path)]
        if stub:
            command += ['-I', str(STUB)]
        command += list(defines)
        if vulkan is not None:
            command += ['-I', str(vulkan)]
        if sdk is not None:
            command += ['-I', str(sdk)]
        for root in extra_includes or []:
            command += ['-I', str(root)]
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


def check_default_set(compiler: str, windows: list[str] | None, nm: str, vulkan: Path | None,
                      sdk: Path | None) -> bool:
    """Check every Windows-only unit with the best toolchain available."""
    failed = False
    extra_includes = find_extra_includes()
    codec_includes, codec_missing = find_codec_includes()
    if windows is not None:
        # The real thing: Windows target, Windows headers, the game's own defines.
        for unit in WINDOWS_TARGET_UNITS:
            needs_codecs = unit.endswith(('shader_bindings.cpp', 'shader_cache_loader.cpp'))
            if needs_codecs and codec_missing:
                print(f'skip {unit} (needs tools/XenosRecomp/{" and ".join(codec_missing)})')
                continue
            code, report = check_unit(unit, windows, nm, vulkan, sdk, WINDOWS_TARGET_DEFINES,
                                      list(extra_includes) + list(codec_includes), stub=False)
            if code == 0:
                print(f'ok   {unit} (built as Windows)')
                continue
            failed = True
            print(f'FAIL {unit} (built as Windows)', file=sys.stderr)
            for line in report:
                print(line, file=sys.stderr)
        return failed
    # No Windows target compiler: the units whose Win32 use is small are still
    # checked with the stubs, and the report says which toolchain did it.
    units = ([('rex/src/native_gpu.cpp', ())]
             + [(unit, WINDOWS_BRANCH_DEFINES) for unit in WINDOWS_BRANCH_UNITS]
             + [(unit, PLATFORM_DEFINES) for unit in PLATFORM_UNITS]
             + [(unit, TARGET_DEFINES) for unit in TARGET_UNITS])
    for unit, defines in units:
        label = ' (Windows branches)' if defines else ''
        code, report = check_unit(unit, [compiler], nm, vulkan, sdk, defines, extra_includes)
        if code == 0:
            print(f'ok   {unit}{label}')
            continue
        failed = True
        print(f'FAIL {unit}', file=sys.stderr)
        for line in report:
            print(line, file=sys.stderr)
    return failed


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('units', nargs='*', default=list(DEFAULT_UNITS))
    parser.add_argument('--require', action='store_true',
                        help='fail instead of skipping when tools are missing')
    arguments = parser.parse_args()

    compiler = find_compiler()
    nm = find_nm()
    vulkan = find_vulkan_include()
    sdk = find_sdk_include()
    missing = []
    if compiler is None and find_windows_compiler() is None:
        missing.append('compiler')
    if nm is None:
        missing.append('nm')
    if vulkan is None:
        missing.append('Vulkan headers (set VULKAN_HEADERS_DIR)')
    if sdk is None and WINDOWS_BRANCH_UNITS:
        missing.append('the ReXGlue SDK headers (set REX_SDK_DIR)')
    if missing:
        print(f'windows syntax check skipped: no {", ".join(missing)}', file=sys.stderr)
        return 1 if arguments.require else 0

    windows = find_windows_compiler()
    if not arguments.units or list(arguments.units) == list(DEFAULT_UNITS):
        if windows is None:
            print('note: no Windows target compiler (pip install ziglang); '
                  'falling back to stubs')
        failed = check_default_set(compiler or 'c++', windows, nm, vulkan, sdk)
        return 1 if failed else 0

    failed = False
    for unit in arguments.units:
        code, report = check_unit(unit, [compiler or 'c++'], nm, vulkan, sdk, (),
                                  find_extra_includes())
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
