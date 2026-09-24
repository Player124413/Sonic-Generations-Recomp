"""Offline comparison to observed metadata; does not build or load Rexglue."""
import hashlib
import json
from pathlib import Path
import re
import unittest

ROOT = Path(__file__).resolve().parents[1]
METADATA = json.loads((ROOT / 'tests/fixtures/reference_title_metadata.json').read_text(encoding='utf-8'))


class ReferenceTitleMetadataTests(unittest.TestCase):
    def test_image_layout(self):
        config = (ROOT / 'ppc/ppc_config.h').read_text(encoding='utf-8')
        for name, expected in METADATA['image'].items():
            found = re.search(r'#define PPC_' + name + r'\s+(0x[0-9A-Fa-f]+)', config)
            self.assertIsNotNone(found, name)
            self.assertEqual(int(found[1], 16), int(expected, 16), name)

    def test_entire_named_import_mapping(self):
        source = (ROOT / 'ppc/ppc_func_mapping.cpp').read_text(encoding='utf-8')
        entries = sorted((int(a, 16), n) for a, n in
                         re.findall(r'\{\s*(0x\w+),\s*(__imp__\w+)\s*\}', source))
        self.assertEqual(len(entries), METADATA['function_import_count'])
        canonical = ''.join(f'{address:08X} {name}\n' for address, name in entries)
        self.assertEqual(hashlib.sha256(canonical.encode()).hexdigest(), METADATA['function_import_sha256'])

    def test_reported_landings_have_in_function_branches(self):
        wanted = {f'{int(a, 16):08X}' for a in METADATA['forced_landings']}
        self.assertEqual(len(wanted), 22)
        covered = set()
        for path in (ROOT / 'ppc').glob('ppc_recomp.*.cpp'):
            source = path.read_text(encoding='utf-8')
            if not any(f'loc_{address}:' in source for address in wanted):
                continue
            # Restrict checks to the same generated function: an unrelated label
            # or standalone subroutine at that address must not satisfy the test.
            for body in re.split(r'PPC_FUNC_IMPL\(\w+\)\s*\{', source)[1:]:
                for address in wanted:
                    if f'loc_{address}:' in body and re.search(r'goto loc_' + address + r'\b', body):
                        covered.add(address)
        self.assertEqual(covered, wanted, f'Missing in-function branch targets: {wanted - covered}')


if __name__ == '__main__':
    unittest.main()
