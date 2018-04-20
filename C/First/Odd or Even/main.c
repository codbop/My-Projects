#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf( "Write a number: " );
    scanf( "%d", &number);
    number = number % 2;
    if( number == 0 ){
        printf( "\nEven");
    }
    if( number == 1 ){
        printf( "\nOdd");
    }


    return 0;
}
