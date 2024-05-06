#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, power;

    printf("Enter integer X: ");
    scanf("%d", &x);
    printf("Enter integer Y: ");
    scanf("%d", &y);
    getchar();

    if (x < 0 || y < 0)
    {
        printf("Error. X and Y both must be positive! Try again.\n");
        main();
    }
    else
    {
        power = pow(x, y);
        printf("%d\n", power);
    }

    return 0;
}