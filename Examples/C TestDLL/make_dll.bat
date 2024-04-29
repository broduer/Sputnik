@echo off
..\..\lib\bin\\TCC\tcc -shared test.c
REM del ..\..\..\..\test.dll
REM copy test.dll ..\..\..\..\test.dll
pause