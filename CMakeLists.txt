cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(
    mos6502 
    VERSION 0.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libmos6502)