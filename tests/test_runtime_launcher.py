import json
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest

SCRIPT = Path(__file__).resolve().parents[1] / 'scripts' / 'test_runtime.py'


@unittest.skipIf(sys.platform == 'win32', 'POSIX executable fixture')
class LauncherTests(unittest.TestCase):
    def test_environment_log_and_exit(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            executable = root / 'fake-runtime'
            executable.write_text('#!/bin/sh\nprintf "%s %s %s\\n" "$SONIC_RENDER_BACKEND" "$SONIC_VULKAN_DIRECT_DRAW" "$SONIC_VULKAN_VALIDATION"\necho diagnostic >&2\nexit 7\n')
            executable.chmod(0o755)
            result = subprocess.run([sys.executable, str(SCRIPT), str(executable), '--output', str(root / 'reports')], capture_output=True)
            self.assertEqual(result.returncode, 7)
            report_dir, = (root / 'reports').iterdir()
            self.assertEqual((report_dir / 'runtime.log').read_text(encoding='utf-8'), 'vulkan 1 0\ndiagnostic\n')
            report = json.loads((report_dir / 'report.json').read_text(encoding='utf-8'))
            self.assertEqual(report['returncode'], 7)
            self.assertFalse(report['gameplay_verified'])

    def test_launch_error_is_reported(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            executable = root / 'not-executable'
            executable.write_text('not a program')
            result = subprocess.run([sys.executable, str(SCRIPT), str(executable), '--output', str(root / 'reports')], capture_output=True)
            self.assertNotEqual(result.returncode, 0)
            report_dir, = (root / 'reports').iterdir()
            self.assertIn('launch_error', json.loads((report_dir / 'report.json').read_text(encoding='utf-8')))


if __name__ == '__main__':
    unittest.main()
