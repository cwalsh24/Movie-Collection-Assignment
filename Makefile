# Connor Walsh, Isaac Copeland (Code4Days)
# Makefile for the Movie Collection linked list assignment
# Date: 10/19/2022
# The purpose of this file is to compile the library code
# and create a library executable.

# Compile using the g++ compiler
CC = g++
# Compile with all errors and warnings
CFLAGS = -Wall -Wextra -g -c
# Target variable
TARGET = -Wall -Wextra -g -o library

# default target
default: library

# compilation instructions for the library executable
library: library.o main.o
	$(CC) $(TARGET) library.o main.o

# compilation instructions for the library object files
library.o: library.cpp library.h
	$(CC) $(CFLAGS) library.cpp

main.o: main.cpp library.h
	$(CC) $(CFLAGS) main.cpp

# make clean instructions
clean:
	$(RM) library *~ *.o
