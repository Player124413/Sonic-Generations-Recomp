# Our own GPU plugin.
#
# The runtime loads it by name (`rexgpu-native` next to the executable), so the
# target name matters: rexglue_configure_target(<app> GPU_PLUGINS native) looks
# for exactly `rexgpu-native` in the tree and copies its DLL next to the app.
# It is off by default because it only builds against the pinned SDK and its
# renderer is still being written; turn SONIC_REX_BUILD_NATIVE_PLUGIN on to get
# the DLL, and SONIC_REX_GPU_PLUGINS=native to have the game host load it instead
# of the SDK's Xenos plugin.
include_guard(GLOBAL)

# Vulkan headers only: the plugin resolves vulkan-1.dll itself through its own
# entry-point table, so it needs no import library and no Vulkan SDK.
if(NOT TARGET Vulkan::Headers)
    find_package(Vulkan REQUIRED)
endif()

add_library(rexgpu-native SHARED
    src/plugin_main.cpp
    src/native_graphics_system.cpp
    src/native_frame_source.cpp
    src/native_vulkan_api.cpp
    src/native_vulkan_core.cpp
    src/native_vulkan_presenter.cpp
    src/sdk_guest_memory.cpp)
target_include_directories(rexgpu-native PRIVATE src)
target_compile_features(rexgpu-native PRIVATE cxx_std_20)
target_link_libraries(rexgpu-native PRIVATE sonic_rex_gpu_device rex::runtime Vulkan::Headers)
# No Vulkan loader and no import library: the plugin resolves vulkan-1.dll itself
# through the table in native_vulkan_api.h. Defining VK_NO_PROTOTYPES for every
# translation unit is what makes that a compile-time guarantee instead of a link
# error -- otherwise the Vulkan headers declare the entry points as imports and a
# stray call to one of them fails the link (undefined symbol vkGetInstanceProcAddr).
target_compile_definitions(rexgpu-native PRIVATE VK_NO_PROTOTYPES=1)

if(MSVC)
    target_compile_options(rexgpu-native PRIVATE /W4)
    target_compile_definitions(rexgpu-native PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
else()
    target_compile_options(rexgpu-native PRIVATE -Wall -Wextra)
endif()

# The loader looks for this exact file name, with no lib/cygwin decoration.
set_target_properties(rexgpu-native PROPERTIES OUTPUT_NAME "rexgpu-native" PREFIX "")
