cmake_minimum_required(VERSION 3.5)

project(libs)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/helloworld.cpp)

target_link_libraries(libs
	PRIVATE
	sub::lib1
	sub::lib2
	)

