#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,number;
	int factorial = 1;

	printf("Please enter a positive number : ");
	scanf("%d", &number);

	for(i=number; i>=1; i--)
		factorial *= i;

	printf("Factorial of %d is %d\n",number,factorial);

    return 0;
}
