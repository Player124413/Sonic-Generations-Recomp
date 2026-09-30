import importlib.util
from pathlib import Path
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location('recovery', ROOT / 'rex/tools/recover_guest_entries.py')
recovery = importlib.util.module_from_spec(spec)
spec.loader.exec_module(recovery)


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
            mapping = recovery.mappings((output / 'sonicgenerations_init.cpp').read_text())
            self.assertEqual(mapping, recovery.mappings((output / 'sonicgenerations_register.cpp').read_text()))
            self.assertEqual(mapping[0x8310BEE0], 'sonic_recovered_8310BEE0')
            cpp = (output / 'guest_entry_recovery.cpp').read_text()
            self.assertIn('0x3863000C, 0x4BFE7BF4', cpp)
            self.assertLess(cpp.index('CheckCode(base,'), cpp.index('ctx.r3.u64 ='))
            self.assertIn('throw std::runtime_error', cpp)
            self.assertNotIn('ctx.lr =', cpp)
            tests = (output / 'guest_entry_recovery_tests.cpp').read_text()
            # SDK path resolution during startup requires the wide CRT entry point.
            self.assertIn('int wmain()', tests)
            self.assertIn('guest-entry-recovery: begin', tests)


if __name__ == '__main__':
    unittest.main()
