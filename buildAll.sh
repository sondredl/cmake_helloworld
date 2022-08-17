#!/bin/bash

rm -rf build
mkdir build
cd build/

cmake ../CMakeLists.txt
cmake --build . --config Release

cd ../o/Release/

./main.exe


