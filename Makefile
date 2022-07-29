CC=clang++
STD=c++17
SRC=$$(find src -name *.cpp)
INC=./inc
BIN=webserver

default: build

build:
	$(CC) -std=$(STD) $(SRC) -I$(INC) -o ./bin/$(BIN)
