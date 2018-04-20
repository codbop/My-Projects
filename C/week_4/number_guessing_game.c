#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 37;
    int guess;

    printf("What is your guess?(0-100) : ");
    scanf("%d", &guess);

    while(guess != number)
	{
        if(guess < 0 || guess > 100)
            printf("Invalid guess, enter a number between 0-100 : ");
        else if(guess > number)
            printf("You should go down. Enter again : ");
        else
            printf("You should go up. Enter again : ");

        scanf("%d", &guess);
    }

    printf("Correct guess!");

    return 0;
}
