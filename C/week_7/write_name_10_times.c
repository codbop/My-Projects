#include <stdio.h>
#include <stdlib.h>

void write_name();

int main()
{
    write_name();

    return 0;
}

void write_name()
{
    int i;

    for(i=1; i<=10; i++)
    {
        printf("Emre\n");
    }
}

