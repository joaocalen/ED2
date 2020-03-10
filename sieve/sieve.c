#include "sieve.h"

void initialize_sieve(int N){    
    int marks[N] = {1};    
}

void mark_primes(int marks[], int N)
{
    for(int i = 2; i <= N/2;i++)
    {
        if(!marks[i-2])
        {
            int count = 2;
            while(1)
            {
                int index=i*count;
                if(index>N-2)
                    break;
                marks[index-2] = 0;
            }
        }
    }
}

void print_sieve(int marks[], int N){

}