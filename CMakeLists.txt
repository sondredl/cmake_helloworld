cmake_minimum_required(VERSION 3.1)

project(cppWithIdris)

# add_library(
    # obstacle_detection
    # headers/obstacle_detection.hpp
    # sources/obstacle_detection.cpp
    # source/header.h
    # source/arithmetics.h
    # source/source.cpp

# )

add_executable(main source/main.cpp)

set(PATH_TO_COMPILED_DIR "/o")
set(EXECUTABLE_OUTPUT_PATH ../o)