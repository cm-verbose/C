@echo off

cd src
set /p input="run a .C file: "
gcc %input%.c -o bin/%input%
cd bin
%input%
cd ..
cd ..