#include <stdio.h>

int main()
{
    int X, Y;

    printf("Enter the value of X: ");
    scanf("%d", &X);

    printf("Enter the value of Y: ");
    scanf("%d", &Y);

    while (X != Y)
    {
        printf("%d", X * X);
        printf(",");
        if (X < Y)
            X++;
        else
            X--;
    }

    printf("Reached!\n");

    return 0;
}
