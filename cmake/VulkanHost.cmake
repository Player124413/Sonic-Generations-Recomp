include_guard(GLOBAL)
find_package(Vulkan REQUIRED)
option(SONIC_VULKAN_HEADLESS "Build Vulkan backend without SDL WSI" OFF)
if(NOT SONIC_VULKAN_HEADLESS)
    find_package(SDL2 REQUIRED)
endif()
set(_vulkan_root "${CMAKE_CURRENT_LIST_DIR}/..")
add_library(SonicVulkanHost STATIC
    "${_vulkan_root}/SonicGenerationsRecomp/gpu/vulkan_host.cpp"
    "${_vulkan_root}/SonicGenerationsRecomp/gpu/vulkan_state.cpp"
    "${_vulkan_root}/SonicGenerationsRecomp/gpu/vulkan_backend.cpp"
    "${_vulkan_root}/SonicGenerationsRecomp/gpu/native_frame.cpp")
target_compile_features(SonicVulkanHost PUBLIC cxx_std_20)
if(WIN32)
    # The game host lets ReXGlue own the window, so the backend builds its own
    # Win32 surface from the HWND instead of asking SDL for one. Defined for the
    # translation units of this target only: vulkan_win32.h needs windows.h
    # included first, which vulkan_backend.cpp does.
    target_compile_definitions(SonicVulkanHost PRIVATE VK_USE_PLATFORM_WIN32_KHR=1)
endif()
target_include_directories(SonicVulkanHost PUBLIC "${_vulkan_root}/SonicGenerationsRecomp")
target_link_libraries(SonicVulkanHost PUBLIC Vulkan::Vulkan)
if(SONIC_VULKAN_HEADLESS)
    target_compile_definitions(SonicVulkanHost PRIVATE SONIC_VULKAN_HEADLESS=1)
else()
    target_link_libraries(SonicVulkanHost PUBLIC SDL2::SDL2)
endif()

include("${CMAKE_CURRENT_LIST_DIR}/GpuResources.cmake")
target_link_libraries(SonicVulkanHost PUBLIC SonicGpuResources)

include("${CMAKE_CURRENT_LIST_DIR}/ShaderCache.cmake")
target_link_libraries(SonicVulkanHost PUBLIC SonicShaderCache)
