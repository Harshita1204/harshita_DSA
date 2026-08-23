@echo off
setlocal
cd /d "%~dp0"

if "%~1"=="" (
  set "SRC=prepNotes\01.cpp"
  set "OUT=build\01.exe"
) else (
  set "SRC=%~1"
  set "OUT=build\%~n1.exe"
)

if not exist "%SRC%" (
  echo File not found: %SRC%
  exit /b 1
)

if not exist "build" mkdir build

"C:/msys64/ucrt64/bin/g++.exe" -std=c++17 -g "%SRC%" -o "%OUT%"
if %ERRORLEVEL% NEQ 0 exit /b %ERRORLEVEL%

"%OUT%"
