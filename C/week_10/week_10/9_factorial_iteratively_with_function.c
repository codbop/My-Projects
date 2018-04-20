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
    int i;
    int fact = 1;

    for(i=a; i>=1; i--)
        fact*=i;

    return fact;
}
