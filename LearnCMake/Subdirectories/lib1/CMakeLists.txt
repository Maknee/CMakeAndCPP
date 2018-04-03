cmake_minimum_required(VERSION 3.5)

project(lib1)

add_library(${PROJECT_NAME}
	STATIC
	${PROJECT_SOURCE_DIR}/src/lib1.cpp
	)
add_library(sub::lib1 ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
	PUBLIC
	${PROJECT_SOURCE_DIR}/include
	)
