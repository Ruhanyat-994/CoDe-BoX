#include <stdio.h>

int main()
{
    int num;


    scanf("%d", &num);

    if (num%2!=0)
    {
       for (int row = 1; row <= num; row++)
        {
            if (row == (num / 2) + 1 || row == 1 || row == num)
            {
                for (int col = 1; col <= num; col++)
                {
                    printf("*");
                }
            }
            else
            {
                for (int col = 1; col <= num; col++)
                {
                    if (col == 1 || col == num)
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
