"""Experimental conversion of uncompressed Xbox 360 shader archives."""
import argparse
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import re
import struct
import subprocess
import zipfile

from prepare_shader_link import HTTPSRedirects, MAX_BYTES, validate_url
import urllib.request


def source_url():
    # Keep user input out of shell interpolation and diagnostics.
    explicit = os.environ.get('ZIP_URL_INPUT', '').strip()
    return validate_url(explicit or os.environ.get('SHADERS_ZIP_URL', '').strip())


def download(destination):
    try:
        url = source_url()
        opener = urllib.request.build_opener(HTTPSRedirects())
        with opener.open(url, timeout=60) as response, destination.open('wb') as out:
            total = 0
            while chunk := response.read(1024 * 1024):
                total += len(chunk)
                if total > MAX_BYTES:
                    raise ValueError('Size limit')
                out.write(chunk)
    except Exception:
        raise ValueError('ZIP download failed. Check zip_url or SHADERS_ZIP_URL secret, expiry and 256 MiB limit.') from None


def archives(path):
    groups, seen = {}, set()
    with zipfile.ZipFile(path) as z:
        entries = z.infolist()
        if len(entries) > 4096 or sum(e.file_size for e in entries) > MAX_BYTES:
            raise ValueError('ZIP extraction limit exceeded')
        for entry in entries:
            name = entry.filename.replace('\\', '/').lower()
            p = PurePosixPath(name)
            if p.is_absolute() or '..' in p.parts or ':' in name:
                raise ValueError('Unsafe ZIP path')
            if entry.is_dir():
                continue
            if name in seen:
                raise ValueError('Duplicate ZIP entry')
            seen.add(name)
            match = re.fullmatch(r'(.+\.ar)(?:\.(\d{2}))?', name)
            if match:
                base, part = match.groups()
                groups.setdefault(base, {})[int(part) if part else -1] = z.read(entry)
    if not groups:
        raise ValueError('No .ar or .ar.NN archives found')
    for parts in groups.values():
        numbers = sorted(parts)
        if numbers != [-1] and numbers != list(range(len(numbers))):
            raise ValueError('Missing archive part or mixed split/unsplit archives')
        yield b''.join(parts[n] for n in numbers)


def containers(data):
    offset = 0
    while offset + 36 <= len(data):
        fields = struct.unpack_from('>9I', data, offset)
        flags, virtual, physical = fields[:3]
        size = virtual + physical
        if flags & 0xFFFFFF00 == 0x102A1100 and fields[7:] == (0, 0):
            if virtual < 36 or size > len(data) - offset:
                raise ValueError('Truncated shader container')
            if any(n and not 36 <= n < virtual for n in fields[4:7]):
                raise ValueError('Invalid shader metadata offset')
            yield data[offset:offset + size]
            offset += size
        else:
            offset += 4


def missing_boolean_registers(text):
    # Upstream CondJmp fallback emits bN without declaring it. Ignore comments.
    code = re.sub(r'/\*.*?\*/|//[^\n]*', '', text, flags=re.S)
    declared = set(re.findall(r'\b(?:bool|int|uint|float)\s+(b[0-9]+)\b', code))
    declared.update(re.findall(r'#\s*define\s+(b[0-9]+)\b', code))
    # cbuffer register(b0, ...) denotes a binding, not a boolean variable.
    uses_without_bindings = re.sub(r'\bregister\s*\([^)]*\)', '', code)
    used = set(re.findall(r'\bb[0-9]+\b', uses_without_bindings))
    return sorted(used - declared, key=lambda name: int(name[1:]))


def validate_cache(text, expected, api="both"):
    count = re.search(r'g_shaderCacheEntryCount\s*=\s*(\d+)', text)
    if not count or int(count[1]) != expected or expected == 0:
        raise ValueError('Incomplete or empty shader cache')
    if api not in ('both', 'vulkan'):
        raise ValueError('Unsupported cache API')
    for kind in (('spirv',) if api == 'vulkan' else ('dxil', 'spirv')):
        if not re.search(r'g_' + kind + r'CacheDecompressedSize\s*=\s*[1-9][0-9]*', text):
            raise ValueError('Missing compiled payload: ' + kind)


def normalize_sha256(value):
    expected = value.strip().lower()
    if expected and not re.fullmatch('[0-9a-f]{64}', expected):
        raise ValueError('SHA-256 must be 64 hex characters, or leave it empty for automatic hashing. Put the download link in zip_url, not sha256.')
    return expected


