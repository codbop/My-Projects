#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lines, columns, odd, a, x, b, c = 1, y;

    printf("Enter an odd line: ");
    scanf("%d", &odd);

    while(odd % 2 == 0 || odd <= 0){
    printf("You entered invalid number.Please try again: ");
    scanf("%d", &odd);
    }

    a = (odd / 2) + 1;
    x = a;
    y = odd;

    for(lines = 1; lines <= odd; lines++){
        for(columns = 1; columns <= odd; columns++){
                if(columns == a){
                    for(b = 1; b <= c; b++){
                    printf("*");
                    }
                }
                else
                printf(" ");
        }
    printf("\n");

    if(x > 1){
    a--;
    x--;
    }
    else{
    x = 0;
    a++;
    }

    if( y > c)
    c+=2;
    else{
    y = 0;
    c-=2;
    }
  }
    return 0;

}
