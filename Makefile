CC     =clang++                  #Compiler
CCFLAGS=-Wall                    #Compiler flags
STD    =c++17                    #Standard
SRC    =$$(find src -name *.cpp) #Source files
INC    =inc                      #Include path for headers
BIN    =IKB                      #Binary name

default: build

build:
	$(CC) -std=$(STD) $(CCFLAGS) $(SRC) -I$(INC) -o ./bin/$(BIN)
