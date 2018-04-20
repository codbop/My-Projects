#include <stdio.h>
#include <stdlib.h>

int square(int);

int main()
{
    int i;

    for(i=1; i<=10; i++)
        printf("%d ",square(i));

    return 0;
}

int square(int a)
{
    return a*a;
}

