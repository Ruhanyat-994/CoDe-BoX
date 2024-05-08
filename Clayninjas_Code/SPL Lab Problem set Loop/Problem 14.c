#include <stdio.h>

int main()
{
    int n, r, factorial1 = 1, factorial2 = 1, factorial3 = 1, i;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    printf("%d C %d! = ", n, r);

    for (i = n; i >= 1; i--)
    {
        factorial1 *= i;
    }

    for (i = r; i >= 1; i--)
    {
        factorial2 *= i;
    }

    for (i = (n - r); i >= 1; i--)
    {
        factorial3 *= i;
    }

    int nCr = (factorial1) / (factorial3 * factorial2);

    printf("%d\n", nCr);

    return 0;
}
