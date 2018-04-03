cmake_minimum_required(VERSION 3.5)

project(lib2)

add_library(${PROJECT_NAME}
	SHARED
	${PROJECT_SOURCE_DIR}/src/lib2.cpp
	)
add_library(sub::lib2 ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
	PUBLIC
	${PROJECT_SOURCE_DIR}/include
	)
