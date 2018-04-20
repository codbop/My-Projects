#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int [], int);

int main()
{
    int numbers[10] = {10,1,7,19,3,14,6,8,13,17};
    int i;

    printf("Data items in original order : ");
    for(i=0; i<10; i++)
        printf("%d ",numbers[i]);

    printf("\n");

    bubbleSort(numbers, 10);

    printf("Data items in ascending order : ");
    for(i=0; i<10; i++)
        printf("%d ",numbers[i]);

    printf("\n");

    return 0;
}

void bubbleSort(int a[], int size)
{
    int i,pass,hold;

    for(pass=0; pass<size-1; pass++)
    {
        for(i=0; i<size-1; i++)
        {
            if(a[i] > a[i+1])
            {
                hold = a[i];
                a[i] = a[i+1];
                a[i+1] = hold;
            }
        }
    }
}
