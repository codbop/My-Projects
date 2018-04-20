#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);

int main()
{
    int number;

    printf("Enter a positive number : ");
    scanf("%d",&number);

    printf("Fibonacci(%d) = %d",number,fibonacci(number));

    return 0;
}

int fibonacci(int a)
{
    if(a == 0 || a == 1)
        return a;
    else
        return (fibonacci(a - 1) + fibonacci(a - 2));
}
