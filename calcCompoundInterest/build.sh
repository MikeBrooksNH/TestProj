#!/bin/sh

#
# Compile code
#
gcc -c -o unitTests.o unitTests.c -lm
gcc -c -o functions.o functions.c -lm
gcc -c -o main.o main.cpp -lm

#
# link code to make exe
#
gcc -o unitTest unitTests.o functions.o
gcc -o main functions.o main.o

#
# Run unit test
#

./unitTest
