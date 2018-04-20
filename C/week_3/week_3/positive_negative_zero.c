#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Please enter a number : ");
    scanf("%d", &number);

    if(number > 0)
		printf("The number is positive\n");
	else if(number < 0)
		printf("The number is negative\n");
	else
		printf("The number is zero\n");

    return 0;
}
