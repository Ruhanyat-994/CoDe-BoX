#include <stdio.h>
int main()
{
    int n, i, first = 1, second = 1, flow;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1");
    }
    else
    {
        printf("%d, %d", first, second);
        for (i = 3; i <= n; i++)
        {
            flow = first + second;
            printf(", %d", flow);
            first = second;
            second = flow;
        }
    }
    return 0;
}