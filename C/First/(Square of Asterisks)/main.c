#include <stdio.h>
#include <stdlib.h>

int main()
{
    int side;
    int temp;
    int asterisk;

    printf( "Enter the square side: " );
    scanf( "%d", &side);

    temp = side;

    while ( side-- > 0 ){
        asterisk = temp;

        while( asterisk-- > 0 ){
            if ((side==1 || side==temp) && (asterisk==temp || asterisk==1))
            {
            printf( "*");
            }

        }

        putchar( '\n');
    }

    return 0;
}
