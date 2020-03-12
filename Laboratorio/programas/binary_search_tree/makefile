#Makefile for binary_search_tree

all: main

main: binary_search_tree.o main.o
	gcc -o binary_search_tree main.o binary_search_tree.o

binary_search_tree.o: binary_search_tree.c binary_search_tree.h
	gcc -o binary_search_tree.o binary_search_tree.c -c -W -Wall

main.o: main.c binary_search_tree.h
	gcc -o main.o main.c -c -W -Wall

clean:
	rm -rf *.o *~ main
