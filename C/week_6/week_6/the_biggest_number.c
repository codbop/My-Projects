#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,biggest;

    printf("Enter a positive number or -1 to finish : ");
    scanf("%d",&number);

    biggest = number;

    while(number != -1)
    {
        printf("Enter a positive number or -1 to finish : ");
        scanf("%d",&number);

        if(number > biggest)
            biggest = number;
    }

    printf("The biggest number is : %d\n",biggest);

    return 0;
}
