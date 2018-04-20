#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0, num;
    float sum = 0;

    printf("Enter a number (to finish enter -1) : ");
    scanf("%d", &num);

    while(num != -1)
    {
        sum += num;
        counter++;
        printf("Enter a number (to finish enter -1) : ");
        scanf("%d", &num);
    }

    if(counter != 0)
        printf("Average = %.2f\n", sum/counter);
    else
        printf("Average = 0\n");

    return 0;
}
