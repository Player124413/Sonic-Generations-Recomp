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
| `0xE` | Event type descriptor used by the HLE object manager |
| `0x17` | Semaphore type descriptor used by the HLE object manager |
| `0x1B` | Thread type descriptor used by the HLE object manager |

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

## Guest objects and handles

`kernel/object_manager.cpp` separates three different things:
- Host C++ objects, allocated on the host rather than exposed inside guest RAM.
- Opaque, monotonically allocated handle IDs. Each duplicate is independently
  closeable; closing a stale ID cannot close a newly allocated object.
- Guest object bodies, with a 24-byte big-endian object header. The header's
  type pointer refers to the exported descriptor, never to a C++ vtable.

`ObReferenceObjectByHandle` validates the live handle and requested type, retains
an explicit reference and returns the guest body. `ObReferenceObject` and
`ObDereferenceObject` maintain that reference lifetime. A body survives closing
all handles when references remain. Imported host calls also pin their objects
while executing; a concurrent close cannot destroy a blocked wait's object.
Guest header counters track handles and explicit references, not temporary host
call pins. Type checking uses trusted host metadata, not guest-writable headers.

`NtDuplicateObject` now uses the Xbox 360 **three-argument** ABI, including
close-source handling; the previous five-argument signature was incorrect.
Nt operations require handles, while object operations use referenced bodies.

Events and semaphores use the guest header's big-endian SignalState as their
canonical atomic state, including auto-reset and semaphore-count consumption.
Poll, infinite and bounded single-object waits are supported. Relative timeout
conversion handles INT64_MIN without signed overflow; absolute deadlines use
100-nanosecond Windows-epoch units. Alertable/APC scheduling is not implemented.

Thread objects own their guest bodies separately from the PCR/TLS/stack.
PCR+0x100 points at that same body; thread ID and last-error access follow this
pointer. Running threads retain a reference independently of handles. Completion
signals the body without consuming the host thread's join operation. The initial
title thread and the current-thread pseudo-handle are registered too.

### Descriptor scope — HLE, not native kernel callback emulation

Event, semaphore and thread descriptors are stable 28-byte guest structures
used by actual typed references and guest headers. Their dispatcher offset is
zero and their HLE pool tags identify the built-in types. Lifecycle is performed
by the HLE manager: constructor/destructor callback slots and unknown fields
remain null. **Calling native kernel allocation/deletion callbacks through these
structures is not supported.** No guessed executable thunks are installed.
This is a functional built-in object/type implementation, not a claim that every
field or callback in Xbox OBJECT_TYPE has been reproduced.

Layouts were compared with Xenia's `kernel/xobject.h`; its unknown fields were
not assigned speculative semantics. Duplicate-handle ABI was checked against
`kernel/xboxkrnl/xboxkrnl_ob.cc`. See `licenses/Xenia-BSD.txt`.

## Verification

`tests/kernel_objects` builds the actual manager, dispatcher objects, thread
runtime and object-import bridges **without** compiling the entire generated
PPC program. It exercises:
- distinct aliases, independent close, close-source, stale/invalid handles;
- type mismatch, header identity/counts, close-with-live-reference and final
  dereference;
- the actual Nt/Ob/Ke PPC import bridges, including three-argument duplication
  and rejecting an object pointer passed as an Nt handle;
- concurrent close while an imported call owns a pin;
- canonical guest signal words, auto-reset, semaphore limits and timed waits;
- suspended-thread handle closure, body lifetime, PCR/thread-ID/last-error,
  main thread and current-thread pseudo-handle duplication.

The full `kernel_tests` suite additionally checks IAT binding of these three
variables. The dedicated workflow tests both Linux and Windows ClangCL. Passing
these host fixtures is not evidence of title boot or level progression.

## Still incomplete

Other kernel object types (including file, timer, mutant and I/O types) do not
get synthesized descriptors. Unsupported variable imports still stop loading
with library/ordinal/address. Untyped host objects continue to support handles,
but requesting an unimplemented guest body returns NOT_IMPLEMENTED instead of
a host pointer. Object naming/open-by-name, full wait-all/alertable/APC semantics,
remote thread suspension, native descriptor callbacks, dynamic procedure lookup
and additional user modules remain incomplete. These limits still prevent a
claim of complete kernel compatibility or title bootability.

Verification for implementation commit `ac6eea7`:
- Dedicated object/import tests, **Windows ClangCL and Linux Clang**:
  Actions `35960788890`, both passed.
- The Linux full-runtime workflow `35960788878` passed compilation of all host
  runtime and test translation units; generated PPC build/link and full-runtime
  execution checks were still running when this note was written.
- Full Windows runtime workflow `35960788914` was still running. Its final EXE
  and full-suite result are not assumed from the dedicated kernel tests.

The handle migration also updates SDK file wrappers to return opaque IDs rather
than subtracting guest memory from host C++ pointers. Their Win32 BOOL failure
paths return false, not a nonzero NTSTATUS. File wrappers now share the same
FileHandle definition as the NT layer, avoiding conflicting class layouts.
