#include <stdio.h>
#include <stdlib.h>

#define ELEMENTS 10

int main()
{
    int numbers[ELEMENTS];
    int i;
    int total = 0;
    float average;
    int maximum,minimum;

    for(i=0; i<ELEMENTS; i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&numbers[i]);
    }

    maximum = minimum = numbers[0];

    for(i=0; i<ELEMENTS; i++)
    {
        if(numbers[i] > maximum)
            maximum = numbers[i];

        if(numbers[i] < minimum)
            minimum = numbers[i];

        total += numbers[i];
    }

    average = (float)total/ELEMENTS;

    printf("\n*************************\n");

    printf("Minimum : %d\n",minimum);
    printf("Maximum : %d\n",maximum);
    printf("Total : %d\n",total);
    printf("Average : %.2f\n",average);

    return 0;
}
