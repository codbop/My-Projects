#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double amount;
    float principal;
    double rate = .05;
    unsigned int year;

    printf("Enter principal: ");
    scanf("%f", &principal);


    printf( "%4s%21s\n", "Year", "Amount on deposit" );

    for( year = 1; year <= 10; ++year ){


        amount = principal * pow(1.0 + rate, year);

        printf( "%4u%21.2f\n", year, amount);
    }
    return 0;
}
