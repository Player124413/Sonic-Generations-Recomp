#pragma once
#include "config.h"
// The pinned fork's NEG_USR32/NEG_SSR32 inline assembly emits out-of-range
// immediate shift counts rejected by current GNU binutils. Use FFmpeg's
// equivalent portable C math paths, without changing the pinned source tree.
#if defined(__GNUC__) && !defined(_WIN32)
#undef HAVE_INLINE_ASM
#define HAVE_INLINE_ASM 0
#endif
