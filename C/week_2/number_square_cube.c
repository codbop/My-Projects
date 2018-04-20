/* Number-square-cube Program */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;

    printf("number\tsquare\tcube");
    printf("\n");

    printf("%d\t%d\t%d",number,number*number,number*number*number);
    printf("\n");
    number = number + 1;

    printf("%d\t%d\t%d",number,number*number,number*number*number);
    printf("\n");
    number = number + 1;

    printf("%d\t%d\t%d",number,number*number,number*number*number);
    printf("\n");
    number = number + 1;

    printf("%d\t%d\t%d",number,number*number,number*number*number);
    printf("\n");

    //...continues

    return 0;
}
