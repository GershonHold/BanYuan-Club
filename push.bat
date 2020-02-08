@echo off
set /p commit=commit:
title auto commit
E:\Git\bin\git.exe add .
E:\Git\bin\git.exe commit -m %commit%
E:\Git\bin\git.exe push
exit