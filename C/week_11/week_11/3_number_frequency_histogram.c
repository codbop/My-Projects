#include <stdio.h>
#include <stdlib.h>

#define RESPONSE_SIZE 10
#define FREQUENCY_SIZE 6

int main()
{
    int responses[RESPONSE_SIZE];
    int frequency[FREQUENCY_SIZE] = {0};
    int i,j;

    for(i=0; i<RESPONSE_SIZE; i++)
    {
        printf("Enter a number between 1-5 : ");
        scanf("%d",&responses[i]);
    }

    for(i=0; i<RESPONSE_SIZE; i++)
    {
        ++frequency[ responses[i] ];
    }

    printf("\nNumber\tFrequency\tHistogram\n");
    for(i=1; i<FREQUENCY_SIZE; i++)
    {
        printf("%d\t%d\t\t",i,frequency[i]);

        for(j=1; j<=frequency[i];j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
