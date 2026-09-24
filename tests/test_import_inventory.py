import importlib.util
from pathlib import Path
import unittest

spec = importlib.util.spec_from_file_location('audit', Path(__file__).resolve().parents[1] / 'scripts/audit_import_inventory.py')
audit = importlib.util.module_from_spec(spec)
spec.loader.exec_module(audit)


class ImportInventoryTests(unittest.TestCase):
    def setUp(self):
        self.mapping = '{ 0x82000000, __imp__Function }'
        self.manifest = 'SONIC_IMPORT("xboxkrnl.exe", 0x3, 0x82000000, Function)'
        self.tables = {'xboxkrnl.exe': {3: ('Function', 'kFunction')}}
        self.link = '&__imp__Function'

    def check(self):
        return audit.validate(self.mapping, self.manifest, self.link, self.tables)

    def test_valid(self):
        self.assertEqual(len(self.check()), 1)

    def test_missing_duplicate_extra_or_wrong_address(self):
        for manifest in ['', self.manifest * 2, self.manifest.replace('82000000', '82000004')]:
            with self.subTest(manifest=manifest), self.assertRaises(ValueError):
                audit.validate(self.mapping, manifest, self.link, self.tables)

    def test_wrong_kind_ordinal_module_and_name(self):
        for wrong in [('Function', 'kVariable'), ('OtherFunction', 'kFunction')]:
            self.tables['xboxkrnl.exe'][3] = wrong
            with self.assertRaises(ValueError):
                self.check()
        for token, replacement in [('xboxkrnl.exe', 'xam.xex'), ('0x3,', '0x4,')]:
            with self.assertRaises(ValueError):
                audit.validate(self.mapping, self.manifest.replace(token, replacement), self.link,
                               {'xboxkrnl.exe': {3: ('Function', 'kFunction')}})

    def test_missing_link_reference(self):
        self.link = ''
        with self.assertRaises(ValueError):
            self.check()

    def test_body_braces_and_markers_do_not_leak_from_next_function(self):
        source = 'void f() { if (true) { log("}"); } /* } */ } void g() { log("STUB"); }'
        self.assertNotIn('STUB', audit.function_body(source, 'f'))
        self.assertIn('STUB', audit.function_body(source, 'g'))
        self.assertIsNone(audit.function_body(source, 'absent'))


if __name__ == '__main__':
    unittest.main()
