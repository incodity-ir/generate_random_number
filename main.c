#include "header.h"
#include <stdlib.h>

#define SIZE(A) sizeof(A)/sizeof(A[0])



int main()
{
    int *buf[10];
    generate_random_numbers(buf,SIZE(buf),20,5);
    print_array(buf,sizeof(buf));

    return 0;
}