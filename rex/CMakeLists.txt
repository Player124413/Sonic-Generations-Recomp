cmake_minimum_required(VERSION 3.25)
project(SonicGenerationsReXHost LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT WIN32)
    message(FATAL_ERROR "This migration target currently supports Windows x64 only.")
endif()
if(NOT CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    message(FATAL_ERROR "Use Clang/ClangCL with the pinned ReXGlue SDK.")
endif()
find_package(rexglue 0.10.0 EXACT CONFIG REQUIRED)
if(NOT REXGLUE_USE_VULKAN)
    message(FATAL_ERROR "This SDK has no Vulkan backend. Build pinned ReXGlue with REXGLUE_USE_VULKAN=ON and REXGLUE_USE_D3D12=OFF; the official Windows 0.10.0 ZIP is D3D12-only.")
endif()
enable_testing()

add_library(sonic_rex_math STATIC src/roundeven.cpp)
target_include_directories(sonic_rex_math PUBLIC src)
add_executable(rex_roundeven_tests tests/roundeven_tests.cpp)
target_link_libraries(rex_roundeven_tests PRIVATE sonic_rex_math)
add_test(NAME rex_roundeven COMMAND rex_roundeven_tests)

add_library(sonic_rex_capture STATIC src/gpu_capture.cpp)
target_include_directories(sonic_rex_capture PUBLIC src)
add_executable(rex_gpu_capture_tests tests/gpu_capture_tests.cpp)
target_link_libraries(rex_gpu_capture_tests PRIVATE sonic_rex_capture)
add_test(NAME rex_gpu_capture COMMAND rex_gpu_capture_tests)

# Our own Xenos-free command-stream front end. No SDK graphics code: this is the
# first module of the renderer that is meant to replace the Xenos plugin.
add_library(sonic_rex_pm4 STATIC src/pm4.cpp)
target_include_directories(sonic_rex_pm4 PUBLIC src)
target_compile_features(sonic_rex_pm4 PUBLIC cxx_std_20)
add_executable(rex_pm4_tests tests/pm4_tests.cpp)
target_link_libraries(rex_pm4_tests PRIVATE sonic_rex_pm4)
add_test(NAME rex_pm4 COMMAND rex_pm4_tests)

# Our own GPU device: register file, ring buffer, read-pointer writeback, swap
# token handling. This is the piece that has to exist before the Xenos plugin can
# be removed from the build, so it must not depend on any SDK graphics code.
add_library(sonic_rex_gpu_device STATIC
    src/gpu_native/register_file.cpp
    src/gpu_native/render_state.cpp
    src/gpu_native/command_processor.cpp
    src/gpu_native/stream_dump.cpp
    src/gpu_native/memory_image.cpp
    src/gpu_native/memory_sidecar.cpp
    src/gpu_native/replay.cpp)
target_include_directories(sonic_rex_gpu_device PUBLIC src)
target_compile_features(sonic_rex_gpu_device PUBLIC cxx_std_20)
target_link_libraries(sonic_rex_gpu_device PUBLIC sonic_rex_pm4)
add_executable(rex_gpu_device_tests tests/gpu_device_tests.cpp)
target_link_libraries(rex_gpu_device_tests PRIVATE sonic_rex_gpu_device)
add_test(NAME rex_gpu_device COMMAND rex_gpu_device_tests)

# The command-stream recorder: the only component that sees the real ring buffer,
# and therefore the only way renderer development gets real packets.
add_executable(rex_stream_dump_tests tests/stream_dump_tests.cpp)
target_link_libraries(rex_stream_dump_tests PRIVATE sonic_rex_gpu_device)
add_test(NAME rex_stream_dump COMMAND rex_stream_dump_tests)

# The state and geometry feed: constant blocks, draws, shader uploads and guest
# memory writes decoded from packet payloads the real D3D driver produces.
add_executable(rex_render_state_tests tests/render_state_tests.cpp)
target_link_libraries(rex_render_state_tests PRIVATE sonic_rex_gpu_device)
add_test(NAME rex_render_state COMMAND rex_render_state_tests)

# Offline replay: a recording (raw ring bytes + the guest-memory regions the
# stream reads) re-decoded by the same device that runs in the game, with no SDK,
# no GPU and no game. This is how the renderer is developed against real data.
add_executable(rex_replay_tests tests/replay_tests.cpp)
target_link_libraries(rex_replay_tests PRIVATE sonic_rex_gpu_device)
add_test(NAME rex_replay COMMAND rex_replay_tests)

# The tool the Windows package ships, so a recorded run can be re-decoded next to
# the game without a compiler: assets/rex-cache/gpu-dump -> replay-report.txt.
add_executable(rex_gpu_replay tools/replay.cpp)
target_link_libraries(rex_gpu_replay PRIVATE sonic_rex_gpu_device)

# Host-side policy that talks to the SDK cvar registry (keyboard defaults).
add_library(sonic_rex_host_policy STATIC src/input_defaults.cpp)
target_include_directories(sonic_rex_host_policy PUBLIC src)
target_link_libraries(sonic_rex_host_policy PUBLIC rex::runtime)
rexglue_apply_target_settings(sonic_rex_host_policy)

add_executable(rex_host_contract_tests tests/host_contract_tests.cpp)
target_include_directories(rex_host_contract_tests PRIVATE src)
target_link_libraries(rex_host_contract_tests PRIVATE rex::runtime sonic_rex_host_policy)
rexglue_apply_target_settings(rex_host_contract_tests)
add_custom_command(TARGET rex_host_contract_tests POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_RUNTIME_DLLS:rex_host_contract_tests> $<TARGET_FILE_DIR:rex_host_contract_tests>
    COMMAND_EXPAND_LISTS VERBATIM)
add_test(NAME rex_host_contract COMMAND rex_host_contract_tests)

# This is a real DLL factory test, unlike the fake-backend interface contracts.
# Construction does not initialize a Vulkan device, so CI needs no physical GPU.
add_executable(rex_vulkan_plugin_tests tests/vulkan_plugin_tests.cpp)
target_link_libraries(rex_vulkan_plugin_tests PRIVATE rex::runtime)
rexglue_apply_target_settings(rex_vulkan_plugin_tests)
add_dependencies(rex_vulkan_plugin_tests rex_host_contract_tests)
add_custom_command(TARGET rex_vulkan_plugin_tests POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:rex::gpu-xenos> $<TARGET_FILE_DIR:rex_vulkan_plugin_tests>
    VERBATIM)
add_test(NAME rex_vulkan_plugin COMMAND rex_vulkan_plugin_tests)
add_executable(windows_crash_trace tests/windows_crash_trace.cpp)
target_link_libraries(windows_crash_trace PRIVATE dbghelp)


# Link the actual SDK hook translation unit against test originals before the
# multi-minute PPC build. This catches hook API and missing-symbol regressions.
add_executable(rex_gpu_hook_tests tests/gpu_hook_tests.cpp src/gpu_hooks.cpp)
target_link_libraries(rex_gpu_hook_tests PRIVATE sonic_rex_capture sonic_rex_pm4 rex::runtime)
rexglue_apply_target_settings(rex_gpu_hook_tests)
# Both tests share the Release output directory; let one target stage SDK DLLs
# to avoid concurrent writes of the same DLL from two post-build commands.
add_dependencies(rex_gpu_hook_tests rex_host_contract_tests)
add_test(NAME rex_gpu_hooks COMMAND rex_gpu_hook_tests)

# Presentation arithmetic of our own Vulkan presenter (letterbox, swapchain
# extent, image count, front buffer bounds). Header-only and GPU-free on purpose:
# this is what CI can check on every push, and it needs no window.
add_executable(rex_presenter_logic_tests tests/presenter_logic_tests.cpp)
target_include_directories(rex_presenter_logic_tests PRIVATE "${CMAKE_CURRENT_LIST_DIR}/plugins/native/src")
target_compile_features(rex_presenter_logic_tests PRIVATE cxx_std_20)
add_test(NAME rex_presenter_logic COMMAND rex_presenter_logic_tests)

# Our own GPU plugin (rexgpu-native). Off by default: it is the replacement for
# the SDK's Xenos plugin and is still being written, so the game host keeps
# loading Xenos until it is finished and verified.
set(SONIC_REX_GPU_PLUGINS "xenos" CACHE STRING
    "GPU plugins the game host loads: xenos (SDK reference) or native (ours)")
option(SONIC_REX_BUILD_NATIVE_PLUGIN "Build our own rexgpu-native GPU plugin" OFF)
if(SONIC_REX_BUILD_NATIVE_PLUGIN)
    add_subdirectory(plugins/native)
    if(NOT TARGET rexgpu-native)
        message(FATAL_ERROR "rexgpu-native target was not created")
    endif()
endif()

include("${CMAKE_CURRENT_LIST_DIR}/../cmake/GpuResources.cmake")
add_library(sonic_rex_native_core STATIC
    src/native_gpu_bridge.cpp
    ../SonicGenerationsRecomp/gpu/native_commands.cpp
    ../SonicGenerationsRecomp/gpu/native_resources.cpp)
target_include_directories(sonic_rex_native_core PUBLIC src)
target_link_libraries(sonic_rex_native_core PUBLIC SonicGpuResources)
add_executable(rex_native_bridge_tests tests/native_bridge_tests.cpp)
target_link_libraries(rex_native_bridge_tests PRIVATE sonic_rex_native_core)
add_test(NAME rex_native_bridge COMMAND rex_native_bridge_tests)

# What the translator promises about guest render targets -- a multisampled target
# is drawn once per pixel, a format without an image here is drawn as RGBA8, an
# undefined sample count is refused -- and what it then reports about each. Both
# are decisions rather than plumbing, so both are checked without a GPU, in every
# contract build.
add_executable(rex_native_surface_policy_tests tests/native_surface_policy_tests.cpp)
target_compile_features(rex_native_surface_policy_tests PRIVATE cxx_std_20)
target_link_libraries(rex_native_surface_policy_tests PRIVATE SonicGpuResources)
add_test(NAME rex_native_surface_policy COMMAND rex_native_surface_policy_tests)

option(SONIC_REX_BUILD_GAME "Build the actual game host from external ReXGlue-generated PPC" OFF)
set(SONIC_REX_GENERATED_DIR "" CACHE PATH "Directory containing sonicgenerations_init.h and sources.cmake")
if(SONIC_REX_BUILD_GAME)
    set(SONIC_VULKAN_HEADLESS ON CACHE BOOL "ReXGlue owns SDL3; native replay uses offscreen Vulkan" FORCE)
    include("${CMAKE_CURRENT_LIST_DIR}/../cmake/VulkanHost.cmake")
    add_library(sonic_rex_native STATIC src/native_gpu.cpp)
    target_link_libraries(sonic_rex_native PUBLIC sonic_rex_native_core sonic_rex_capture SonicVulkanHost)
    target_compile_definitions(sonic_rex_native PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
    add_executable(rex_native_backend_link_test tests/native_backend_link_test.cpp)
    target_link_libraries(rex_native_backend_link_test PRIVATE sonic_rex_native)
    add_test(NAME rex_native_backend_link COMMAND rex_native_backend_link_test)
    if(NOT EXISTS "${SONIC_REX_GENERATED_DIR}/sources.cmake" OR
       NOT EXISTS "${SONIC_REX_GENERATED_DIR}/sonicgenerations_init.h")
        message(FATAL_ERROR "Provide ReXGlue-generated Sonic PPC via SONIC_REX_GENERATED_DIR; legacy ppc/ has a different ABI.")
    endif()
    include("${SONIC_REX_GENERATED_DIR}/sources.cmake")
    if(NOT GENERATED_SOURCES)
        message(FATAL_ERROR "Empty generated source inventory")
    endif()
    # Recover audited entry thunks, never the legacy runtime or arbitrary missing code.
    find_package(Python3 REQUIRED COMPONENTS Interpreter)
    set(ENTRY_RECOVERY_DIR "${CMAKE_CURRENT_BINARY_DIR}/entry-recovery")
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_LIST_DIR}/tools/recover_guest_entries.py")
    execute_process(COMMAND "${Python3_EXECUTABLE}"
        "${CMAKE_CURRENT_LIST_DIR}/tools/recover_guest_entries.py"
        --legacy-root "${CMAKE_CURRENT_LIST_DIR}/../ppc"
        --generated-dir "${SONIC_REX_GENERATED_DIR}"
        --output-dir "${ENTRY_RECOVERY_DIR}"
        RESULT_VARIABLE ENTRY_RECOVERY_RESULT)
    if(NOT ENTRY_RECOVERY_RESULT EQUAL 0)
        message(FATAL_ERROR "Guest entry inventory audit failed")
    endif()
    list(LENGTH GENERATED_SOURCES ENTRY_SOURCE_COUNT_BEFORE)
    list(REMOVE_ITEM GENERATED_SOURCES
        "${SONIC_REX_GENERATED_DIR}/sonicgenerations_init.cpp"
        "${SONIC_REX_GENERATED_DIR}/sonicgenerations_register.cpp")
    list(LENGTH GENERATED_SOURCES ENTRY_SOURCE_COUNT_AFTER)
    math(EXPR ENTRY_SOURCE_COUNT_EXPECTED "${ENTRY_SOURCE_COUNT_BEFORE} - 2")
    if(NOT ENTRY_SOURCE_COUNT_AFTER EQUAL ENTRY_SOURCE_COUNT_EXPECTED)
        message(FATAL_ERROR "Expected exactly two generated registration sources to replace")
    endif()
    list(APPEND GENERATED_SOURCES
        "${ENTRY_RECOVERY_DIR}/sonicgenerations_init.cpp"
        "${ENTRY_RECOVERY_DIR}/sonicgenerations_register.cpp"
        "${ENTRY_RECOVERY_DIR}/guest_entry_recovery.cpp")
    add_executable(rex_guest_entry_recovery_tests
        "${ENTRY_RECOVERY_DIR}/guest_entry_recovery.cpp"
        "${ENTRY_RECOVERY_DIR}/guest_entry_recovery_tests.cpp")
    target_include_directories(rex_guest_entry_recovery_tests PRIVATE "${SONIC_REX_GENERATED_DIR}" "${ENTRY_RECOVERY_DIR}")
    target_link_libraries(rex_guest_entry_recovery_tests PRIVATE rex::runtime)
    rexglue_apply_target_settings(rex_guest_entry_recovery_tests)
    add_dependencies(rex_guest_entry_recovery_tests rex_host_contract_tests)
    add_test(NAME rex_guest_entry_recovery COMMAND rex_guest_entry_recovery_tests)
    # Fail quickly on host API / generated ABI mismatch, before the large PPC build.
    add_library(sonic_rex_api_probe OBJECT EXCLUDE_FROM_ALL
        src/main.cpp src/gpu_hooks.cpp "${SONIC_REX_GENERATED_DIR}/sonicgenerations_recomp.0.cpp")
    target_include_directories(sonic_rex_api_probe PRIVATE src "${SONIC_REX_GENERATED_DIR}")
    target_link_libraries(sonic_rex_api_probe PRIVATE sonic_rex_pm4 rex::runtime)
    target_compile_definitions(sonic_rex_api_probe PRIVATE SONIC_REX_NATIVE_RENDERER=1)
    rexglue_apply_target_settings(sonic_rex_api_probe)
    if(MSVC)
        target_compile_options(sonic_rex_api_probe PRIVATE /EHa)
    else()
        target_compile_options(sonic_rex_api_probe PRIVATE -fasync-exceptions)
    endif()
    add_library(sonic_rex_ppc OBJECT ${GENERATED_SOURCES})
    target_include_directories(sonic_rex_ppc PRIVATE "${SONIC_REX_GENERATED_DIR}" "${ENTRY_RECOVERY_DIR}")
    target_link_libraries(sonic_rex_ppc PRIVATE rex::runtime)
    rexglue_apply_target_settings(sonic_rex_ppc)
    # Generated dead labels / release-only lock counters are noisy, not errors.
    target_compile_options(sonic_rex_ppc PRIVATE -Wno-unused-label -Wno-unused-variable)
    if(MSVC)
        target_compile_options(sonic_rex_ppc PRIVATE /EHa)
    else()
        target_compile_options(sonic_rex_ppc PRIVATE -fasync-exceptions)
    endif()
    target_precompile_headers(sonic_rex_ppc PRIVATE "${SONIC_REX_GENERATED_DIR}/sonicgenerations_pch.h")
    # The presenter is part of the host, not of the GPU plugin: in translate mode
    # the app attaches our presenter to the window while the SDK keeps running the
    # guest GPU device services.
    add_executable(SonicGenerationsRecomp-ReXGlue WIN32 src/main.cpp src/gpu_hooks.cpp
        src/translate_presenter.cpp)
    target_include_directories(SonicGenerationsRecomp-ReXGlue PRIVATE src "${SONIC_REX_GENERATED_DIR}")
    target_link_libraries(SonicGenerationsRecomp-ReXGlue PRIVATE sonic_rex_ppc sonic_rex_math sonic_rex_capture sonic_rex_pm4 sonic_rex_host_policy rex::runtime)
    target_compile_definitions(SonicGenerationsRecomp-ReXGlue PRIVATE SONIC_REX_NATIVE_RENDERER=1)
    target_link_libraries(SonicGenerationsRecomp-ReXGlue PRIVATE sonic_rex_native)
    rexglue_configure_target(SonicGenerationsRecomp-ReXGlue GPU_PLUGINS ${SONIC_REX_GPU_PLUGINS})
endif()
