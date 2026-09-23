"""Build-only extraction of exact original leaf bodies for differential tests.

Never edits ppc/. A regenerated/restructured source without the exact entries
fails the test build rather than silently swapping in a hand-written oracle.
"""
from pathlib import Path
import re
import sys
root = Path(__file__).resolve().parents[2]
inc = (root / 'SonicGenerationsRecomp/gpu/state_dispatch.inc').read_text()
symbols = re.findall(r'^SONIC_STATE\(\w+, (sub_[0-9A-F]+),', inc, re.M)
bodies = {}
for part in (270, 271):
    text = (root / f'ppc/ppc_recomp.{part}.cpp').read_text()
    for symbol in symbols:
        match = re.search(r'PPC_FUNC_IMPL\(__imp__' + symbol + r'\) \{.*?^\}', text, re.M | re.S)
        if match:
            if symbol in bodies:
                raise RuntimeError(f'Duplicate original: {symbol}')
            bodies[symbol] = match.group(0)
if len(symbols) != len(set(symbols)) or set(symbols) != set(bodies):
    raise RuntimeError('State replacement/original entry mismatch')
# Only these compiler intrinsics need compatibility for the isolated GCC suite.
# std::rotl is defined for every input including a zero shift.
header = '''#include <bit>
#if defined(__GNUC__) && !defined(__clang__)
#define __builtin_assume(x) ((void)0)
#define __builtin_rotateleft32(x, n) std::rotl(uint32_t(x), int(n))
#endif
#include <cpu/ppc_context.h>
'''
Path(sys.argv[1]).write_text(header + '\n'.join(bodies[s] for s in symbols) + '\n')
