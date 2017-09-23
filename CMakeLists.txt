# CMake entry point
cmake_minimum_required (VERSION 3.2)

project (CppExtensions)

add_library(CppExtensions INTERFACE)

target_sources(CppExtensions INTERFACE library/)

target_include_directories(CppExtensions INTERFACE library/)
