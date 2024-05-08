#include <stdio.h>

int main()
{
    int n, factorial = 1, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d! = ", n);

    for (i = n; i >= 1; i--)
    {
        factorial *= i;

        if (i != 1)
        {
            printf("%d X ", i);
        }
        else
        {
            printf("%d", i);
        }
    }

    printf(" = %d\n", factorial);

    return 0;
}
