#include <stdio.h>
#include <stdlib.h>

void array_copy(int *, int *, int);

int main()
{
    int a[5] = {0};
    int b[5] = {1,2,3,4,5};
    int i;

    printf("Before copying -->\n");
    printf("a : ");
    for(i=0; i<5;i++)
        printf("%d ",a[i]);

    printf("b : ");
    for(i=0; i<5;i++)
        printf("%d ",b[i]);

    array_copy(a,b,5);

    printf("\nAfter copying -->\n");
    printf("a : ");
    for(i=0; i<5;i++)
        printf("%d ",a[i]);

    printf("b : ");
    for(i=0; i<5;i++)
        printf("%d ",b[i]);

    printf("\n");

    return 0;
}

void array_copy(int *x, int *y, int array_size)
{
    int i;

    for(i=0; i<array_size; i++)
        *(x+i) = *(y+i);
}

