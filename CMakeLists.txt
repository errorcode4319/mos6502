cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_FLAGS "-std=c++17 -stdlib=libc++")

project(mos6502)

file(GLOB_RECURSE SRC 
    "./src/**.cpp" 
    "./src/**.hpp"
)

add_executable(mos6502 ${SRC})
