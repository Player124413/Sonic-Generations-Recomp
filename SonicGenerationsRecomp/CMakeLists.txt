project("SonicGenerationsRecomp")

# ---------------------------------------------------------------------------
# Runtime core as a static library so tests can link against it.
# ---------------------------------------------------------------------------

set(SONIC_GENERATIONS_CORE_SOURCES
    "app.cpp"
    "cpu/guest_thread.cpp"
    "kernel/heap.cpp"
    "kernel/memory.cpp"
    "kernel/xdm.cpp"
    "kernel/object_manager.cpp"
    "kernel/object_imports.cpp"
    "kernel/imports.cpp"
    "kernel/imports_extra.cpp"
    "kernel/guest_printf.cpp"
    "kernel/xex_module.cpp"
    "kernel/io/file_system.cpp"
    "kernel/io/nt_file.cpp"
    "kernel/xam.cpp"
    "gpu/video.cpp"
    "gpu/guest_hooks.cpp"
    "gpu/native_commands.cpp"
    "gpu/native_resources.cpp"
    "gpu/state_dispatch.cpp"
    "gpu/state_tables.cpp"
    "gpu/state_table_hook.cpp"
    "apu/audio.cpp"
    "apu/xma.cpp"
    "apu/driver/sdl2_driver.cpp"
    "hid/hid.cpp"
    "hid/driver/sdl_hid.cpp"
    "install/installer.cpp"
    "install/iso_file_system.cpp"
    "os/win32/logger_win32.cpp"
    "os/linux/logger_linux.cpp"
    "os/macos/logger_macos.cpp"
    "os/win32/process_win32.cpp"
    "os/linux/process_linux.cpp"
    "os/macos/process_macos.cpp"
    "os/win32/media_win32.cpp"
    "os/linux/media_linux.cpp"
    "os/macos/media_macos.cpp"
    "os/win32/user_win32.cpp"
    "os/linux/user_linux.cpp"
    "os/macos/user_macos.cpp"
    "os/win32/version_win32.cpp"
    "os/linux/version_linux.cpp"
    "os/macos/version_macos.cpp"
    "user/config.cpp"
    "user/paths.cpp"
    "ui/game_window.cpp")

# Only compile the sources for the host platform.
if (NOT WIN32)
    list(FILTER SONIC_GENERATIONS_CORE_SOURCES EXCLUDE REGEX "win32/")
endif()
if (NOT APPLE)
    list(FILTER SONIC_GENERATIONS_CORE_SOURCES EXCLUDE REGEX "macos/")
endif()
if (NOT CMAKE_SYSTEM_NAME MATCHES "Linux")
    list(FILTER SONIC_GENERATIONS_CORE_SOURCES EXCLUDE REGEX "linux/")
endif()

add_library(SonicGenerationsRecompCore STATIC ${SONIC_GENERATIONS_CORE_SOURCES})

target_include_directories(SonicGenerationsRecompCore PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/..")

target_include_directories(SonicGenerationsRecompCore PRIVATE
    "${SONIC_GENERATIONS_TOOLS_ROOT}/XenonRecomp/thirdparty/simde")

target_precompile_headers(SonicGenerationsRecompCore PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/ppc_compat.h")

target_link_libraries(SonicGenerationsRecompCore PUBLIC
    SonicGenerationsRecompLib
    XenonUtils
    o1heap
    fmt::fmt
    tomlplusplus::tomlplusplus
    xxHash::xxhash
    SDL2::SDL2)

if (WIN32)
    target_link_libraries(SonicGenerationsRecompCore PUBLIC winmm ole32 shell32 windowsapp)
    target_compile_definitions(SonicGenerationsRecompCore PUBLIC SDL_MAIN_HANDLED)
endif()


# ---------------------------------------------------------------------------
# Game executable.
# ---------------------------------------------------------------------------

add_executable(SonicGenerationsRecomp "main.cpp")
target_link_libraries(SonicGenerationsRecomp PRIVATE SonicGenerationsRecompCore)
target_precompile_headers(SonicGenerationsRecomp PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/ppc_compat.h")

# Guest audio requires frame-level XMA, not the system FFmpeg packet decoder.
include("${CMAKE_CURRENT_SOURCE_DIR}/../cmake/XmaFrameDecoder.cmake")
target_link_libraries(SonicGenerationsRecompCore PUBLIC SonicXmaFrames)

# Explicit opt-in: SDK/loader is required; never silently substitute NullBackend.
option(SONIC_GENERATIONS_ENABLE_VULKAN "Build the Vulkan resource/transfer/WSI backend" OFF)
if (SONIC_GENERATIONS_ENABLE_VULKAN)
    include("${CMAKE_CURRENT_SOURCE_DIR}/../cmake/VulkanHost.cmake")
    target_link_libraries(SonicGenerationsRecompCore PUBLIC SonicVulkanHost)
    target_compile_definitions(SonicGenerationsRecompCore PUBLIC SONIC_GENERATIONS_ENABLE_VULKAN=1)
endif()

include("${CMAKE_CURRENT_SOURCE_DIR}/../cmake/GpuResources.cmake")
target_link_libraries(SonicGenerationsRecompCore PUBLIC SonicGpuResources)

include("${CMAKE_CURRENT_SOURCE_DIR}/../cmake/RuntimeXex.cmake")
target_link_libraries(SonicGenerationsRecompCore PUBLIC SonicRuntimeXex)
