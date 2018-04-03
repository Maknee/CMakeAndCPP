cmake_minimum_required(VERSION 3.5)

set(cdir ${CMAKE_SOURCE_DIR})
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(libs)

add_executable(libs ${cdir}/src/helloworld.cpp)

target_link_libraries(libs
	PRIVATE
	helloworld_lib1
	helloworld_lib2
	)

add_library(helloworld_lib1
	STATIC
	${cdir}/src/lib1.cpp
	)

target_include_directories(helloworld_lib1
	PUBLIC
	${cdir}/include
	)

add_library(helloworld_lib2
	SHARED
	${cdir}/src/lib2.cpp
	)

target_include_directories(helloworld_lib2
	PUBLIC
	${cdir}/include
	)

