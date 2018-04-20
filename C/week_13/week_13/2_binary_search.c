#include <stdio.h>
#include <stdlib.h>

int binarySearch(const int [], int, int, int);

int main()
{
    int numbers[10] = {1,3,6,7,8,10,13,14,17,19};
    int searchKey,result;

    printf("Enter a search key : ");
    scanf("%d", &searchKey);

    result = binarySearch(numbers, searchKey, 0, 9);

    if(result == -1)
        printf("%d is not found in the array.\n", searchKey);
    else
        printf("%d is found in location %d of the array.\n", searchKey, result);

    return 0;
}

int binarySearch(const int a[], int key, int start, int end)
{
    if(start > end)
        return -1;
    else
    {
        int middle = (start+end)/2;

        if(key == a[middle])
            return middle;
        else if(key < a[middle])//search the first half
            return binarySearch(a, key, start, middle-1);
        else //search the second half
            return binarySearch(a, key, middle+1, end);
    }
}
