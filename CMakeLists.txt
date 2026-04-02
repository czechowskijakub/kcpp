cmake_minimum_required(VERSION 3.10)
project(kcpp)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) 
include_directories(headers)

file(GLOB SOURCES "src/*.cc")
add_executable(program ${SOURCES})