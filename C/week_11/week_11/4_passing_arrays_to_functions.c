#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_random_numbers(int [], int);

int main()
{
    int i;
    int numbers[10];

    fill_random_numbers(numbers, 10);

    for(i=0; i<10; i++)
    {
        printf("numbers[%d] = %d",i ,numbers[i]);
        printf("\n");
    }
    return 0;
}

void fill_random_numbers(int a[], int arr_size)
{
    int i;

    srand( time(NULL) );

    for(i=0; i<arr_size; i++)
        a[i] = rand();
}
