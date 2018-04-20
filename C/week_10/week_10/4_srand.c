#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    unsigned int seed;

    printf("Enter seed : ");
    scanf("%u",&seed);

    srand(seed);

    for(i=1; i<=25; i++)
        printf("%d - ", rand());

    return 0;
}
