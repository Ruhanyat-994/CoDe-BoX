#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Odd\n");
    }
    else
    {
        printf("Even\n");
    }

    return 0;
}