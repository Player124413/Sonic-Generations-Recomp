import importlib.util
import json
import re
import shutil
from pathlib import Path
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location('recovery', ROOT / 'rex/tools/recover_guest_entries.py')
recovery = importlib.util.module_from_spec(spec)
spec.loader.exec_module(recovery)


def _load(name, relative):
    spec = importlib.util.spec_from_file_location(name, ROOT / relative)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


audit = _load('validate_guest_entry_audit', 'rex/tools/validate_guest_entry_audit.py')


class RecoveryTests(unittest.TestCase):
    def test_reported_entry_encoding(self):
        self.assertEqual(recovery.encode('addi r3,r3,12', 0x8310BEE0)[0], 0x3863000C)
        self.assertEqual(recovery.encode('b 0x830f3ad8', 0x8310BEE4)[0], 0x4BFE7BF4)

    def test_register_and_immediate_semantics(self):
        self.assertEqual(recovery.encode('mr r4,r3', 0)[0], 0x7C641B78)
        word, statement = recovery.encode('li r3,-1', 0)
        self.assertEqual(word, 0x3860FFFF)
        self.assertNotIn('ctx.r0', statement)
        self.assertIn('uint64_t(int64_t(-1))', statement)
        self.assertIn('.u64', recovery.encode('addi r3,r3,12', 0)[1])

    def test_reject_unsupported_instructions(self):
        for op in ('bl 0x10', 'blr', 'lwz r3,0(r3)', 'addi r32,r3,12', 'addi r3,r3,32768', 'b 0x3', 'b 0x80000000'):
            with self.subTest(op=op), self.assertRaises(ValueError):
                recovery.encode(op, 0)

    def test_full_legacy_audit_not_a_single_address_patch(self):
        # Derive possible callees from the complete checked-in legacy inventory.
        # With only these callees present, this also exercises conservative discovery.
        registered = {0x830F3AD8: 'sub_830F3AD8', 0x830E4920: 'sub_830E4920'}
        thunks, unresolved, padding = recovery.discover(ROOT / 'ppc', registered)
        self.assertIn(0x8310BEE0, {t['address'] for t in thunks})
        self.assertIn(0x8310C868, {t['address'] for t in thunks})
        self.assertGreater(padding, 10000)
        self.assertTrue(unresolved)

    def test_audit_report_is_validated_not_just_counted(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            legacy = root / 'ppc'
            legacy.mkdir()
            shutil.copy(ROOT / 'ppc/ppc_recomp.372.cpp', legacy / 'ppc_recomp.372.cpp')
            shutil.copy(ROOT / 'ppc/ppc_func_mapping.cpp', legacy / 'ppc_func_mapping.cpp')
            # Emulate the external inventory: same code, two entries not exported,
            # which is exactly the gap that crashed the game at 0x8310BEE0.
            registered = dict(recovery.mappings(
                (ROOT / 'ppc/ppc_func_mapping.cpp').read_text(encoding='utf-8')))
            missing = {0x8310BEE0, 0x8310C868}
            self.assertTrue(missing <= set(registered))
            for address in missing:
                registered.pop(address)
            found, unresolved, padding = recovery.discover(legacy, registered)
            self.assertTrue(found)
            report = {'recovered': found, 'excluded_padding': padding or 1, 'unresolved': unresolved}
            self.assertEqual(audit.validate(report, legacy), [])
            for tamper in (
                lambda r: r['recovered'].pop(0),
                lambda r: r['recovered'].append(dict(r['recovered'][0])),
                lambda r: r['recovered'][0].update(words=[0]),
                lambda r: r['recovered'][0].update(ops=['blr ']),
                lambda r: r['recovered'][0].update(symbol=''),
                lambda r: r.update(excluded_padding=0),
            ):
                broken = json.loads(json.dumps(report))
                tamper(broken)
                self.assertTrue(audit.validate(broken, legacy))

    def test_no_override_no_unknown_callee_no_mid_branch(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            root.joinpath('ppc_recomp.0.cpp').write_text('''
PPC_FUNC_IMPL(__imp__sub_00001000) {
 // addi r3,r3,12
 // b 0x2000
}
PPC_FUNC_IMPL(__imp__sub_00001008) {
 // b 0x2000
 // addi r3,r3,12
 // b 0x2000
}
PPC_FUNC_IMPL(__imp__sub_00001014) {
 // addi r3,r3,12
 // b 0x3000
}
''')
            found, remaining, _ = recovery.discover(root, {0x2000: 'callee'})
            self.assertEqual([t['address'] for t in found], [0x1000])
            self.assertEqual(len(remaining), 2)
            self.assertFalse(recovery.discover(root, {0x2000: 'callee', 0x1000: 'existing'})[0])

    def test_generated_maps_and_live_instruction_guards(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            generated = root / 'generated'
            generated.mkdir()
            include = '#include "sonicgenerations_init.h"\n'
            generated.joinpath('sonicgenerations_init.cpp').write_text(include + 'PPCFuncMapping PPCFuncMappings[] = {\n{ 0x830F3AD8, sub_830F3AD8 },\n{ 0x83FFFFFC, end_marker },\n{ 0, nullptr }\n};')
            generated.joinpath('sonicgenerations_register.cpp').write_text(include + 'void sonicgenerations_RegisterFunctions(rex::runtime::IModuleRegistrar* registrar) {\nregistrar->SetFunction(0x830F3AD8, sub_830F3AD8);\nregistrar->SetFunction(0x83FFFFFC, end_marker);\n}')
            output = root / 'output'
            recovery.emit(ROOT / 'ppc', generated, output)
            mapping = recovery.mappings((output / 'sonicgenerations_init.cpp').read_text(encoding='utf-8'))
            self.assertEqual(mapping, recovery.mappings((output / 'sonicgenerations_register.cpp').read_text(encoding='utf-8')))
            self.assertEqual(mapping[0x8310BEE0], 'sonic_recovered_8310BEE0')
            cpp = (output / 'guest_entry_recovery.cpp').read_text(encoding='utf-8')
            self.assertIn('0x3863000C, 0x4BFE7BF4', cpp)
            self.assertLess(cpp.index('CheckCode(base,'), cpp.index('ctx.r3.u64 ='))
            # A throw inside an extern "C" wrapper would call terminate() under /EHsc.
            self.assertNotIn('throw', cpp)
            self.assertIn('std::abort();', cpp)
            self.assertIn('if (!CheckCode(', cpp)
            self.assertNotIn('ctx.lr =', cpp)
            tests = (output / 'guest_entry_recovery_tests.cpp').read_text(encoding='utf-8')
            # SDK path resolution during startup requires the wide CRT entry point.
            self.assertIn('int wmain()', tests)
            self.assertIn('guest-entry-recovery: begin', tests)
            self.assertNotIn('catch', tests)
            self.assertIn('SetGuestEntryMismatchHandler(nullptr)', tests)
            # Each corruption must flip the low byte, matching the "word ^ 1" expectation.
            flips = re.findall(r'base\[(0x[0-9A-F]+)\] \^= 1;', tests)
            self.assertTrue(flips)
            self.assertTrue(all(int(address, 16) % 4 == 3 for address in flips))
            for expected, actual in re.findall(
                    r'mismatch_expected != 0x([0-9A-F]{8}) \|\| mismatch_actual != 0x([0-9A-F]{8})', tests):
                self.assertEqual(int(expected, 16) ^ 1, int(actual, 16))


if __name__ == '__main__':
    unittest.main()
