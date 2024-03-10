#include <stdio.h>

int main()
{
    int num, pow;

    printf("Enter a  random positive nonzero number : ");
    scanf("%d", &num);

    if (num > 0)
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
        if (pow)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else if (num == 0)
    {
        printf("Zero is not a valid input\n");
    }
    else
    {
        printf("Negative input is not valid\n");
    }

    return 0;
}