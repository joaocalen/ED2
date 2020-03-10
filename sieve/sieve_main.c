#include "sieve.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
    int N = argv[argc-1];
    initialize_sieve(N);
}