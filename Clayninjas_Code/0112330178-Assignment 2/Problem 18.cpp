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
            if ((n / 2) + 1 == i)
            {
                for (int j = 1; j <= n; j++)
                {
                    printf("H");
                }
            }
            else
            {
                printf("H");
                for (int j = 1; j <= n - 2; j++)
                {
                    printf(" ");
                }
                printf("H");
            }
            printf("\n");
        }
    }
}