#include <stdio.h>
#include <stdlib.h>

void change_variable(int *);

int main()
{
    int number = 5;

    change_variable(&number);

    printf("Number : %d\n", number);

    return 0;
}

void change_variable(int *n)
{
    *n = *n * 2;
}
