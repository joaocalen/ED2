#Makefile for sieve

all: sieve

sieve: sieve_main.o sieve.o
	gcc -o sieve sieve_main.o sieve.o

sieve_main.o: sieve_main.c sieve.h
	gcc -o sieve_main.o sieve_main.c -c -W -Wall -ansi -pedantic

sieve.o: sieve.c sieve.h
	gcc -o sieve.o sieve.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *~ sieve
