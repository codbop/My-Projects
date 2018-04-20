#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char string1[50];

    printf("Enter a string : ");
    scanf("%s", string1);

    printf("\n");

    for(i=0; string1[i] != '\0'; i++)
    {
        printf("%c ", string1[i]);
    }

    printf("\n");

    return 0;
}

