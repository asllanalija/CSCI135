main: main.o funcs.o
	g++ main.o funcs.o -o main

main.o: main.cpp funcs.h
	g++ -c main.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp
