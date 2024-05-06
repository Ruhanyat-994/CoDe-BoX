#include <stdio.h>

int main()
{
    int X, Y;

    printf("Enter integer X : ");
    scanf("%d", &X);
    printf("Enter integer Y : ");
    scanf("%d", &Y);

    printf("Addition : %d\n", X + Y);
    printf("Subtraction : %d\n", X - Y);
    printf("Multiplication : %d\n", X * Y);

    if (Y != 0)
    {
        printf("Quotient : %d\n", X / Y);
        printf("Reminder : %d\n", X % Y);
    }
    else
    {
        printf("Error. Can't be divided by 0\n");
    }

    return 0;
}