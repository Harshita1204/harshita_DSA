@echo off
cd /d "%~dp0"
"C:/msys64/ucrt64/bin/g++.exe" -std=c++17 -g "prepNotes\01.cpp" -o "build\01.exe"
if %ERRORLEVEL% NEQ 0 exit /b %ERRORLEVEL%
"build\01.exe"