def verify_digest(actual, expected):
    if expected and actual != expected:
        raise ValueError('ZIP SHA-256 mismatch')


def run(args):
    expected = normalize_sha256(args.sha256)
    work = args.work.resolve()
    # Refuse stale output rather than accidentally publishing a previous run.
    work.mkdir(parents=True, exist_ok=False)
    source = args.zip
    if source is None:
        source = work / 'input.zip'
        download(source)
    if source.stat().st_size > MAX_BYTES:
        raise ValueError('ZIP exceeds 256 MiB')
    actual = hashlib.sha256(source.read_bytes()).hexdigest()
    verify_digest(actual, expected)
    print(f'ZIP SHA-256: {actual}')
    if not expected:
        print('No expected checksum supplied: digest recorded, but source integrity was not independently verified.')
    exe, header = args.xenos.resolve(), args.header.resolve()
    if not exe.is_file() or not header.is_file():
        raise ValueError('XenosRecomp or common header missing')
    inputs, output = work / 'containers', work / 'result'
    inputs.mkdir()
    output.mkdir()
    counts, unique = [], {}
    for archive in archives(source):
        found = list(containers(archive))
        counts.append(len(found))
        if not found:
            raise ValueError('An AR archive contains no readable shaders. Compressed archives require a compatible Hedgehog Engine decompressor first.')
        for blob in found:
            unique[hashlib.sha256(blob).hexdigest()] = blob
    for digest, blob in sorted(unique.items()):
        # Upstream directory scanner requires trailing bytes even for a minimal container.
        (inputs / (digest + '.bin')).write_bytes(blob + b'\0' * 4)
    hlsl = output / 'hlsl'
    hlsl.mkdir()
    print(f'Found {len(unique)} unique shaders. Generating HLSL and checking boolean references.', flush=True)
    for binary in sorted(inputs.iterdir()):
        target = hlsl / (binary.stem + '.hlsl')
        subprocess.run([str(exe), str(binary), str(target), str(header), "--api", "vulkan"], check=True, timeout=120)
        if not target.is_file() or target.stat().st_size == 0:
            raise ValueError('Missing HLSL output')
        text = target.read_text()
        missing = missing_boolean_registers(text)
        if missing:
            diagnostics = work / 'diagnostics'
            diagnostics.mkdir(exist_ok=True)
            (diagnostics / target.name).write_text(text)
            (diagnostics / 'report.json').write_text(json.dumps({
                'container_sha256': binary.stem,
                'missing_boolean_registers': missing,
                'reason': 'XenosRecomp generated undeclared boolean references',
                'runtime_ready': False,
            }, indent=2))
            raise ValueError(f'Unsupported boolean references {", ".join(missing)} in {target.name}. '
                             'Stopped before batch DXC compilation. Diagnostic HLSL saved in private/shader-build/diagnostics '
                             '(or the diagnostics subfolder of --work). Do not replace these values with zero.')
    cache = output / 'shader_cache.experimental.cpp'
    subprocess.run([str(exe), str(inputs), str(cache), str(header), "--api", "vulkan",
                    "--report", str(output / "compiler-report.json"),
                    "--dump-failed", str(work / "diagnostics")], check=True, timeout=1800)
    validate_cache(cache.read_text(), len(unique), api="vulkan")
    (output / 'report.json').write_text(json.dumps({
        'zip_sha256': actual, 'checksum_verified': bool(expected), 'containers_per_archive': counts,
        'unique_shaders': len(unique), 'runtime_ready': False,
    }, indent=2))
    (output / 'README.txt').write_text(
        'Player124413 Vulkan cache: loader available; game pipeline integration incomplete.\n'
        'Contains Zstd-compressed smol-v SPIR-V plus specialization metadata.\n'
        'Renderer integration and visual validation are still required.\n'
        'Derived game resources: do not publish without permission.\n')
    print(f'Converted {len(unique)} unique shaders. Runtime integration still required.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--zip', type=Path)
    parser.add_argument('--sha256', default=os.environ.get('ZIP_SHA256', ''),
                        help='Optional expected SHA-256; defaults to ZIP_SHA256 environment variable')
    parser.add_argument('--work', type=Path, default=Path('private/shader-build'))
    parser.add_argument('--xenos', type=Path, required=True)
    parser.add_argument('--header', type=Path, default=Path('tools/XenosRecomp/XenosRecomp/shader_common.h'))
    try:
        run(parser.parse_args())
    except (ValueError, OSError, zipfile.BadZipFile, RuntimeError, subprocess.SubprocessError) as error:
        raise SystemExit(str(error))
