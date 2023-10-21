#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_numbers(int *buf,size_t count,int min,int max)
{
    for(int i=0;i<count;i++)
    {
        *(buf+i) =min + random() % (max-min+1);
    }
}


void print_array(int *buf,size_t count)
{
    for(int i=0;i<count;i++)
        printf("%d ", *(buf+i))

    printf("\n");
}