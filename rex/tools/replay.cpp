// rex_gpu_replay: re-decode a recorded command stream with our own device.
//
// Usage:
//   rex_gpu_replay [dump-directory] [--frames N] [--ring-log2 N] [--quiet]
//
// The default directory is assets/rex-cache/gpu-dump next to this executable --
// where Run-Native-GPU-Dump.cmd writes. The tool needs no SDK, no GPU and no
// game: it feeds the recorded ring bytes back through the same CommandProcessor,
// RenderState and PM4 walker that run in the plugin, and prints what the device
// understood. That report is what renderer work is planned from:
//
//   * draws / vertices / constant blocks / shader uploads per frame -- how much
//     of a real frame the decoder already covers;
//   * the opcode histogram -- which opcodes still have to be implemented;
//   * the register histogram -- which hardware state the stream depends on;
//   * unsupported / truncated counts -- must go to zero on real levels before
//     the Xenos plugin can be removed.
//
// Exit codes: 0 replayed, 2 nothing to replay (no recording), 3 the recording is
// damaged or the replay failed.
#include "gpu_native/replay.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>

namespace {

void PrintUsage() {
    std::printf(
        "rex_gpu_replay [dump-directory] [--frames N] [--ring-log2 N] [--quiet]\n"
        "  dump-directory  default: assets/rex-cache/gpu-dump next to this build\n"
        "  --frames N      replay at most N recorded frames (default: all)\n"
        "  --ring-log2 N   ring size the replay uses, as VdInitializeRingBuffer\n"
        "                  takes it (default: 14, a 256 KiB ring)\n"
        "  --quiet         only the totals, not the per-frame list\n");
}

std::filesystem::path DefaultDirectory() {
    // The tool has no SDK dependency, so the executable path comes from the
    // standard library and the platform is not special-cased.
    std::error_code code;
    const std::filesystem::path self = std::filesystem::absolute(
        std::filesystem::path("rex_gpu_replay.exe"), code);
    (void)self;
    return std::filesystem::current_path(code) / "assets" / "rex-cache" / "gpu-dump";
}

}  // namespace

int main(int argc, char** argv) {
    std::filesystem::path directory;
    sonic::rex_host::gpu::ReplayOptions options;
    bool quiet = false;
    for (int index = 1; index < argc; ++index) {
        const std::string argument = argv[index];
        if (argument == "--help" || argument == "-h") {
            PrintUsage();
            return 0;
        }
        if (argument == "--quiet") {
            quiet = true;
            continue;
        }
        if (argument == "--frames" && index + 1 < argc) {
            options.maxFrames = size_t(std::strtoull(argv[++index], nullptr, 10));
            continue;
        }
        if (argument == "--ring-log2" && index + 1 < argc) {
            options.ringSizeLog2 = uint32_t(std::strtoul(argv[++index], nullptr, 10));
            continue;
        }
        if (!argument.empty() && argument[0] == '-') {
            std::fprintf(stderr, "unknown option: %s\n", argument.c_str());
            PrintUsage();
            return 3;
        }
        directory = argument;
    }
    if (directory.empty()) directory = DefaultDirectory();

    std::printf("replaying %s\n", directory.string().c_str());
    const sonic::rex_host::gpu::ReplayResult result =
        sonic::rex_host::gpu::ReplayDumpDirectory(directory, options);
    if (!result.ok) {
        std::fprintf(stderr, "replay failed: %s\n", result.error.c_str());
        if (result.files.empty()) {
            std::fprintf(stderr,
                         "Run rex\\windows\\Run-Native-GPU-Dump.cmd first: the replay needs a "
                         "recording (frame-NNN.bin, and memory.bin for the data the stream "
                         "reads).\n");
            return 2;
        }
        return 3;
    }

    if (quiet) {
        std::printf("%s", result.Report().substr(0, result.Report().find("\nper frame")).c_str());
        std::printf("\n");
    } else {
        std::printf("%s", result.Report().c_str());
    }
    std::printf("\nreplayed %llu recorded frame(s) from %s\n",
                static_cast<unsigned long long>(result.frames), directory.string().c_str());
    if (options.writeReport) {
        std::printf("report written to %s\n",
                    (directory / "replay-report.txt").string().c_str());
    }
    return 0;
}
