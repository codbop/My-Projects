#include <stdio.h>
#include <stdlib.h>

void swapf(int *, int *);

int main()
{
    int a = 5;
    int b = 6;

    printf("Before swapping --> a : %d, b : %d\n",a,b);

    swapf(&a,&b);

    printf("After swapping  --> a : %d, b : %d\n",a,b);

    return 0;
}

void swapf(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

