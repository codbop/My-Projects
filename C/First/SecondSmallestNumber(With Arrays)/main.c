#include <stdio.h>
#include <stdlib.h>

int function_secondsmallest( int[], size_t );

int main()
{
    int numbers[ 50 ];
    size_t i;

    printf("Enter a positive number( Press -1 to end program ): ");
    scanf("%d", &numbers[ 0 ]);

    while( numbers[ 0 ] <= -1){
        printf ("You entered wrong number.Please enter number again: ");
        scanf("%d", &numbers[ 0 ]);
    }

    for( i = 1 ; numbers[ i - 1 ] != -1; i++ ){
        if( numbers[ i - 1 ] > -1 ){
        printf("Enter a positive number( Press -1 to end program ): ");
        scanf("%d", &numbers[ i ]);
        while( numbers[ i ] < -1 ){
            printf ("You entered wrong number.Please enter number again: ");
            scanf("%d", &numbers[ i ]);
        }
      }
    }

    printf( "\nThe second smallest number is %d", function_secondsmallest( numbers, 50 ) );

    return 0;
}

int function_secondsmallest( int a[], size_t size )
{
    size_t i;
    int smallest, secondsmallest;

    smallest = secondsmallest = a[ 0 ];
    for( i = 0; a[ i ] != -1 ; i++){
        if( a[ i ] < smallest ){
            secondsmallest = smallest;
            smallest = a[ i ];
        }
        else if( a[ i ] > smallest && smallest == secondsmallest)
            secondsmallest = a[ i ];
        else if( a[ i ] > smallest && a[ i ] < secondsmallest )
            secondsmallest = a[ i ];
        }
    return secondsmallest;
}
