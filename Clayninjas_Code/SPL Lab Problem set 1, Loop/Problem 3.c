#include <stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        if (i < n)
        {
            printf(",");
        }
    }
    return 0;
}