#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>




int main()
{
int decimal,c=1,z,t, us = 0;
float binary;
    //sgiris();
        printf("sayi : ");
        scanf("%f", &binary);

    while(binary !=0)
    {
        decimal=binary/c;
        z=(int)decimal%10;
        c=c*10;


        if (z>1)
        {
        system("CLS");
        printf("sayi : ");
        scanf("%f", &binary);
        c=1;
        }

          if(decimal<1)
          break ;
    }

c=1;
z=0;t=0;
us=0;
decimal=0;

    while(binary !=0)
    {
        decimal=binary/c;
        z=(int)decimal%10;
        c=c*10;
        t=t+z*pow(2,us);
        us++;

        if(decimal<1)
            break;
    }
    printf("decimal: %d",t);

    return 0;
}
