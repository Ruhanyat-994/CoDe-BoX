#include <stdio.h>

int main()
{
    int num1 = 20, num2 = 100;

    int max;
    max = (num1 > num2) ? num1 : num2;

    printf("Max : %d", max);

    return 0;
}