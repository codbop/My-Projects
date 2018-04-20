#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main()
{
    int number;

    printf("Enter a positive number : ");
    scanf("%d",&number);

    printf("Factorial of %d is %d",number,factorial(number));

    return 0;
}

int factorial(int a)
{
    if(a <= 1)
        return 1;
    else
        return (a * factorial(a - 1));
}
