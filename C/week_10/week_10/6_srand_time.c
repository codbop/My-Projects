#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

	srand(time(NULL));

    for(i=1; i<=25; i++)
        printf("%d - ", rand());

    return 0;
}
