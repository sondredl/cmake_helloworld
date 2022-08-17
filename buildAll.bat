@ECHO OFF

echo Y | del build\*.* 
del o\Release\main.exe 

set cmake_build_path="build"
cd %cmake_build_path%

set cmakelists_path="../CMakeLists.txt"
set compilation_release_path="../o/Release/"

cmake %cmakelists_path%
cmake --build . --config Release

cd %compilation_release_path%

main.exe
