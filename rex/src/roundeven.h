#pragma once
namespace sonic::rex_host {
// Binary32 nearest integer, ties to even, independent of the host rounding mode.
float RoundEvenFloat(float value) noexcept;
}
#ifdef _WIN32
// LLVM may lower generated PPC rounding operations to this C23 libm symbol,
// which the Windows UCRT shipped with the runner does not provide.
extern "C" float roundevenf(float value) noexcept;
#endif
