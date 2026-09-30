"""The Windows-only game translation units must check out on a Linux workstation.

`native_gpu.cpp` is compiled only by the Windows game build, and it has already
cost two CI round trips: a missing include (a compile error) and an anonymous
namespace closed too early, which no compiler complains about and only the
Windows linker refuses. Both are checked here, from a suite that runs everywhere:
the check itself skips politely when the host has no compiler, no `nm` or no
Vulkan headers.
"""
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
CHECKER = ROOT / 'rex/tools/check_windows_tus.py'
BUGGY_UNIT = """namespace { void Helper(); }
void Use() { Helper(); }
"""


def run_checker(*arguments: str) -> subprocess.CompletedProcess:
    return subprocess.run([sys.executable, str(CHECKER), *arguments], cwd=ROOT,
                          capture_output=True, text=True)


class WindowsSyntaxTests(unittest.TestCase):
    def test_windows_only_translation_units_check_out(self):
        completed = run_checker()
        report = (completed.stdout + completed.stderr).strip()
        self.assertEqual(completed.returncode, 0, f'check failed:\n{report}')
        # A skip is allowed, but it must say so rather than pass silently.
        self.assertTrue(report, 'the check must report what it did')

    def test_the_checker_nails_a_broken_unit(self):
        probe = run_checker()
        if 'skipped' in (probe.stdout + probe.stderr):
            self.skipTest('no local toolchain for the Windows-only unit check')
        with tempfile.TemporaryDirectory() as directory:
            unit = Path(directory) / 'buggy.cpp'
            unit.write_text(BUGGY_UNIT, encoding='utf-8')
            completed = run_checker('--require', str(unit))
        report = completed.stdout + completed.stderr
        self.assertEqual(completed.returncode, 1, 'a broken unit must fail the check')
        self.assertIn('anonymous namespace', report)

    def test_the_checker_is_honest_about_needing_a_toolchain(self):
        source = CHECKER.read_text(encoding='utf-8')
        self.assertIn('skipped: no', source,
                      'the checker must name the missing prerequisite')
        self.assertIn('--require', source,
                      'the checker must be able to fail loudly when asked')


if __name__ == '__main__':
    unittest.main()
