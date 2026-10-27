// The native renderer's seam: one interface for both ports.
//
// The renderer replaces drawing through the emulated Xbox 360 GPU: it hooks the game's XDK Direct3D
// entry points, rebuilds the state of a draw from the device and issues the host draw itself. The
// interface here is what the host (rex/src/sonic_app.h) and the game-side hooks agree on, so that the
// backend underneath - plume today - is not visible anywhere else.
//
// It is deliberately small: a backend first has to reach "one frame on screen" (docs/NATIVE_RENDERING.md,
// stage 3) before there is anything else to agree on. Stages 2-3 add devices, pipelines and draws to it.

#pragma once

#include <cstdint>
#include <filesystem>
#include <memory>
#include <string>
#include <vector>

namespace sonic::rex_host::native_renderer {

// What a backend was able to do, reported once at start and written to the log. `available` is false
// when no device could be created (no Vulkan driver, a phone without the loader, ...): the host then
// keeps drawing through Xenos instead of failing the run.
struct InitResult {
  bool available = false;
  std::string backend;        // "plume/vulkan", ...
  std::string device;         // the device description the backend selected
  std::string error;          // why it is not available, when it is not
};

class Renderer {
public:
  virtual ~Renderer() = default;

  // The device and its queues. `cache_root` is where shader and pipeline caches live between runs.
  virtual InitResult Initialize(const std::filesystem::path& cache_root) = 0;

  // A frame boundary, in the same order the game produces them.
  virtual void BeginFrame() = 0;
  virtual void Present() = 0;

  // Frees the device. Safe to call more than once.
  virtual void Shutdown() = 0;
};

// Creates the backend this build was configured with (rex/CMakeLists.txt,
// -DSONIC_REX_NATIVE_RENDERER=ON -> plume). Null when the build has none.
std::unique_ptr<Renderer> CreateRenderer();

}  // namespace sonic::rex_host::native_renderer
