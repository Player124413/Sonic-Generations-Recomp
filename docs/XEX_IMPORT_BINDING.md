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

### Object descriptors: prerequisite audit after the native color-chain work

No additional object-type variables are exported by this change. The existing
`ObReferenceObjectByHandle` returns the handle verbatim, without type validation
or retention; `ObReferenceObject` and `ObDereferenceObject` remain stubs.
Handles point at host C++ objects, whereas a guest object pointer must point at
a guest ABI body, with its own header/type identity and reference lifetime.
Thread PCR/TEB storage currently has a separate lifetime from the thread handle.
Therefore exporting nonzero type addresses alone would hide, not solve, the
kernel blocker.

Required implementation order:
1. Separate guest object bodies from host objects; integrate thread bodies with
   the actual PCR/TEB used by guest execution.
2. Implement validated typed references and lifetime shared by object references,
   close and duplicate-handle operations. Audit the current pointer-copy
   `NtDuplicateObject` implementation, which does not retain an independent handle.
3. Bind descriptors only with proven Xbox 360 field/callback contracts; test
   guest indirect calls, type mismatch, invalid handle, close-with-live-reference
   and final dereference before enabling the corresponding variable exports.

Xenia's `kernel/xobject.h` documents a 24-byte guest header and 28-byte type
structure, but marks several fields as unknown. Its xboxkrnl object-reference
implementation also recognizes placeholder type tokens. These are useful
comparison points, not proof that dummy tokens or zero-filled descriptors are
correct for this static runtime. Original-Xbox and desktop Windows OBJECT_TYPE
layouts are not sufficient evidence for Xbox 360 callback ABI compatibility.
