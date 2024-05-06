#include <stdio.h>

int main()
{
    int x, y;

    x = -5, y = 5;
    int Increment = x += y;
    printf("Incremented Value : %d\n", Increment);

    x = -5;
    int Decrement = x -= y;
    printf("Decremented Value : %d\n", Decrement);

    return 0;
}