#include <stdio.h>
#include <stdlib.h>

void fill_numbers(int [], int);

int main()
{
    int i;
    int numbers[5] = {1, 2, 3, 4, 5};

    fill_numbers(numbers, 5);

    for(i=0; i<5; i++){
        printf("%d ",numbers[i]);

    printf("\n");
    }

    return 0;
}

void fill_numbers(int a[], int arr_size)
{
    int i;

    for(i=0; i<arr_size; i++)
        a[i] = a[i] * 2;
}
