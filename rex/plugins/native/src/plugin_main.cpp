// ABI entry points of our own GPU plugin.
//
// The runtime loads rexgpu-<name> from the executable's directory and calls
// these two exports. Everything behind them is our implementation; the only SDK
// types crossing this boundary are the ones the ABI itself defines.
#include <rex/system/gpu_plugin.h>

#include <cstdlib>
#include <new>

#include "native_graphics_system.h"

namespace {
// The factory is the only allocation the host does not own, so it hands back a
// pointer the host wraps in a unique_ptr (the ABI says the plugin is never
// unloaded, and the runtime takes ownership of the returned system).
sonic::rex_host::gpu::NativeGraphicsSystem* CreateSystem() {
    return new (std::nothrow) sonic::rex_host::gpu::NativeGraphicsSystem();
}
}  // namespace

extern "C" {

REX_GPU_PLUGIN_EXPORT uint32_t rex_gpu_abi_version(void) {
    return rex::system::kGpuPluginAbiVersion;
}

REX_GPU_PLUGIN_EXPORT rex::system::IGraphicsSystem* rex_gpu_create(
    uint32_t abi_version, const rex::system::GpuCreateInfo* info) {
    if (abi_version != rex::system::kGpuPluginAbiVersion) return nullptr;
    // This plugin is Vulkan-only by construction: it does not refuse a request
    // for another backend by silently pretending, it refuses the whole factory,
    // and the host reports that as a plugin failure.
    if (info && info->backend) {
        const std::string_view backend(info->backend);
        if (!backend.empty() && backend != "vulkan" && backend != "any") return nullptr;
    }
    return CreateSystem();
}

}  // extern "C"
