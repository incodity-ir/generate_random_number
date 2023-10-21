#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE(A) sizeof(A)/sizeof(A[0])

void generate_random_numbers(int *but,size_t count,int min, int max);

void print_array(int *buf,size_t count);

int main()
{
    int *buf[10];
    generate_random_numbers(buf,SIZE(buf),20,5);
    print_array(buf,sizeof(buf));

    return 0;
}