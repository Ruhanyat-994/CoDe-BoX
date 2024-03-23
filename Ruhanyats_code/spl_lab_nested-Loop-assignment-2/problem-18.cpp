#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);


    if (num%2!=0)
    {
         for (int row = 1; row <= num; row++)
        {
            if ((num / 2) + 1 == row)
            {
                for (int col = 1; col <= num; col++)
                {
                    printf("H");
                }
            }
            else
            {
                printf("H");
                for (int col = 1; col <= num - 2; col++)
                {
                    printf(" ");
                }
                printf("H");
            }
            printf("\n");
        }
    }

}
