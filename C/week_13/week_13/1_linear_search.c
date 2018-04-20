#include <stdio.h>
#include <stdlib.h>

int linearSearch(const int [], int, int);

int main()
{
    int numbers[10] = {10,1,7,19,3,14,6,8,13,17};
    int searchKey,result;

    printf("Enter a search key : ");
    scanf("%d", &searchKey);

    result = linearSearch(numbers, searchKey, 10);

    if(result == -1)
        printf("%d is not found in the array.\n", searchKey);
    else
        printf("%d is found in location %d of the array.\n", searchKey, result);

    return 0;
}

int linearSearch(const int a[], int key, int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        if(a[i] == key)
            return i;
    }

    return -1;
}
