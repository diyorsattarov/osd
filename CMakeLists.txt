cmake_minimum_required(VERSION 3.10)

project(cpp-cmake-template)

set(SOURCES
    src/bar/bar.cpp
    src/foo/foo.cpp
)

#add_executable(cpp-cmake-template ${SOURCES})

#target_include_directories(cpp-cmake-template PRIVATE src include)

add_executable(tests
    tests/bar/test_bar.cpp
    tests/foo/test_foo.cpp
)

find_package(GTest REQUIRED)
target_include_directories(tests PRIVATE ${GTEST_INCLUDE_DIRS} src include)

target_link_libraries(tests PRIVATE ${GTEST_BOTH_LIBRARIES} pthread)

add_custom_target(run_tests COMMAND tests)