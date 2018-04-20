#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,factorial;

    for(i = 0; i <= 10; i++)
    {
        factorial = 1;
        for(j=i; j>=1; j--)
            factorial *= j;

        printf("%d!: %d \n", i, factorial);
    }

    return 0;
}
