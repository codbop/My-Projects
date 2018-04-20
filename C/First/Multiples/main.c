#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, x;
    printf( "Enter two integers: " );
    scanf( "%d%d", &num1, &num2);
    x = (num1 % num2);
    if ( x == 0){
        printf( "\nnum1 is a multiple of the num2" );
    }
    if ( x != 0){
        printf( "\nnum1 is not multiple of the num2" );
    }


    return 0;
}
