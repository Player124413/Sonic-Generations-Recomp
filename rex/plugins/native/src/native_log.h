#pragma once
// One logging entry point for the plugin, so every line carries the same prefix
// and it is obvious in a log which GPU is speaking.
#include <cstdarg>
#include <cstdio>

namespace sonic::rex_host::gpu {

inline void Log(const char* format, ...) {
    char line[1024];
    va_list arguments;
    va_start(arguments, format);
    std::vsnprintf(line, sizeof(line), format, arguments);
    va_end(arguments);
    std::fprintf(stderr, "[sonic-gpu] %s\n", line);
    std::fflush(stderr);
}

}  // namespace sonic::rex_host::gpu
