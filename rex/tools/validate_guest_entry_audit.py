"""Validate a guest-entry audit report without trusting the generating run.

The report is produced during configuration, so a silent change in the inventory
or in the generator would otherwise only be visible as a smaller number in an
artifact nobody reads. This checks the report invariants and re-encodes every
recorded instruction from the recorded assembly.
"""
import argparse
import importlib.util
import json
from pathlib import Path

_spec = importlib.util.spec_from_file_location(
    'recover_guest_entries', Path(__file__).resolve().parent / 'recover_guest_entries.py')
_recovery = importlib.util.module_from_spec(_spec)
_spec.loader.exec_module(_recovery)


def validate(report, legacy_root):
    errors = []
    recovered = report['recovered']
    if not recovered:
        errors.append('no recovered entries')
    addresses = [entry['address'] for entry in recovered]
    if addresses != sorted(addresses) or len(set(addresses)) != len(addresses):
        errors.append('recovered addresses are not unique and ascending')
    if not report['excluded_padding']:
        errors.append('no padding entries were excluded')
    unresolved = report['unresolved']
    if len(set(unresolved)) != len(unresolved):
        errors.append('unresolved list contains duplicates')
    by_address = {}
    for path in Path(legacy_root).glob('ppc_recomp.*.cpp'):
        for address, body in __import__('re').findall(
                r'PPC_FUNC_IMPL\(__imp__sub_([0-9A-F]+)\) \{(.*?)\n\}', path.read_text(), __import__('re').S):
            by_address[int(address, 16)] = (path.name, [x.strip() for x in __import__('re').findall(r'^\s*// (.+)$', body, __import__('re').M)])
    for entry in recovered:
        address = entry['address']
        legacy = by_address.get(address)
        if legacy is None:
            errors.append(f'0x{address:08X} is not in the legacy inventory')
            continue
        if legacy[1] != entry['ops']:
            errors.append(f'0x{address:08X} assembly does not match the legacy inventory')
            continue
        if entry['source'] != legacy[0]:
            errors.append(f'0x{address:08X} source file mismatch')
        if not 2 <= len(entry['ops']) <= 5:
            errors.append(f'0x{address:08X} has an unsupported number of instructions')
        words = [_recovery.encode(op, address + index * 4)[0] for index, op in enumerate(entry['ops'])]
        if words != entry['words']:
            errors.append(f'0x{address:08X} recorded words do not encode the recorded assembly')
        if entry['ops'][-1] != f'b 0x{entry["target"]:08x}':
            errors.append(f'0x{address:08X} last instruction is not the recorded tail branch')
        if not entry['symbol']:
            errors.append(f'0x{address:08X} has no target symbol')
    for address in unresolved:
        if int(address, 16) in addresses:
            errors.append(f'{address} is both recovered and unresolved')
    return errors


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('report', type=Path)
    parser.add_argument('--legacy-root', type=Path, default=Path(__file__).resolve().parents[2] / 'ppc')
    args = parser.parse_args()
    problems = validate(json.loads(args.report.read_text()), args.legacy_root)
    if problems:
        print('\n'.join(problems))
        raise SystemExit(1)
    print(f'Guest entry audit valid: {args.report}')
