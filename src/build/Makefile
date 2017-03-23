# makefile for the Linux executable

CXX      = g++
CFLAGS   = -Wall -g
GLUTLIBS = -lGL -lGLU -lglut
INCLUDE  = ../include
BIN      = ../bin/nix
OBJ      = ../obj/nix
SRC      = ../include/src
# BIN is only for the final executable

# build the final executable
final: main Setup
	g++ -o $(BIN)/main ../main.o $(OBJ)/Setup.o -I$(INCLUDE) $(GLUTLIBS)

# build the main object file, this will be linked with all of the other object files in the final step
main: Setup
	$(CXX) -c -o ../main.o ../main.cpp -I$(INCLUDE) $(GLUTLIBS)

# build the setup object file
Setup: $(SRC)/Setup.cpp
	$(CXX) -c -o $(OBJ)/$@.o $(SRC)/Setup.cpp -I$(INCLUDE) $(GLUTLIBS)

clean:
	rm $(OBJ)/*
	rm $(BIN)/*
