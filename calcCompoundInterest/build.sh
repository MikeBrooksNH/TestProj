gcc -c -o unitTests.o unitTests.c -lm
gcc -c -o functions.o functions.c -lm
gcc -o unitTest unitTests.o functions.o
