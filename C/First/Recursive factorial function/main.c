#include <stdio.h>
#include <stdlib.h>

unsigned long long int factorial( unsigned int number );

// function main begins program execution
int main( void )
{
    unsigned int i; // counter
    // during each iteration, calculate
    // factorial( i ) and display result
    for ( i = 0; i <= 21; ++i ) {
        printf( "%u! = %llu\n", i, factorial( i ) );
    } // end for
    return 0;
} // end main

// recursive definition of function factorial
unsigned long long int factorial( unsigned int number )
{
    // base case
    if ( number <= 1 ){
        return 1;
    } // end if
    else { // recursive step
        return ( number * factorial( number - 1 ) );
    } // end else
} // end function factorial
