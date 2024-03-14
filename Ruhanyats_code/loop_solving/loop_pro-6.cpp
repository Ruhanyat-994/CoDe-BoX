#include<stdio.h>
int main()
{
    int X,N;
    scanf("%d%d",&X,&N);
    int correct_guess=0;
    int attempt;
    int guess;
    for(attempt=1;attempt<=N;attempt++)
    {

        scanf("%d",&guess);
        if(guess==X)
        {
            printf("Right,Player-2 wins!\n");
            correct_guess=1;
            break;
        }
        else{
            int remain_guess = N-attempt;
            printf("Wrong,%d Choice's Left!\n",remain_guess);
        }
    }
    if (!correct_guess)
    {
        printf("Player-1 Wins!\n");
    }
}
