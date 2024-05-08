#include <stdio.h>

int main()
{
    int pl1, pl2, attempt, left;

    printf("Enter your number Player 1: ");
    scanf("%d", &pl1);
    printf("Enter How many tries can Player 2 have: ");
    scanf("%d", &attempt);
    getchar();

    left = attempt;

    if(attempt <= 0)
    {
        printf("Invalid Tries Input. Please select the number again!\n");
        main();
    }

    while (left > 0)
    {
        printf("Guess the Number Player 2: ");
        scanf("%d", &pl2);

        if (pl2 == pl1)
        {
            printf("Right, Player-2 wins!\n");
            return 0;
        }
        else
        {
            left--;
            if (left == 0)
            {
                printf("Player-1 wins!\n");
            }
            else
            {
                printf("Wrong, %d Choice(s) left: \n", left);
            }
        }
    }

    return 0;
}
