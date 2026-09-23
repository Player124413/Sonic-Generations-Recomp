project("SonicGenerationsRecompTests")

add_executable(kernel_tests "kernel_tests.cpp" "runtime_globals.cpp")
target_link_libraries(kernel_tests PRIVATE SonicGenerationsRecompCore)
add_test(NAME kernel_tests COMMAND kernel_tests)

add_executable(import_link_test "import_link_test.cpp" "runtime_globals.cpp")
target_link_libraries(import_link_test PRIVATE SonicGenerationsRecompCore SonicGenerationsRecompLib)
add_test(NAME import_link_test COMMAND import_link_test)

find_package(Python3 COMPONENTS Interpreter REQUIRED)
add_test(NAME runtime_launcher_tests COMMAND "${Python3_EXECUTABLE}"
    "${CMAKE_CURRENT_SOURCE_DIR}/test_runtime_launcher.py")
