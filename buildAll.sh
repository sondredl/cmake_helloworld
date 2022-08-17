#!/bin/bash

cmake . -B build -GNinja 		# builds .o files in build/
cmake --build build --config Release 	# compiles .o files in build/ to specified folder in CMakeLists

./o/main.exe


