/* Addition Program */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, sum;

    printf("Enter first integer : ");
    scanf("%d", &number1);
    printf("Enter second integer : ");
    scanf("%d", &number2);

    sum = number1 + number2;

    printf("The sum is : %d", sum);

    return 0;
}
