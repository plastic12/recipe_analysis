file	:=
ifeq ($(OS),Windows_NT)
	file=main.exe
else
	file=main
endif

obj=Scanner.o MenuNode.o MenuOption.o



all:$(file)

$(file):Recipe.o ../src/main.cpp $(obj)
	g++ -o main ../src/main.cpp $(obj)
Recipe.o:../src/Recipe.cpp ../src/Recipe.hpp
	g++ -c ../src/Recipe.cpp

Scanner.o:../src/Scanner.cpp ../src/Scanner.hpp
	g++ -c ../src/Scanner.cpp
MenuOption.o:../src/MenuOption.cpp ../src/MenuOption.hpp
	g++ -c ../src/MenuOption.cpp
MenuNode.o:../src/MenuNode.cpp ../src/MenuNode.hpp
	g++ -c ../src/MenuNode.cpp
clean:
	rm -f Recipe.o
	rm -f Scanner.o
	rm -f main
