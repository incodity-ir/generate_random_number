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
        printf("%d ", *(buf+i));

    printf("\n");
}