"""Exercise the actual aggregate workflow's report without GitHub credentials."""
import json
import os
from pathlib import Path
import re
import subprocess
import sys
import tempfile
import textwrap
import unittest

ROOT = Path(__file__).resolve().parents[1]
WORKFLOW = ROOT / '.github/workflows/verify-runtime.yml'
SUITES = {'windows', 'kernel', 'gpu', 'vulkan', 'audio', 'cache', 'shader-tools'}


class VerificationReportTests(unittest.TestCase):
    def run_report(self, results):
        match = re.search(r"python3 - <<'PY'\n(.*?)^          PY$", WORKFLOW.read_text(encoding='utf-8'), re.M | re.S)
        self.assertIsNotNone(match)
        script = textwrap.dedent(match.group(1))
        with tempfile.TemporaryDirectory() as directory:
            summary = Path(directory) / 'summary.md'
            env = dict(os.environ, RESULTS=json.dumps(results),
                       GITHUB_SHA='test-revision', GITHUB_STEP_SUMMARY=str(summary))
            result = subprocess.run([sys.executable, '-c', script], env=env,
                                    capture_output=True, text=True, timeout=10)
            return result.returncode, summary.read_text(encoding='utf-8') if summary.exists() else ''

    def test_all_suites_pass(self):
        code, report = self.run_report({name: {'result': 'success'} for name in SUITES})
        self.assertEqual(code, 0)
        self.assertIn('test-revision', report)
        self.assertIn('does not certify game boot', report)
        self.assertIn('revision.txt', report)

    def test_failure_skip_cancel_never_pass(self):
        for suite in SUITES:
            for status in ('failure', 'skipped', 'cancelled'):
                with self.subTest(suite=suite, status=status):
                    results = {name: {'result': 'success'} for name in SUITES}
                    results[suite]['result'] = status
                    code, report = self.run_report(results)
                    self.assertNotEqual(code, 0)
                    self.assertIn(f'| {suite} | {status} |', report)
                    if suite == 'windows':
                        self.assertIn('no verified executable is claimed', report)
                        self.assertNotIn('are in this run', report)

    def test_missing_suite_never_passes(self):
        code, _ = self.run_report({})
        self.assertNotEqual(code, 0)
        for missing in SUITES:
            code, _ = self.run_report({name: {'result': 'success'} for name in SUITES - {missing}})
            self.assertNotEqual(code, 0)


if __name__ == '__main__':
    unittest.main()
