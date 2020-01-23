all:main

main:Recipe.o main.cpp Scanner.o
	g++ -o main main.cpp Recipe.o Scanner.o
Recipe.o:Recipe.cpp Recipe.hpp
	g++ -c Recipe.cpp

Scanner.o:Scanner.cpp Scanner.hpp
	g++ -c Scanner.cpp
clean:
	rm -f Recipe.o
	rm -f main
