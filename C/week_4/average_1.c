#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0, num;
    float sum = 0;

    while(counter < 3)
    {
        printf("Enter a number : ");
        scanf("%d", &num);
        sum += num;
        counter++;
    }

    printf("Average = %.2f\n", sum/counter);

    return 0;
}
