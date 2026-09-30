"""Guards every test that reads repository text against the Windows default.

Reading a file without an explicit encoding decodes it with the process ANSI
codepage, which on a Windows runner is cp1252. The README and the GPU plan are
written in Russian, so a test that forgets the encoding fails there while passing
on Linux -- exactly what happened once. The rule is therefore pinned here instead
of being remembered.
"""
import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
TEST_DIRECTORIES = (ROOT / 'rex/tests', ROOT / 'tests')
READ_TEXT = re.compile(r'read_text\(([^)]*)\)')
# Files with non-ASCII content that the suites read by name.
RUSSIAN_DOCUMENTS = ('rex/README.md', 'docs/OWN_GPU_PLAN.md')


class TextEncodingPolicyTests(unittest.TestCase):
    def test_every_text_read_declares_its_encoding(self):
        offenders = []
        for directory in TEST_DIRECTORIES:
            for path in sorted(directory.glob('*.py')):
                # This module carries the pattern itself, so it is not a subject.
                if path.name == Path(__file__).name:
                    continue
                text = path.read_text(encoding='utf-8')
                for number, line in enumerate(text.splitlines(), 1):
                    for match in READ_TEXT.finditer(line):
                        if 'encoding' not in match.group(1):
                            offenders.append(f'{path.relative_to(ROOT)}:{number}')
        self.assertEqual(offenders, [],
                         'read_text() without encoding= decodes as cp1252 on Windows')

    def test_documents_with_non_ascii_text_are_utf8_without_bom(self):
        for relative in RUSSIAN_DOCUMENTS:
            data = (ROOT / relative).read_bytes()
            try:
                data.decode('utf-8')
            except UnicodeDecodeError as error:
                self.fail(f'{relative} is not valid UTF-8: {error}')
            self.assertFalse(data.startswith(b'\xef\xbb\xbf'),
                             f'{relative} must not start with a UTF-8 BOM')
            self.assertTrue(any(byte > 0x7F for byte in data),
                            f'{relative} is expected to carry non-ASCII text')


if __name__ == '__main__':
    unittest.main()
