#include <stdio.h>

int main()
{
    int num;


    scanf("%d", &num);

    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= num; col++)
        {
            if (col <= row)
                printf("%d", col);
            else
                printf("_");
        }
        for (int col = num - 1; col >= 1; col--)
        {
            if (col <= row)
                printf("%d", col);
            else
                printf("_");
        }
        printf("\n");
    }
    return 0;
}
