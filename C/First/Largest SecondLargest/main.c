#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;
    int number;
    int largest;
    int secondLargest = 0;

    printf( "Enter the first number: " );
    scanf( "%d", &largest );
    counter = 2;

    while( counter <= 10 ){
        printf( "Enter next number: " );
        scanf( "%d", &number );

        if( number > largest ){

            secondLargest = largest;

            largest = number;

            }

            else if( number > secondLargest){
                secondLargest = number;
            }


        ++counter;

    }

    printf( "Largest is %d\n", largest );
    printf( "Second largest is %d\n", secondLargest );

    return 0;
}
