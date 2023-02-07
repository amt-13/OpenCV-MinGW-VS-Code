@echo off

cd %~dp0

set "CMakeExe="C:\Program Files\CMake\bin\cmake.exe""
set "CodeDir=Source\src"
set "BuildDir=build"

%CMakeExe% %CodeDir% -B %BuildDir% -G Ninja -DCMAKE_BUILD_TYPE=Release

%CMakeExe% --build