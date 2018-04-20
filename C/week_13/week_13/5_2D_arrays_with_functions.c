#include <stdio.h>
#include <stdlib.h>

void printArray(int [][3],int,int);

int main()
{
    int array1[2][3] = {{1,2,3},{4,5,6}};
    int array2[2][3] = {1,2,3,4,5,6};
    int array3[2][3] = {1,2,3,4};
    int array4[2][3] = {{1,2},{4}};

    printf("array1 : \n");
    printArray(array1,2,3);
    printf("array2 : \n");
    printArray(array2,2,3);
    printf("array3 : \n");
    printArray(array3,2,3);
    printf("array4 : \n");
    printArray(array4,2,3);

    return 0;
}

void printArray(int a[][3],int row,int column)
{
    int i,j;

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

