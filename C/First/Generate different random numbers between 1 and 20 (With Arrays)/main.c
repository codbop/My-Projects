#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

int main()
{
    int number[ SIZE ];
    size_t i, a;

    srand( time( NULL ) );

    number[ 0 ] = rand() % 20 + 1;
    for( i = 1; i < SIZE; i++ ){
        a = i;
        number[ i ] = rand() % 20 + 1;
        while( a > 0){
              if( number[ i ] == number[ a - 1] ){
              number[ i ] = rand() % 20 + 1;
              a = i + 1;
              }
        a--;
        }
    }

    for( i = 0; i < SIZE; i++ ){
        printf( "%d ", number[ i ] );
    }


    return 0;
}


