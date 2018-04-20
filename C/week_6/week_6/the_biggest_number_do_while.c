#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,biggest;
	int counter = 0;

    do
    {
        printf("Enter a positive number or -1 to finish : ");
        scanf("%d",&number);
		counter++;

		if(counter == 1)
			biggest = number;
		else
		{
			if(number > biggest)
				biggest = number;
		}
    }
	while(number != -1);

    printf("The biggest number is : %d\n",biggest);

    return 0;
}
