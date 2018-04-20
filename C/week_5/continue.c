#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;

    for(counter=1; counter<=10; counter++)
    {
        if(counter == 6)
            continue;

        printf("%d ",counter);
    }

    return 0;
}
