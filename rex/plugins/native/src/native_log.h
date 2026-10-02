#pragma once
// One logging entry point for the plugin, so every line carries the same prefix
// and it is obvious in a log which GPU is speaking.
//
// Why it writes a file: the host is a Windows GUI application, which has no
// console attached, so anything written to stderr goes nowhere. The first crash
// report from a real machine was therefore silence -- the run died with
// 0xC0000005 and there was no line saying how far the device had got. The log
// goes next to the other diagnostics of the host and is written as the game
// runs, so the last line before a crash names the step that crashed.
#include <cstdarg>
#include <filesystem>

namespace sonic::rex_host::gpu {

/// Appends one line to diagnostics/native-gpu.log and mirrors it to stderr (used
/// by CI and by anyone running from a console). Thread-safe and cheap enough for
/// per-frame diagnostics; the file is opened on first use.
void Log(const char* format, ...);

/// Names the step currently executing. It is reported with every line and in the
/// crash report, so a crash without a message still says where it happened.
void LogSetContext(const char* stage);
const char* LogContext();

/// Path of the log file, empty until the first line is written.
std::filesystem::path LogPath();

/// Writes what Windows tells us about an unhandled exception: the code, the
/// address, the module it belongs to with the offset inside it, and the last log
/// lines. Installed by the plugin factory; returns EXCEPTION_CONTINUE_SEARCH, so
/// the crash still reaches the system debugger.
void InstallCrashHandler();

}  // namespace sonic::rex_host::gpu
