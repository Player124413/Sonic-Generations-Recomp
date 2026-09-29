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

add_executable(rex_host_contract_tests tests/host_contract_tests.cpp)
target_include_directories(rex_host_contract_tests PRIVATE src)
target_link_libraries(rex_host_contract_tests PRIVATE rex::runtime)
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
target_link_libraries(rex_gpu_hook_tests PRIVATE sonic_rex_capture rex::runtime)
rexglue_apply_target_settings(rex_gpu_hook_tests)
# Both tests share the Release output directory; let one target stage SDK DLLs
# to avoid concurrent writes of the same DLL from two post-build commands.
add_dependencies(rex_gpu_hook_tests rex_host_contract_tests)
add_test(NAME rex_gpu_hooks COMMAND rex_gpu_hook_tests)

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
    # Fail quickly on host API / generated ABI mismatch, before the large PPC build.
    add_library(sonic_rex_api_probe OBJECT EXCLUDE_FROM_ALL
        src/main.cpp src/gpu_hooks.cpp "${SONIC_REX_GENERATED_DIR}/sonicgenerations_recomp.0.cpp")
    target_include_directories(sonic_rex_api_probe PRIVATE src "${SONIC_REX_GENERATED_DIR}")
    target_link_libraries(sonic_rex_api_probe PRIVATE rex::runtime)
    target_compile_definitions(sonic_rex_api_probe PRIVATE SONIC_REX_NATIVE_RENDERER=1)
    rexglue_apply_target_settings(sonic_rex_api_probe)
    if(MSVC)
        target_compile_options(sonic_rex_api_probe PRIVATE /EHa)
    else()
        target_compile_options(sonic_rex_api_probe PRIVATE -fasync-exceptions)
    endif()
    add_library(sonic_rex_ppc OBJECT ${GENERATED_SOURCES})
    target_include_directories(sonic_rex_ppc PRIVATE "${SONIC_REX_GENERATED_DIR}")
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
    add_executable(SonicGenerationsRecomp-ReXGlue WIN32 src/main.cpp src/gpu_hooks.cpp)
    target_include_directories(SonicGenerationsRecomp-ReXGlue PRIVATE src "${SONIC_REX_GENERATED_DIR}")
    target_link_libraries(SonicGenerationsRecomp-ReXGlue PRIVATE sonic_rex_ppc sonic_rex_math sonic_rex_capture rex::runtime)
    target_compile_definitions(SonicGenerationsRecomp-ReXGlue PRIVATE SONIC_REX_NATIVE_RENDERER=1)
    target_link_libraries(SonicGenerationsRecomp-ReXGlue PRIVATE sonic_rex_native)
    rexglue_configure_target(SonicGenerationsRecomp-ReXGlue GPU_PLUGINS xenos)
endif()
