#include <stdio.h>
#include <stdlib.h>

void write_name(int);

int main()
{
    int number;
    printf("How many times? : ");
    scanf("%d",&number);

    write_name(number);

    return 0;
}

void write_name(int name_count)
{
    int i;

    for(i=1; i<=name_count; i++)
    {
        printf("Emre\n");
    }
}

