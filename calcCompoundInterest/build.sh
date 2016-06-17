gcc -c -o unitTests.o unitTests.c -lm
gcc -c -o functions.o functions.c -lm
gcc -c -o main.o main.cpp -lm

gcc -o unitTest unitTests.o functions.o
gcc -o main functions.o main.o

./unitTest
