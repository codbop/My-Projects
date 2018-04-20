#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int decimal, us = 0;
    float binary;

    printf("Bir sayi girin: ");
    scanf("%f", &binary);


    decimal = ((int)binary % 10) * pow(2,us);
    binary = (int)binary / 10;
    us++;
    while((int)binary % 10 == 1 || (int)binary % 10 == 0){
        if((int)binary % 10 == 0)
            decimal = decimal;
        else
            decimal = ((int)binary % 10) * pow(2,us) + decimal;
        us++;

        binary = binary / 10;
        if(binary < 1)
            break;
        }

    printf("Decimal number is %d", decimal);

    return 0;
}
