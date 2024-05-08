/*Function to take two positive numbers x and y as input and calculate x to the power y.*/
#include <stdio.h>
#include <math.h>

void power(int x, int y)
{
    int result = pow(x, y);
    printf("%d to the power of %d is %d", x, y, result);
}

int main()
{
    int x, y;

    printf("Enter two positive integer x and y: ");
    scanf("%d %d", &x, &y);

    if (x < 0 || y < 0)
    {
        printf("x or y is not positive! Try again.\n");
        main();
    }
    else
    {
        power(x, y);
    }

    return 0;
}