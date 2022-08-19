#!/bin/bash

rm o/main.exe

cmake . -B build -GNinja 		        # builds .o files in build/
cmake --build build --config Release 	# compiles .o files in build/ to specified folder in CMakeLists

#doxygen doxyConfig


./o/main.exe


