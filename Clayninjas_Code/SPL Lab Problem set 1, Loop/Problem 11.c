#include <stdio.h>
#include <math.h>

int main()
{
    int n, sqr, sum = 0;

    printf("Enter the Value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sqr = pow(i, 2);
        sum += (i + 1) * sqr;
    }
    printf("Result: %d\n", sum);
    return 0;
}