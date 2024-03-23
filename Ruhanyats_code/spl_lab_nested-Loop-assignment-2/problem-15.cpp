#include <stdio.h>

int main()
{
    int num;


    scanf("%d", &num);


    if (num%2!=0)
    {
        for (int row = 1; row <= num; row++)
        {
            if (row == 1 || row == num)
            {
                for (int col = 1; col <= num; col++)
                {
                    printf("Z");
                }
            }
            else
            {
                for (int col = 1; col <= num; col++)
                {
                    if (col == (num - row) + 1)
                    {
                        printf("Z");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }

            printf("\n");
        }
    }


    return 0;
}
