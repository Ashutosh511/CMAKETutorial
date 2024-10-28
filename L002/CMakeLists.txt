cmake_minimum_required(VERSION 3.20)

project(hello 
    VERSION 0.0.1
    DESCRIPTION "Basic Setup for cmake"
    LANGUAGES CXX)

add_executable(${PROJECT_NAME} main.cpp)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)