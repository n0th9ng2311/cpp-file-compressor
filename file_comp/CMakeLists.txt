cmake_minimum_required(VERSION 3.30)
project(file_comp)

set(CMAKE_CXX_STANDARD 20)

add_executable(file_comp
        src/main.cpp
        src/file_comp.cpp
        hdr/file_comp.h
        hdr/common.h)
