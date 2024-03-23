#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the number of rows : ");
    scanf("%d", &n);
    getchar();

    if (n == 0)
    {
        printf("Not an odd number! Try again.");
        main();
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == (n / 2) + 1 || i == 1 || i == n)
            {
                for (int j = 1; j <= n; j++)
                {
                    printf("*");
                }
            }
            else
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 || j == n)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("_");
                    }
                }
            }
            printf("\n");
        }
        
    }

    return 0;
}