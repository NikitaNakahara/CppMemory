cmake_minimum_required(VERSION 3.12)

set(LIB_NAME CppMemory)

project(${LIB_NAME})


set(INCLDUES
	include/CppMemory/Memory.hpp)

add_library(${LIB_NAME} STATIC ${INCLUDES})
target_include_directories(${LIB_NAME} PUBLIC include)