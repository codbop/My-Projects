#include <stdio.h>
#include <stdlib.h>

int maximum(int, int, int);

int main()
{
    int a,b,c;

    printf("Please enter three integers : ");
    scanf("%d%d%d", &a,&b,&c);

    printf("The biggest number is : %d", maximum(a,b,c));

    return 0;
}

int maximum(int x, int y, int z)
{
    int biggest = x;

    if(y > biggest)
        biggest = y;

    if(z > biggest)
        biggest = z;

    return biggest;
}

