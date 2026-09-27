#!/usr/bin/env python3
"""Apply a narrow loader-lifetime fix to the exact pinned ReXGlue SDK source.

The SDK promises process-lifetime plugins, but a function-static vector runs
DynamicLibrary destructors (FreeLibrary) during CRT teardown. Runtime cvar
registries retain std::function callbacks whose code belongs to those DLLs.
Keep the handles alive through all CRT destructors, not just until main returns.
"""
import argparse
from pathlib import Path

BEFORE = """  static std::vector<platform::DynamicLibrary> plugins;
  return plugins;"""
AFTER = """  // Process-lifetime allocation is deliberate. Other runtime registries keep
  // plugin callbacks and may be destroyed after this function's static state.
  // Do not FreeLibrary while those callback managers can still be invoked.
  static auto* const plugins = new std::vector<platform::DynamicLibrary>();
  return *plugins;"""


def apply(root):
    path = Path(root) / "src/system/gpu_plugin_loader.cpp"
    source = path.read_text(encoding="utf-8")
    if AFTER in source:
        return False
    if source.count(BEFORE) != 1:
        raise ValueError("SDK loader differs from pinned source; refusing fuzzy patch")
    path.write_text(source.replace(BEFORE, AFTER), encoding="utf-8")
    return True


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("sdk_source", type=Path)
    args = parser.parse_args()
    print("Patched GPU DLL lifetime" if apply(args.sdk_source) else "GPU DLL lifetime already patched")
