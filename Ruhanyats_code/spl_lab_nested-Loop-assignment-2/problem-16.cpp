#include <stdio.h>

int main()
{
    int num;


    scanf("%d", &num);

    if (num%2!=0)
    {

        for (int row = 1; row <= num; row++)
        {
            for (int col = 1; col <= num; col++)
            {
                if (col == (num - row) + 1 || col == row)
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
