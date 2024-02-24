#include <stdio.h>

int main()
{
    for (int i = 1; i <= 50; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d", i);
            if(i < 50)
            {
                printf(",");
            }
        }
    }
    return 0;
}