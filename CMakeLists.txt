cmake_minimum_required(VERSION 3.10)
project(kcpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/headers)

file(GLOB APP_SOURCES "${PROJECT_SOURCE_DIR}/src/*.cc")

foreach(SRC_FILE ${APP_SOURCES})
    file(READ ${SRC_FILE} CONTENTS)
    if(CONTENTS MATCHES "int main")
        get_filename_component(EXE_NAME ${SRC_FILE} NAME_WE)
        add_executable(${EXE_NAME} ${SRC_FILE})
        message(STATUS "Dodaję executable: ${EXE_NAME}")
    endif()
endforeach()
