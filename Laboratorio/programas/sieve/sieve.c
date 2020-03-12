#include "sieve.h"
#include <stdio.h>
#include <stdlib.h>

int* initialize_sieve(int N){
    int* marks = (int*) malloc((N-2)*sizeof(int));
    for(int i=0; i< (N-2); i++)
        marks[i]= 1;
    return marks;
}

void mark_primes(int* marks, int N)
{
    for(int i = 2; i <= N/2;i++)
    {
        if(marks[i-2])
        {
            int count = 2;
            while(1)
            {
                int index=i*count;
                if(index>N-1)
                    break;
                marks[index-2] = 0;
                count++;
            }
        }
    }
}

void print_sieve(int* marks, int N){
    for(int i = 0; i < (N-2); i++){
        if (marks[i]){
            printf("%d ",i+2);
        }
    }
}