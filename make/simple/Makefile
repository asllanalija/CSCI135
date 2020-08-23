# target: dependencies
#	rule {command}



main: main.cpp
	g++ -o main main.cpp

help:
	@echo "Heres some help!"
	@echo "Two lines"
	@echo "And heres some files"
	@ls -l

chained: one
	@echo "I'm running chained"

one: two
	@echo "I'm running one"

two:
	@echo "I'm running two"

three:
	@echo "I'm running three"
