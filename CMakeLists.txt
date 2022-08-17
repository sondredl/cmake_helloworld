cmake_minimum_required(VERSION 3.1)

project(cppWithIdris)

add_executable(main source/main.cpp source/footballer.cpp)

set(PATH_TO_COMPILED_DIR "/o")
set(EXECUTABLE_OUTPUT_PATH ../o)