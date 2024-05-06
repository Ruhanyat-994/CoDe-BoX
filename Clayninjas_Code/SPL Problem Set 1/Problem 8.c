#include <stdio.h>

int main()
{
    int firstValue, middleValue, lastValue;

    printf("Enter your three value separated by space : ");
    scanf("%d %*d %d", &firstValue, &middleValue, &lastValue);

    printf("First Value = %d, Last value = %d\n", firstValue, lastValue);

    return 0;
}