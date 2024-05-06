/*Function that takes two numbers as input and determines if the first number is greater than,
equal to or less than the second number.*/
#include <stdio.h>

void determine(int n, int m)
{
    if (n > m)
        printf("%d is greater than %d", n, m);
    if (n < m)
        printf("%d is less than %d", n, m);
    if (n == m)
        printf("%d is equal to %d", n, m);
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    determine(num1, num2);

    return 0;
}