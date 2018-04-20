#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, endd, current, counter = 0;

    printf("Enter start and end numbers : ");
    scanf("%d%d", &start, &endd);

    current = start;
    while(current <= endd)
    {
        if(current%7 == 0)
            counter++;
        current++;
    }

    printf("There are %d numbers divisible by 7 betweeen %d and %d.\n", counter, start, endd);

    return 0;
}
