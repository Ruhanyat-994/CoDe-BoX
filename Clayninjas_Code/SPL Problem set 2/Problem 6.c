#include <stdio.h>

int main()
{
    int x, y;

    x = 56, y = 10;
    int Multiplication = x *= y;
    printf("Incremented Value : %d\n", Multiplication);

    x = 56;
    int Division = x /= y;
    printf("Division Value : %d\n", Division);

    return 0;
}