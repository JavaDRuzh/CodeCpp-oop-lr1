cmake_minimum_required(VERSION 3.7)
project(CodeCpp_oop_lr1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Complex.cpp Complex.h ComplexCout.cpp)
add_executable(CodeCpp_oop_lr1 ${SOURCE_FILES} Complex.h)