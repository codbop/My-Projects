#include <stdio.h>
#include <stdlib.h>

int change_variable(int);

int main()
{
    int number = 5;

    number = change_variable(number);

    printf("Number : %d\n", number);

    return 0;
}

int change_variable(int n)
{
    n = n * 2;

    return n;
}
