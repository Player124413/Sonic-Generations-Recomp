#pragma once
// Off-Windows stand-in for MSVC's intrin.h.
//
// `rex/platform.h` includes it on Windows, and the SDK's headers are checked here
// as Windows code (with _WIN32 defined), so the include has to resolve. It must
// not shadow the compiler builtins the SDK calls: GCC and Clang already provide
// them through their own headers, which is what this pulls in.
#include <x86intrin.h>
