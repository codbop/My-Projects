#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x;


    while( x > 2 ){
        printf("Enter a number: ");
        scanf("%d", &x);

            while( x == 0 ){
                printf("Enter a number: ");
                scanf("%d", &x);

                }

        }


    printf("You entered correct number!");

    return 0;
}
