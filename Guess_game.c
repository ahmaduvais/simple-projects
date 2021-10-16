#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempt = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Guess the number\n");
    
    while (number != guess)
    {scanf("%d", &guess);
        if (guess > number)
        {
            printf(" Lower number please\n");
        }
        else if (number > guess)
        {
            printf("Higher number please\n");
        }
        else
        {
                printf("you guessed it in %d attempts.\n", attempt);
        }
        attempt++;
    }
    // printf("The number is %d", number);
    return 0;
}