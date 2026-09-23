"""Independent SPIRV-Tools validation; decoded modules stay in the CI build dir."""
import concurrent.futures
from pathlib import Path
import subprocess
import sys

def validate(path):
    run = subprocess.run(['spirv-val', '--target-env', 'vulkan1.2',
                          '--scalar-block-layout', str(path)], capture_output=True, text=True, timeout=30)
    return path.name, run.returncode, run.stderr

paths = sorted(Path(sys.argv[1]).glob('*.spv'))
if not paths:
    raise SystemExit('No modules to validate')
failed = 0
with concurrent.futures.ThreadPoolExecutor(max_workers=4) as pool:
    for name, code, error in pool.map(validate, paths):
        if code:
            failed += 1
            if failed <= 20:
                print(name, error[:4000], file=sys.stderr)
print(f'SPIRV-Tools: {len(paths)-failed}/{len(paths)} modules passed Vulkan 1.2 + scalar layout validation')
raise SystemExit(bool(failed))
