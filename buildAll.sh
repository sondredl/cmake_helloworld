#!/bin/bash

rm -rf build/*
#rm o/Release/main.exe
rm o/main.exe
#cd build/

#cmake ../CMakeLists.txt
cmake . -B build -GNinja 		# builds .o files in build/
cmake --build build --config Release 	# compiles .o files in build/ to specified folder in CMakeLists

#cd ../o/Release/

#./o/Release/main.exe
./o/main.exe


