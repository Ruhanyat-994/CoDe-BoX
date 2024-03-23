#include <stdio.h>

int main()
{
    int i, j, k, n;

    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= i)
                printf("%d", j);
            else
                printf("_");
        }
        for (j = n - 1; j >= 1; j--)
        {
            if (j <= i)
                printf("%d", j);
            else
                printf("_");
        }
        printf("\n");
    }
    return 0;
}