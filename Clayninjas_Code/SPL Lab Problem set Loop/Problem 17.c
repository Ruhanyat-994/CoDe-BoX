#include <stdio.h>

int main()
{
    int n, i, flag = 0;

    printf("Enter an Integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
    {
        printf("Not prime");
    }
    else
    {
        if (flag == 0)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Not prime\n");
        }
    }
    return 0;
}