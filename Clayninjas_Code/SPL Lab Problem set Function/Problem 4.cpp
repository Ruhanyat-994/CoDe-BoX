//Function to determine if a number is positive, negative or zero.
#include <stdio.h>

void determine(int n)
{
    if (n > 0)
        printf("positive\n");
    if (n < 0)
        printf("negative\n");
    if (n == 0)
        printf("zero\n");
}

int main()
{
    int num;
    scanf("%d", &num);

    determine(num);

    return 0;
}