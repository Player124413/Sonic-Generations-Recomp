import json
from pathlib import Path
import re
import unittest

ROOT = Path(__file__).resolve().parents[1]


class ObservedTitleImportsTests(unittest.TestCase):
    def test_user_report_inventory(self):
        fixture = json.loads((ROOT / 'tests/fixtures/observed_title_imports.json').read_text())
        entries = fixture['imports']
        self.assertEqual(fixture['xex_size'], 8773632)
        self.assertEqual(fixture['xxh64'], 'BC88D51CE0755637')
        self.assertFalse(fixture['cryptographic_identity_verified'])
        self.assertEqual(len(entries), 231)
        self.assertEqual(len({e['iat'] for e in entries}), 231)
        variables = {int(e['ordinal'], 16): e['name'] for e in entries if e['kind'] == 'variable'}
        self.assertEqual(variables, {
            0x1C0: 'VdGpuClockInMHz', 0x1C1: 'VdHSIOCalibrationLock', 0x158: 'XboxKrnlVersion',
            0x266: 'KeCertMonitorData', 0x1BF: 'VdGlobalXamDevice', 0x1BE: 'VdGlobalDevice',
            0x156: 'XboxHardwareInfo', 0x193: 'XexExecutableModuleHandle', 0x1AE: 'ExLoadedCommandLine',
            0x1B: 'ExThreadObjectType', 0xAD: 'KeTimeStampBundle', 0x59: 'KeDebugMonitorData'})
        compiled = re.findall(r'SONIC_IMPORT\("([^"]+)", (0x\w+), (0x\w+), (\w+)\)',
                              (ROOT / 'SonicGenerationsRecomp/kernel/title_function_imports.inc').read_text())
        self.assertEqual({(e['library'], e['ordinal'], e['thunk'], e['name']) for e in entries if e['kind'] == 'function'}, set(compiled))
        inc = (ROOT / 'tests/fixtures/observed_title_imports.inc').read_text()
        rows = re.findall(r'^TITLE_IMPORT\(.*\)$', inc, re.M)
        expected = [f'TITLE_IMPORT("{e["library"]}", {e["ordinal"]}, {str(e["kind"] == "variable").lower()}, {e["iat"]}, {e["thunk"] or "0"}, {e["name"]})' for e in entries]
        self.assertEqual(rows, expected)
        for library, base, count in [('xam.xex', 0x82000400, 63), ('xboxkrnl.exe', 0x82000500, 168)]:
            self.assertEqual([int(e['iat'], 16) for e in entries if e['library'] == library], list(range(base, base + count * 4, 4)))


if __name__ == '__main__':
    unittest.main()
