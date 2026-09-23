#!/usr/bin/env python3
"""Local, opt-in diagnostic launcher. Never uploads game files or diagnostics."""
import argparse
import datetime
import json
import os
from pathlib import Path
import platform
import subprocess
import time


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("executable", type=Path)
    parser.add_argument("--output", type=Path, default=Path("diagnostics"))
    parser.add_argument("--validation", action="store_true")
    args = parser.parse_args()
    executable = args.executable.resolve()
    if not executable.is_file():
        parser.error(f"Executable not found: {executable}")
    stamp = datetime.datetime.now(datetime.timezone.utc).strftime("%Y%m%dT%H%M%S.%fZ")
    directory = args.output.resolve() / stamp
    directory.mkdir(parents=True, exist_ok=False)
    env = os.environ.copy()
    settings = {"SONIC_RENDER_BACKEND": "vulkan", "SONIC_VULKAN_DIRECT_DRAW": "1",
                "SONIC_VULKAN_VALIDATION": "1" if args.validation else "0"}
    env.update(settings)
    report = {"started_utc": stamp, "platform": platform.platform(),
              "machine": platform.machine(), "executable": str(executable),
              "settings": settings, "gameplay_verified": False}
    revision = executable.parent / "revision.txt"
    if revision.is_file():
        report["revision"] = revision.read_text(encoding="utf-8").strip()
    started = time.monotonic()
    print(f"Experimental renderer; not a complete game renderer. Logs: {directory}", flush=True)
    result = 1
    try:
        with (directory / "runtime.log").open("wb") as log:
            process = subprocess.Popen([str(executable)], cwd=executable.parent,
                                       env=env, stdout=log, stderr=subprocess.STDOUT)
            try:
                result = process.wait()
            except KeyboardInterrupt:
                report["interrupted"] = True
                if process.poll() is None:
                    process.terminate()
                try:
                    result = process.wait(timeout=10)
                except subprocess.TimeoutExpired:
                    process.kill()
                    result = process.wait()
    except OSError as error:
        report["launch_error"] = str(error)
    finally:
        report["returncode"] = result
        report["elapsed_seconds"] = round(time.monotonic() - started, 3)
        (directory / "report.json").write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(f"Exit status: {result}. Report: {directory / 'report.json'}")
    return result if 0 <= result <= 255 else 1


if __name__ == "__main__":
    raise SystemExit(main())
