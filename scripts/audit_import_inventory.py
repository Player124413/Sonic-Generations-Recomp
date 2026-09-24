#!/usr/bin/env python3
"""Verify title function-import metadata; inventory is NOT ABI certification.

Variable requirements cannot be inferred from generated function mappings.
Use the runtime --audit-imports command on the installed XEX for those.
"""
import argparse
import json
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[1]
MAPPING = re.compile(r'\{\s*(0x[0-9A-Fa-f]+),\s*__imp__(\w+)\s*\}')
MANIFEST = re.compile(r'SONIC_IMPORT\("([^"]+)",\s*(0x\w+),\s*(0x\w+),\s*(\w+)\)')
EXPORT = re.compile(r'XE_EXPORT\(\w+,\s*(0x\w+),\s*(\w+),\s*(kFunction|kVariable)\)')


def validate(mapping_text, manifest_text, link_text, tables):
    mappings = [(int(a, 16), n) for a, n in MAPPING.findall(mapping_text)]
    entries = [(lib, int(o, 16), int(a, 16), n) for lib, o, a, n in MANIFEST.findall(manifest_text)]
    if not mappings or len(set(mappings)) != len(mappings):
        raise ValueError('Missing/duplicate generated mappings')
    if len(entries) != len(mappings) or {(a, n) for _, _, a, n in entries} != set(mappings):
        raise ValueError('Manifest must cover every named PPC import exactly once')
    linked = set(re.findall(r'&__imp__(\w+)', link_text))
    for lib, ordinal, address, name in entries:
        if tables.get(lib, {}).get(ordinal) != (name, 'kFunction'):
            raise ValueError(f'Wrong module, ordinal, name or type: {lib}!{name}')
        if name not in linked:
            raise ValueError(f'Import absent from link regression: {name}')
    return entries


def function_body(source, name):
    match = re.search(r'\b' + re.escape(name) + r'\s*\([^;{}]*\)\s*\{', source)
    if not match:
        return None
    start = match.end()
    # Ignore braces inside comments and literals while retaining the original body.
    tokens = re.compile(r'//[^\n]*|/\*.*?\*/|"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|[{}]', re.S)
    depth = 1
    for token in tokens.finditer(source, start):
        if token.group() == '{':
            depth += 1
        elif token.group() == '}':
            depth -= 1
            if depth == 0:
                return source[start:token.start()]
    return None


def inventory(entries):
    sources = [(p.relative_to(ROOT).as_posix(), p.read_text())
               for p in (ROOT / 'SonicGenerationsRecomp').rglob('*.cpp') if p.name != 'shader_cache.cpp']
    result = []
    for library, ordinal, thunk, name in entries:
        hooks = []
        for path, source in sources:
            for target in re.findall(r'GUEST_FUNCTION_HOOK\(\s*__imp__' + re.escape(name) + r'\s*,\s*(\w+)\s*\)', source):
                bodies = [(bp, body) for bp, text in sources if (body := function_body(text, target)) is not None]
                markers = [bp for bp, body in bodies if 'STUB' in body or 'NOT_IMPLEMENTED' in body or 'ERROR_NOT_SUPPORTED' in body]
                hooks.append({'source': path, 'target': target, 'limitation_markers': markers})
        result.append({'library': library, 'ordinal': f'0x{ordinal:X}', 'name': name,
                       'thunk': f'0x{thunk:08X}', 'hooks': hooks,
                       'semantic_status': 'not_certified'})
    return {'schema': 1, 'function_count': len(result), 'variable_requirements_complete': False,
            'note': 'Source marker scan is heuristic; absence of markers does not prove implementation completeness.',
            'functions': result}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--export-dir', type=Path, default=ROOT / 'tools/XenonRecomp/XenonUtils/xbox')
    parser.add_argument('--output', type=Path)
    args = parser.parse_args()
    tables = {}
    for module, library in [('xboxkrnl', 'xboxkrnl.exe'), ('xam', 'xam.xex')]:
        text = (args.export_dir / f'{module}_table.inc').read_text()
        tables[library] = {int(o, 16): (n, kind) for o, n, kind in EXPORT.findall(text)}
    entries = validate((ROOT / 'ppc/ppc_func_mapping.cpp').read_text(),
                       (ROOT / 'SonicGenerationsRecomp/kernel/title_function_imports.inc').read_text(),
                       (ROOT / 'tests/import_link_test.cpp').read_text(), tables)
    if args.output:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(json.dumps(inventory(entries), indent=2) + '\n')
    print(f'{len(entries)} function imports match PPC, pinned export types and link coverage.')
    print('Variable requirements and semantic completeness are NOT certified by this check.')


if __name__ == '__main__':
    main()
