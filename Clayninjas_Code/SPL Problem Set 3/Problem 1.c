#include <stdio.h>

int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("Negative");
    }

    return 0;
}
