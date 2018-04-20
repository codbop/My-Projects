#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci( unsigned int n ); // function prototype

// function main begins program execution
int main( void )
{
    unsigned long long int result; // fibonacci value
    unsigned int number; // number input by user

    // obtain integer from user
    printf( "%s", "Enter an integer: " );
    scanf( "%u", &number );

    // calculate fibonacci value for number input by user
    result = fibonacci( number );

    // display result
    printf( "Fibonaccci( %u ) = %llu\n", number, result );


    return 0;
} // end main

// Recursive definition of function fibonacci
unsigned long long int fibonacci( unsigned int n )
{
    // base case
    if ( 0 == n || 1 == n ) {
        return n;
    } // end if
    else { // recursive step
        return fibonacci( n - 1 ) + fibonacci( n - 2 );
    } // end else
} // end function fibonacci
