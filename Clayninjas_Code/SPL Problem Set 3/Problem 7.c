#include <stdio.h>

int main()
{
    int X, Y;

    printf("Enter integer X : ");
    scanf("%d", &X);
    printf("Enter integer Y : ");
    scanf("%d", &Y);

    if (X > Y)
    {
        printf("%d is greater than %d\n", X, Y);
    }
    if (X < Y)
    {
        printf("%d is less than %d\n", X, Y);
    }
    if (X == Y)
    {
        printf("%d is equal to %d\n", X, Y);
    }

    return 0;
}