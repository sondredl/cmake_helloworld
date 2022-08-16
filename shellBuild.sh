#!/bin/bash

# ./buildAll.bat

rm -rf build
cd build/
#cd build

cmake ../CMakeLists.txt
cmake --build . --config Release

cd ../o/Release/

./main.exe


