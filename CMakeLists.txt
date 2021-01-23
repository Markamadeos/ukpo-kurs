cmake_minimum_required(VERSION 3.16)
project(ukpo-kurs)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(
        ${CMAKE_CURRENT_SOURCE_DIR}/gtest
        googletest
)

add_executable(
        tests
        test/tests.cpp
        )


target_link_libraries(
        tests
        gtest gtest_main
)

