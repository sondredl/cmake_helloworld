Rem rm -rf build

set cmake_build_path="build"
cd %cmake_build_path%

Rem set build_dir=%build%
set cmakelists_relative_path="../CMakeLists.txt"
set compilation_release_path="../o/Release/"

Rem cmake ../CMakeLists.txt
cmake %cmakelists_relative_path%
cmake --build . --config Release

cd %compilation_release_path%

main.exe

pause