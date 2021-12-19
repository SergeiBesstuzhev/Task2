cmake_minimum_required(VERSION 3.10.2)

add_executable(Operation
        main.cpp
        cpu.cpp
        ram.cpp
        disk.cpp
        gpu.cpp
        kbd.cpp)

target_include_directories(Operation PUBLIC ${MY_INCLUDE_DIR})