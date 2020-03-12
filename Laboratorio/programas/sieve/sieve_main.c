#include "sieve.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
    int N = 100;
    int* marks = initialize_sieve(N);
    mark_primes(marks, N);
    print_sieve(marks,N);
}