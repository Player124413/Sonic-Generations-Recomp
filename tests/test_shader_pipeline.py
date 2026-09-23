from pathlib import Path
import struct
import json
from types import SimpleNamespace
import sys
import tempfile
import unittest
from unittest.mock import patch
import zipfile

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
import shader_pipeline as pipeline


class ShaderPipelineTests(unittest.TestCase):
    def archives(self, entries):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / 'shaders.zip'
            with zipfile.ZipFile(path, 'w') as z:
                for name, data in entries:
                    z.writestr(name, data)
            return list(pipeline.archives(path))

    def test_url_input_and_secret_fallback(self):
        with patch.dict('os.environ', {'ZIP_URL_INPUT': ' https://example.com/input.zip ', 'SHADERS_ZIP_URL': 'https://example.com/secret.zip'}, clear=True):
            self.assertEqual(pipeline.source_url(), 'https://example.com/input.zip')
        with patch.dict('os.environ', {'ZIP_URL_INPUT': ' ', 'SHADERS_ZIP_URL': 'https://example.com/secret.zip'}, clear=True):
            self.assertEqual(pipeline.source_url(), 'https://example.com/secret.zip')
        with patch.dict('os.environ', {'ZIP_URL_INPUT': 'http://example.com/file.zip'}, clear=True):
            with self.assertRaises(ValueError):
                pipeline.source_url()

    def test_missing_boolean_registers(self):
        text = 'cbuffer Constants : register(b0, space4) { uint g_Booleans; }; if (b129 == 0) {} if (b128 != 0) {}'
        self.assertEqual(pipeline.missing_boolean_registers(text), ['b128', 'b129'])
        self.assertEqual(pipeline.missing_boolean_registers('bool b128 = true; if (b128) {} // b129'), [])
        self.assertEqual(pipeline.missing_boolean_registers('#define b130 1\nif (b130) {} /* b129 */'), [])
        self.assertEqual(pipeline.missing_boolean_registers('cbuffer X : register(b0) {}; if (b0) {}'), ['b0'])

    def test_forced_boolean_branches(self):
        text = """if (true) // b160 is outside of the supported packed boolean range
        if (false) // b32 is outside of the supported packed boolean range
        if (true) // b160 is outside of the supported packed boolean range
        if ((g_Booleans & (1u << 16)) != 0) // b128 (boolean constant not in reflection data)
        if (false) {} // unrelated constant branch
        """
        self.assertEqual(pipeline.forced_boolean_registers(text), ['b32', 'b160'])
        self.assertEqual(pipeline.forced_boolean_registers('if (true) {}'), [])

    def test_compiler_report_requires_clean_complete_vulkan_result(self):
        good = dict(totalShaders=2, successfulShaders=2, failedShaders=0,
                    shadersWithWarnings=0, graphicsApi='vulkan', warnings=[], shaders=[])
        pipeline.validate_compiler_report(good, 2)
        for field, value in [('totalShaders', 1), ('successfulShaders', 1),
                             ('failedShaders', 1), ('failedShaders', False),
                             ('shadersWithWarnings', 1), ('graphicsApi', 'both'),
                             ('warnings', ['unsupported']),
                             ('shaders', [{'status': 'warning'}]), ('shaders', None)]:
            with self.subTest(field=field, value=value), self.assertRaises(ValueError):
                pipeline.validate_compiler_report(dict(good, **{field: value}), 2)
        for report in ({}, [], None):
            with self.assertRaises(ValueError):
                pipeline.validate_compiler_report(report, 2)

    def test_pipeline_rejects_semantic_warnings_and_preserves_diagnostics(self):
        for mode in ('forced_hlsl', 'report_warning', 'invalid_cache', 'clean'):
            with self.subTest(mode=mode), tempfile.TemporaryDirectory() as tmp:
                root = Path(tmp)
                source, exe, header = (root / name for name in ('input.zip', 'compiler', 'common.h'))
                for path in (source, exe, header):
                    path.write_bytes(b'test')
                args = SimpleNamespace(sha256='', zip=source, work=root/'work', xenos=exe, header=header)
                calls = []

                def compile_mock(command, **kwargs):
                    calls.append(command)
                    self.assertEqual(command[command.index('--api') + 1], 'vulkan')
                    target = Path(command[2])
                    if target.suffix == '.hlsl':
                        target.write_text('if (true) // b160 is outside of the supported packed boolean range'
                                          if mode == 'forced_hlsl' else 'void shaderMain() {}')
                    else:
                        target.write_text('invalid' if mode == 'invalid_cache' else
                                          'g_shaderCacheEntryCount = 1; g_spirvCacheDecompressedSize = 100;')
                        report = dict(totalShaders=1, successfulShaders=1, failedShaders=0,
                                      shadersWithWarnings=int(mode == 'report_warning'),
                                      graphicsApi='vulkan', warnings=[], shaders=[])
                        Path(command[command.index('--report') + 1]).write_text(json.dumps(report))

                with patch.object(pipeline, 'archives', return_value=[b'archive']), \
                     patch.object(pipeline, 'containers', return_value=iter([b'container'])), \
                     patch.object(pipeline.subprocess, 'run', side_effect=compile_mock):
                    if mode == 'clean':
                        pipeline.run(args)
                    else:
                        with self.assertRaises(ValueError):
                            pipeline.run(args)
                cache = args.work/'result/shader_cache.experimental.cpp'
                self.assertEqual(cache.exists(), mode == 'clean')
                self.assertEqual(len(calls), 1 if mode == 'forced_hlsl' else 2)
                if mode in ('report_warning', 'invalid_cache'):
                    self.assertTrue((args.work/'diagnostics/compiler-report.json').is_file())
                elif mode == 'forced_hlsl':
                    diagnostic = json.loads((args.work/'diagnostics/report.json').read_text())
                    self.assertEqual(diagnostic['forced_boolean_registers'], ['b160'])

    def test_optional_checksum(self):
        self.assertEqual(pipeline.normalize_sha256('  '), '')
        self.assertEqual(pipeline.normalize_sha256(' A' + 'B' * 63 + '\n'), 'a' + 'b' * 63)
        pipeline.verify_digest('a' * 64, '')
        pipeline.verify_digest('a' * 64, 'a' * 64)
        with self.assertRaises(ValueError):
            pipeline.verify_digest('a' * 64, 'b' * 64)
        for value in ('https://example.com/file.zip', 'abc', 'g' * 64):
            with self.subTest(value=value), self.assertRaises(ValueError):
                pipeline.normalize_sha256(value)

    def test_split_order_and_index(self):
        self.assertEqual(self.archives([('shader.ar.01', b'b'), ('shader.arl', b'index'), ('shader.ar.00', b'a')]), [b'ab'])

    def test_unsplit(self):
        self.assertEqual(self.archives([('shader.ar', b'a')]), [b'a'])

    def test_missing_part(self):
        with self.assertRaises(ValueError):
            self.archives([('shader.ar.01', b'b')])

    def test_mixed_parts(self):
        with self.assertRaises(ValueError):
            self.archives([('shader.ar', b'a'), ('shader.ar.00', b'b')])

    def test_unsafe_paths(self):
        for name in ('../shader.ar', '/shader.ar', 'C:\\shader.ar'):
            with self.subTest(name=name), self.assertRaises(ValueError):
                self.archives([(name, b'x')])

    def test_duplicates(self):
        with self.assertRaises(ValueError):
            self.archives([('shader.ar', b'a'), ('SHADER.ar', b'b')])

    def test_no_archives(self):
        with self.assertRaises(ValueError):
            self.archives([('shader.arl', b'x')])

    def test_size_limit(self):
        with patch.object(pipeline, 'MAX_BYTES', 2), self.assertRaises(ValueError):
            self.archives([('shader.ar', b'123')])

    def test_container_scan(self):
        blob = struct.pack('>9I', 0x102A1100, 36, 4, 0, 0, 0, 0, 0, 0) + b'code'
        self.assertEqual(list(pipeline.containers(b'head' + blob)), [blob])

    def test_truncated_container(self):
        blob = struct.pack('>9I', 0x102A1100, 36, 100, 0, 0, 0, 0, 0, 0)
        with self.assertRaises(ValueError):
            list(pipeline.containers(blob))

    def test_bad_metadata(self):
        blob = struct.pack('>9I', 0x102A1100, 36, 0, 0, 500, 0, 0, 0, 0)
        with self.assertRaises(ValueError):
            list(pipeline.containers(blob))

    def test_empty_scan(self):
        self.assertEqual(list(pipeline.containers(b'unknown' * 12)), [])

    def test_cache_validation(self):
        good = 'g_shaderCacheEntryCount = 2; g_dxilCacheDecompressedSize = 42; g_spirvCacheDecompressedSize = 43;'
        pipeline.validate_cache(good, 2)
        for text, count in [(good, 3), ('g_shaderCacheEntryCount = 0;', 0), (good.replace('42', '0'), 2)]:
            with self.assertRaises(ValueError):
                pipeline.validate_cache(text, count)

    def test_vulkan_only_cache_validation(self):
        good = 'g_shaderCacheEntryCount = 2; g_spirvCacheDecompressedSize = 43;'
        pipeline.validate_cache(good, 2, api='vulkan')
        for text in (good.replace('43', '0'), good.replace('2;', '1;')):
            with self.assertRaises(ValueError):
                pipeline.validate_cache(text, 2, api='vulkan')
        with self.assertRaises(ValueError):
            pipeline.validate_cache(good, 2)  # both still requires DXIL

    def test_download_error_does_not_leak_url(self):
        with patch.dict('os.environ', {'SHADERS_ZIP_URL': 'https://example.com/SECRET'}), patch('urllib.request.build_opener', side_effect=ValueError('SECRET')):
            with self.assertRaises(ValueError) as error:
                pipeline.download(Path('unused'))
            self.assertNotIn('SECRET', str(error.exception))


if __name__ == '__main__':
    unittest.main()
