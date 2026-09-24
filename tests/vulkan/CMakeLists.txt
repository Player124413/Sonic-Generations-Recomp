cmake_minimum_required(VERSION 3.20)
project(VulkanHostTests LANGUAGES CXX)
enable_testing()
include(../../cmake/VulkanHost.cmake)
find_package(Threads REQUIRED)
add_executable(vulkan_host_tests vulkan_host_tests.cpp
    ../../SonicGenerationsRecomp/gpu/native_commands.cpp
    ../../SonicGenerationsRecomp/gpu/native_resources.cpp)
target_link_libraries(vulkan_host_tests PRIVATE Threads::Threads)
target_link_libraries(vulkan_host_tests PRIVATE SonicVulkanHost SonicShaderCodecs)
add_test(NAME vulkan_host_tests COMMAND vulkan_host_tests)
set_tests_properties(vulkan_host_tests PROPERTIES TIMEOUT 120)
add_test(NAME vulkan_wsi_tests COMMAND vulkan_host_tests --wsi)
set_tests_properties(vulkan_wsi_tests PROPERTIES TIMEOUT 120)
# Only the test profile needs these original fixture shaders. Runtime users
# provide compiled game shaders separately; no fallback shaders ship in runtime.
find_program(GLSLANG_VALIDATOR glslangValidator REQUIRED)
set(SHADER_OUTPUTS)
foreach(stage vert frag)
    set(output "${CMAKE_CURRENT_BINARY_DIR}/triangle.${stage}.spv")
    add_custom_command(OUTPUT "${output}"
        COMMAND "${GLSLANG_VALIDATOR}" -V --target-env vulkan1.0
            "${CMAKE_CURRENT_SOURCE_DIR}/shaders/triangle.${stage}" -o "${output}"
        DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/shaders/triangle.${stage}"
        VERBATIM)
    list(APPEND SHADER_OUTPUTS "${output}")
endforeach()
add_custom_target(vulkan_test_shaders DEPENDS ${SHADER_OUTPUTS})
add_dependencies(vulkan_host_tests vulkan_test_shaders)
target_compile_definitions(vulkan_host_tests PRIVATE
    VULKAN_TEST_SHADER_DIRECTORY="${CMAKE_CURRENT_BINARY_DIR}")
set(GAME_SHADER_OUTPUTS)
foreach(stage vert frag)
    set(output "${CMAKE_CURRENT_BINARY_DIR}/game_abi.${stage}.spv")
    add_custom_command(OUTPUT "${output}"
        COMMAND "${GLSLANG_VALIDATOR}" -V --target-env vulkan1.2
            "${CMAKE_CURRENT_SOURCE_DIR}/shaders/game_abi.${stage}" -o "${output}"
        DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/shaders/game_abi.${stage}" VERBATIM)
    list(APPEND GAME_SHADER_OUTPUTS "${output}")
endforeach()
add_custom_target(vulkan_game_abi_shaders DEPENDS ${GAME_SHADER_OUTPUTS})
add_dependencies(vulkan_host_tests vulkan_game_abi_shaders)
