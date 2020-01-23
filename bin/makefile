all:main

main:Recipe.o ../src/main.cpp Scanner.o
	g++ -o main ../src/main.cpp Recipe.o Scanner.o
Recipe.o:../src/Recipe.cpp ../src/Recipe.hpp
	g++ -c ../src/Recipe.cpp

Scanner.o:../src/Scanner.cpp ../src/Scanner.hpp
	g++ -c ../src/Scanner.cpp
clean:
	rm -f Recipe.o
	rm -f Scanner.o
	rm -f main
