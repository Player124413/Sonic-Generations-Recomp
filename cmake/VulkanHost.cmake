include_guard(GLOBAL)
find_package(Vulkan REQUIRED)
find_package(SDL2 REQUIRED)
set(_vulkan_root "${CMAKE_CURRENT_LIST_DIR}/..")
add_library(SonicVulkanHost STATIC
    "${_vulkan_root}/SonicGenerationsRecomp/gpu/vulkan_host.cpp"
    "${_vulkan_root}/SonicGenerationsRecomp/gpu/vulkan_state.cpp"
    "${_vulkan_root}/SonicGenerationsRecomp/gpu/vulkan_backend.cpp")
target_compile_features(SonicVulkanHost PUBLIC cxx_std_20)
target_include_directories(SonicVulkanHost PUBLIC "${_vulkan_root}/SonicGenerationsRecomp")
target_link_libraries(SonicVulkanHost PUBLIC Vulkan::Vulkan SDL2::SDL2)
