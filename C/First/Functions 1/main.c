#include <stdio.h>
#include <stdlib.h>


int square( int y ); // function prototype

int main( void )
{
    int x; // counter

    // loop ten times and calculate and output square of x each time
    for ( x = 1; x <= 10; ++x ){
        printf( "%d ",square( x ) ); // function call
    } // end for

    puts( "" );


    return 0;
} // end main

// square function definition returns the square of its parameter
int square( int y ) // y is a copy of the argument to the function
{
    return y * y; // returns the square of y as an int
} // end function square
