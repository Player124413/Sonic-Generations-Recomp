#include "native_gpu.h"
#include <gpu/vulkan_backend.h>
#include <cstdio>
#include <cstring>
// Link the actual native session/backend and decode actual embedded game SPIR-V
// BEFORE the full PPC build. Default mode does not need a GPU on the CI runner.
int main(int argc, char** argv) {
    sonic::rex_host::ShutdownNativeGpu();
    VulkanBackend backend(nullptr, false, true);
    GuestGpu::ShaderCache cache;
    std::string error;
    if (!cache.Initialize(GuestGpu::GetEmbeddedShaderCache(), error) || cache.Entries().empty()) {
        std::fprintf(stderr, "Shader cache: %s\n", error.c_str()); return 1;
    }
    for (const auto& entry : cache.Entries()) {
        GuestGpu::ShaderModule module;
        if (!cache.Decode(entry.hash, module, error)) {
            std::fprintf(stderr, "Shader %llX: %s\n", (unsigned long long)entry.hash, error.c_str()); return 1;
        }
    }
    if (argc == 2 && std::strcmp(argv[1], "--gpu") == 0 && !backend.Init(VideoMode{})) {
        std::fprintf(stderr, "%s\n", backend.GetLastError().c_str()); return 1;
    }
    std::printf("Native backend linked; %zu game shaders decoded. GPU initialization %s.\n",
                cache.Entries().size(), argc == 2 ? "requested" : "not requested");
}
