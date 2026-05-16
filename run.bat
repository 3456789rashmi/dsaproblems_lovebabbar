@echo off
cd /d "%~dp1"
g++ -g "%~1" -o "%~n1.exe"
if %errorlevel% equ 0 (
    "%~n1.exe"
) else (
    echo Compilation failed
    pause
)
