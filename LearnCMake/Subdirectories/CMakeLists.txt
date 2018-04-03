cmake_minimum_required(VERSION 3.5)

set(cdir ${CMAKE_SOURCE_DIR})
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(subdirectories)

add_subdirectory(helloworld)
add_subdirectory(lib1)
add_subdirectory(lib2)

