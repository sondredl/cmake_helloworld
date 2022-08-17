#!/bin/bash

rm -rf build
rm o/Release/main.exe
mkdir build
cd build/

cmake ../CMakeLists.txt
cmake --build . --config Release

cd ../o/Release/

./main.exe


