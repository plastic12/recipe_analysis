file	:=
ifeq ($(OS),Windows_NT)
	file=main.exe
else
	file=main
endif


TARGET:=bin/$(file)

SRCDIR:=src
OBJDIR:=obj

obj:=$(OBJDIR)/Recipe.o $(OBJDIR)/Scanner.o $(OBJDIR)/MenuNode.o $(OBJDIR)/MenuOption.o


all:$(TARGET)

$(TARGET):src/main.cpp $(obj)
	g++ -o $(TARGET) src/main.cpp $(obj)
$(OBJDIR)/Recipe.o:src/Recipe.cpp src/Recipe.hpp
	g++ -c src/Recipe.cpp -o $(OBJDIR)/Recipe.o

$(OBJDIR)/Scanner.o:src/Scanner.cpp src/Scanner.hpp
	g++ -c src/Scanner.cpp -o $(OBJDIR)/Scanner.o
$(OBJDIR)/MenuOption.o:src/MenuOption.cpp src/MenuOption.hpp
	g++ -c src/MenuOption.cpp -o $(OBJDIR)/MenuOption.o
$(OBJDIR)/MenuNode.o:src/MenuNode.cpp src/MenuNode.hpp
	g++ -c src/MenuNode.cpp -o $(OBJDIR)/MenuNode.o

