cmake_minimum_required(VERSION 3.6)
project(cExec)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES fileCharacterHistogram.c)
add_executable(cExec ${SOURCE_FILES})