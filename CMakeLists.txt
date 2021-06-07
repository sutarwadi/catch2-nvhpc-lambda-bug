cmake_minimum_required(VERSION 3.12)
project(nvhpc_unevaluated_lambda)

find_package(Catch2)
add_executable(test test.cpp)
target_link_libraries(test PRIVATE Catch2::Catch2)
