#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of rows : ");
    scanf("%d", &n);
    getchar();

    if (n == 0)
    {
        printf("Not an odd number! Try again");
        main();
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == (n - i) + 1 || j == i)
                {
                    printf("*");
                }
                else
                {
                    printf("_");
                }
            }
            printf("\n");
        }
    }
}