#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    int i;
    int my_array[SIZE];

    for(i=0; i<SIZE; i++)
        my_array[i] = (i*2) + 2;

    for(i=0; i<SIZE; i++)
    {
        printf("my_array[%d] = %d",i ,my_array[i]);
        printf("\n");
    }

    return 0;
}
