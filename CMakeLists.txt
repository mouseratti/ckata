cmake_minimum_required(VERSION 3.17)
project(ckata)

set(CMAKE_CXX_STANDARD 20)

add_executable(ckata src/main.cpp src/pointers/entripoint.cpp src/practice.h src/practice.cpp src/functions/1/functions.cpp src/functions/1/functions.h)

add_executable(exceptions src/exceptions/entrypoint.cpp)
add_executable(bublesort src/bublesort/entrypoint.cpp src/bublesort/sorter)
add_executable(dynamic-arrays src/dynamic-arrays/entrypoint.cpp)
add_executable(structs src/structs/entrypoint.cpp)
add_executable(inverse-array src/inverse-array/entrypoint.cpp)
add_subdirectory(src/classes1)
add_subdirectory(src/single-number)