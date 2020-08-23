OBJECTS = main.o addfuncs.o morefuncs.o

main: main.o addfuncs.o
	g++ -o $(OBJECTS)

main.o: main.cpp addfuncs.h
	g++ -c main.cpp

addfuncs.o: addfuncs.cpp addfuncs.h
	g++ -c addfuncs.cpp
morefuncs.o: morefuncs.cpp addfuncs.h addfuncs.cpp
	g++ -c morefuncs.cpp
clean:
	rm $(OBJECTS)

help:
	@cat Readme.org
