#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0, number;

    int i;
    for(i = 0; i < 10; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &number);
        if(number > 0)
            counter++;
    }

    printf("%d positive number entered\n", counter);

    return 0;
}
