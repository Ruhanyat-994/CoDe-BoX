#include <stdio.h>

int main()
{
    int num, pow;

    printf("Enter a  random positive nonzero number : ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Invalid number!\n");
    }
    else
    {
        pow = 1;
        while (num > 1)
        {
            if (num % 2 != 0)
            {
                pow = 0;
                break;
            }
            num /= 2;
        }
    }
    if (pow)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}