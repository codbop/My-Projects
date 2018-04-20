#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    printf("Bir harf girin: ");
    scanf("%c", &harf);
    if((harf >= 65) && (harf <= 90))
    {
      harf = harf + 32;
      printf("%c\n", harf);
    }
    else if((harf >= 97) && (harf <= 122))
    {
      harf = harf - 32;
      printf("%c\n", harf);
    }

    return 0;
}
