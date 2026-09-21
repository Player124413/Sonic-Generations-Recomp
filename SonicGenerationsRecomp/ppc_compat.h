#pragma once

// ---------------------------------------------------------------------------
// Compatibility shims for compiling XenonRecomp output with GCC.
//
// The generated ppc/ sources are primarily targeted at Clang (used by
// Unleashed Recompiled). This header is force-included (or pulled in via the
// precompiled header) so that the same sources compile cleanly with GCC too.
// ---------------------------------------------------------------------------

#if defined(__GNUC__) && !defined(__clang__)

// Clang builtin used by PPC_FUNC_PROLOGUE() in ppc/ppc_context.h.
// Macro expansion happens at the use site, so this definition takes effect
// even though ppc_context.h stores the tokens in a macro.
#ifndef __builtin_assume
#define __builtin_assume(x) ((void)0)
#endif

#endif
