//Function to determine if a number is even or odd.
#include <stdio.h>

void EvenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main()
{
    int num;
    scanf("%d", &num);

    EvenOdd(num);

    return 0;
}