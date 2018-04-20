#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i=1; i<=25; i++)
        printf("%d - ", 1 + (rand() % 6));

    return 0;
}
