OBJECTS = main.o addfuncs.o morefuncs.o
CSXFLAGS=-std=c++14
LDFLAGS=-lm


main: main.o addfuncs.o
	g++ -o main $(OBJECTS)

main.o: main.cpp addfuncs.h
	g++ $(CSXFLAGS) -c main.cpp

addfuncs.o: addfuncs.cpp addfuncs.h
	g++ -c addfuncs.cpp

morefuncs.o: morefuncs.cpp addfuncs.h addfuncs.cpp
	g++ -c morefuncs.cpp
clean:
	rm $(OBJECTS)

help:
	@cat Readme.org
