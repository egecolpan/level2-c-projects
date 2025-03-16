#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number = rand() % 10 + 1;
    int guess;

    printf("Welcome to the number guessing game\n");
    printf("Press enter to start the game\n");
    getchar();
    printf("Guess the number between 1 to 10\n");
    while (1)
    {
        scanf("%d", &guess);
        if (guess < 1 || guess > 10)
        {
            printf("Only enter a number between 1 to 10\n");
            continue;
        }
        if (guess == number)
        {
            printf("Yeah! You guessed it right\n");
            printf("This game made by Ege Colpan\n");
            break;
        }
        else if (guess > number)
        {
            printf("Nope, lower number please\n");
        }
        else if (guess < number)
        {
            printf("Nope, higher number please\n");
        }
    }
}