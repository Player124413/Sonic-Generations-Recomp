# Runtime XEX imports

The CPU generator's `Xex2LoadImage` is not a runtime import loader. At the pinned
revision it byte-swaps type-0 import words **in place**, and replaces type-1
thunks with NOP/BLR before returning the image. Reading those words as ordinary
big-endian ordinals in the runtime would bind the wrong exports.

`cmake/RuntimeXex.cmake` builds a separately named entry point from that pinned
source, disabling only its import-rewrite block. The recompiler and its submodule
remain unchanged. The configure guard fails if the expected block changes.
The runtime validates the import directory before decoding, then reads original
BE records from the decoded image and builds a patch plan. Only after all
records pass validation does it write BE guest pointers to IAT slots. The
function pointers refer to existing compiled guest thunk mappings, not host
addresses. The layout check is not an exact game/TU hash check.

Implemented guest variable storage:

| Xbox kernel ordinal | Meaning |
|---|---|
| `0x193` | Pointer to the title's guest-owned LDR entry, whose `+0x58` points to the registered XEX header |
| `0x266` | Certification monitor pointer; null pointee means monitor disabled |
| `0x59` | Debug monitor pointer; null pointee means monitor disabled |
| `0xAD` | 24-byte timestamp bundle; millisecond uptime at `+16` updated by a joined, process-lifetime timer |

The loader entry includes image base/size, entry point, load count, singleton
list links, and guest UTF-16 `default.xex` names. `XexGetModuleHandle` returns this
entry, not the former `0x1000` pseudo handle. Unknown names fail. No guest thread
may execute while registering/replacing an image.

Layout and disabled-monitor/timestamp semantics were checked against
[Xenia's module layout](https://github.com/xenia-project/xenia/blob/master/src/xenia/kernel/xmodule.h)
and [kernel variable initialization](https://github.com/xenia-project/xenia/blob/master/src/xenia/kernel/xboxkrnl/xboxkrnl_module.cc).
See `licenses/Xenia-BSD.txt`. UnleashedRecomp's similarly named empty functions
are not variable-export implementations and were not used as such.

Tests include synthetic raw XEX/PE decoding (preservation of import words),
module→header lookup, variable and function pointers, unknown variables,
malformed/truncated directories, duplicate destinations, and all-or-nothing
IAT writes. These are not a game boot test.

## Still incomplete

Other kernel variables (including object-type descriptors) and XAM variables
are **not** synthesized as zero buffers. An import of one stops loading with
library/ordinal/address in the error. Dynamic procedure lookup and loading
additional user modules remain unsupported. The timestamp layout follows
Xenia, not a hardware-verified implementation of every bundle field. This work
therefore does not establish full kernel compatibility or title bootability.
