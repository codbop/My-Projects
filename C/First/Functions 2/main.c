#include <stdio.h>
#include <stdlib.h>

int maximum( int x, int y, int z ); // function prototype

// function main begins program execution
int main(void)
{
    int number1; // first integer entered by user
    int number2; // second integer entered by user
    int number3; // third integer entered by user

    printf( "%s", "Enter three integers: ");
    scanf( "%d%d%d", &number1, &number2, &number3);

    //number1, number2 and number3 are arguments
    // to the maximum function call
    printf( "Maximum is %d\n", maximum( number1, number2, number3 ) );

    return 0;

} // end main

// Function maximum definition
// x, y and z are parameters
int maximum( int x, int y, int z )
{
  int max = x; // assume x is largest

  if ( y > max ) { // if y is larger than max,
    max = y; // assign y to max
  } // end if

  if ( z > max ) { // if z is larger than max,
    max = z; // assign z to max
  } // end if

  return max; // max i� largest value
} // end function maximum

