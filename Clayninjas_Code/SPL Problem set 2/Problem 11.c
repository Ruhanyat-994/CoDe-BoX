#include <stdio.h>

int main()
{
    int a = 10, b = -10, c = 0;

    if ((a + b) <= 80 && b >= 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    if ((a - b) == 0 || c != 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    if (a != b || (b < a) && c > 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
