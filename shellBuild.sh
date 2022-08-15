#!/bin/bash

# ./buildAll.bat

cd build/
#cd build

cmake ../CMakeLists.txt
cmake --build . --config Release

cd ../o/Release/

./arithmetics.exe