@echo off
g++ -o ./test_data ./test_data.cpp ./BaseData.cpp ./IntData.cpp ./DoubleData.cpp
dir *.exe
pause
