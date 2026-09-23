cmake_minimum_required(VERSION 3.20)
project(GuestGpuHookTests LANGUAGES CXX)
enable_testing()
find_package(Threads REQUIRED)
set(ROOT "${CMAKE_CURRENT_LIST_DIR}/../..")
add_library(gpu_hooks STATIC
    "${ROOT}/SonicGenerationsRecomp/gpu/guest_hooks.cpp"
    "${ROOT}/SonicGenerationsRecomp/gpu/native_commands.cpp"
    "${ROOT}/SonicGenerationsRecomp/gpu/native_resources.cpp")
target_compile_features(gpu_hooks PUBLIC cxx_std_20)
target_include_directories(gpu_hooks PUBLIC
    "${ROOT}" "${ROOT}/SonicGenerationsRecomp"
    "${ROOT}/tools/XenonRecomp/thirdparty/simde")
add_library(mock_generated STATIC mock_originals.cpp)
target_link_libraries(mock_generated PRIVATE gpu_hooks)
add_executable(guest_hooks_tests guest_hooks_tests.cpp)
target_link_libraries(guest_hooks_tests PRIVATE gpu_hooks mock_generated Threads::Threads)
add_test(NAME guest_hooks_tests COMMAND guest_hooks_tests)
find_package(Python3 REQUIRED COMPONENTS Interpreter)
add_test(NAME guest_entry_evidence
    COMMAND "${Python3_EXECUTABLE}" "${CMAKE_CURRENT_LIST_DIR}/test_entry_evidence.py")
add_executable(native_commands_tests native_commands_tests.cpp)
target_link_libraries(native_commands_tests PRIVATE gpu_hooks Threads::Threads)
add_test(NAME native_commands_tests COMMAND native_commands_tests)
# Differential oracle is extracted from real generated code at build time.
set(STATE_ORIGINALS "${CMAKE_CURRENT_BINARY_DIR}/state_originals.cpp")
add_custom_command(OUTPUT "${STATE_ORIGINALS}"
    COMMAND "${Python3_EXECUTABLE}" "${CMAKE_CURRENT_LIST_DIR}/extract_state_originals.py" "${STATE_ORIGINALS}"
    DEPENDS extract_state_originals.py
        "${ROOT}/SonicGenerationsRecomp/gpu/state_dispatch.inc"
        "${ROOT}/SonicGenerationsRecomp/gpu/sampler_dispatch.inc"
        "${ROOT}/ppc/ppc_recomp.270.cpp" "${ROOT}/ppc/ppc_recomp.271.cpp" "${ROOT}/ppc/ppc_recomp.272.cpp"
    VERBATIM)
add_library(state_replacements STATIC "${ROOT}/SonicGenerationsRecomp/gpu/state_dispatch.cpp")
target_link_libraries(state_replacements PUBLIC gpu_hooks)
add_executable(state_dispatch_tests state_dispatch_tests.cpp "${STATE_ORIGINALS}")
target_link_libraries(state_dispatch_tests PRIVATE state_replacements)
add_test(NAME state_dispatch_tests COMMAND state_dispatch_tests)
add_library(state_tables STATIC "${ROOT}/SonicGenerationsRecomp/gpu/state_tables.cpp")
target_link_libraries(state_tables PUBLIC gpu_hooks)
add_executable(state_tables_tests state_tables_tests.cpp)
target_link_libraries(state_tables_tests PRIVATE state_tables)
add_test(NAME state_tables_tests COMMAND state_tables_tests)
add_executable(state_table_hook_tests state_table_hook_tests.cpp
    "${ROOT}/SonicGenerationsRecomp/gpu/state_table_hook.cpp")
target_link_libraries(state_table_hook_tests PRIVATE state_tables)
add_test(NAME state_table_hook_tests COMMAND state_table_hook_tests)

include("${ROOT}/cmake/GpuResources.cmake")
target_link_libraries(gpu_hooks PUBLIC SonicGpuResources)
add_executable(resource_conversion_tests resource_conversion_tests.cpp)
target_link_libraries(resource_conversion_tests PRIVATE gpu_hooks)
add_test(NAME resource_conversion_tests COMMAND resource_conversion_tests)
add_executable(shader_bindings_tests shader_bindings_tests.cpp)
target_include_directories(shader_bindings_tests PRIVATE "${ROOT}/tools/XenosRecomp/thirdparty/xxHash")
target_link_libraries(shader_bindings_tests PRIVATE gpu_hooks)
add_test(NAME shader_bindings_tests COMMAND shader_bindings_tests)
