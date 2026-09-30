"""The Windows-only game translation units must parse on a Linux workstation.

`native_gpu.cpp` is compiled only by the Windows game build. A missing include
there cost a full CI round trip once, so the same syntax check is run from the
suite whenever the local toolchain allows it (the check itself skips politely on
hosts without a compiler or Vulkan headers, which is why this test can live in a
cross-platform suite at all).
"""
import subprocess
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
CHECKER = ROOT / 'rex/tools/check_windows_tus.py'


class WindowsSyntaxTests(unittest.TestCase):
    def test_windows_only_translation_units_parse(self):
        completed = subprocess.run([sys.executable, str(CHECKER)], cwd=ROOT,
                                   capture_output=True, text=True)
        report = (completed.stdout + completed.stderr).strip()
        self.assertEqual(completed.returncode, 0,
                         f'windows syntax check failed:\n{report}')
        # A skip is allowed, but it must say so rather than pass silently.
        self.assertTrue(report, 'the syntax check must report what it did')

    def test_the_checker_is_honest_about_needing_a_toolchain(self):
        source = CHECKER.read_text(encoding='utf-8')
        self.assertIn('skipped: no', source,
                      'the checker must name the missing prerequisite')
        self.assertIn('--require', source,
                      'the checker must be able to fail loudly when asked')


if __name__ == '__main__':
    unittest.main()
