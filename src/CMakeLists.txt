cmake_minimum_required(VERSION 3.13)  # CMake version check
project(calculator)                   # Create project "calculator"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add executable target with source files 
add_executable(calculator 
Main.cpp
)