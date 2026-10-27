// plume backend: the device the native renderer will draw with, on Windows and on Android.
//
// This is stage 3 of docs/NATIVE_RENDERING.md, step one: prove that the backend a native renderer needs
// exists and works on the machine - one Vulkan device through plume, described in the log. Drawing comes
// next (swap chain, pipelines, the game's D3D calls); until then the host keeps using Xenos, so nothing
// about the working path changes.
//
// plume is MIT (thirdparty/plume). Its Vulkan backend takes a Win32 HWND on Windows and an
// ANativeWindow* on Android (plume_render_interface_types.h), which is what makes one backend enough for
// both ports; D3D12 and Metal are there and unused.

#include "renderer.h"

#include <rex/logging.h>

#include <plume_render_interface.h>

// plume's global creation function (plume_vulkan.cpp). Declared here rather than including the backend's
// private header: the interface is the public API, and the backend is chosen by the library's CMake.
namespace plume {
std::unique_ptr<RenderInterface> CreateVulkanInterface();
}

namespace sonic::rex_host::native_renderer {
namespace {

class PlumeRenderer final : public Renderer {
public:
  ~PlumeRenderer() override { Shutdown(); }

  InitResult Initialize(const std::filesystem::path& cache_root) override {
    InitResult result;
    result.backend = "plume/vulkan";
    (void)cache_root;  // Shader and pipeline caches land here once there are pipelines to cache.

    // Creating the interface opens no window and makes no swap chain: this is a device probe.
    interface_ = plume::CreateVulkanInterface();
    if (!interface_) {
      result.error = "plume: no Vulkan interface (is a Vulkan driver installed?)";
      return result;
    }

    const std::vector<std::string>& names = interface_->getDeviceNames();
    REXLOG_INFO("[native] plume: {} Vulkan device(s){}", names.size(),
                names.empty() ? "" : ":");
    for (const std::string& name : names) REXLOG_INFO("[native]   {}", name);

    device_ = interface_->createDevice(names.empty() ? std::string() : names.front());
    if (!device_) {
      result.error = "plume: the Vulkan interface has no usable device";
      return result;
    }

    const plume::RenderDeviceDescription& description = device_->getDescription();
    result.device = description.name;
    result.available = true;
    REXLOG_INFO("[native] plume device: {} ({} MiB of dedicated video memory)", description.name,
                description.dedicatedVideoMemory / (1024ull * 1024ull));
    return result;
  }

  void BeginFrame() override {}
  void Present() override {}

  void Shutdown() override {
    device_.reset();
    interface_.reset();
  }

private:
  std::unique_ptr<plume::RenderInterface> interface_;
  std::unique_ptr<plume::RenderDevice> device_;
};

}  // namespace

std::unique_ptr<Renderer> CreateRenderer() { return std::make_unique<PlumeRenderer>(); }

}  // namespace sonic::rex_host::native_renderer
