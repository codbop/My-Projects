#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,one,two,three,four,five;

    printf("Enter a five digit number : ");
    scanf("%d",&number);
    printf("\n");

    one   = number/10000;
    two   = (number/1000)%10;
    three = (number/100)%10;
    four  = (number/10)%10;
    five  = number%10;

    printf("%d\t%d\t%d\t%d\t%d\n",one,two,three,four,five);

    return 0;
}
