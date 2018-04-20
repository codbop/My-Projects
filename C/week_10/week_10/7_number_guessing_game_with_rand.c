#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;

	srand(time(NULL));

    number = rand() % 101;

    printf("What is your guess?(0-100) : ");

    do
    {
        scanf("%d", &guess);

        if(guess < 0 || guess > 100)
            printf("Invalid guess, enter a number between 0-100 : ");
        else if(guess > number)
            printf("You should go down. Enter again : ");
        else if(guess < number)
            printf("You should go up. Enter again : ");
    }
    while(guess != number);

	printf("Correct guess!");

    return 0;
}
