/*Function to calculate the factorial of a number.*/
#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
    }

    return fact;
}

int main()
{
    int n;

    printf("Enter the number you want to find factorial of : ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of negative number is not possible\n");
    }
    else
    {
        int result = factorial(n);
        printf("Factorial of number %d is: %d\n", n, result);
    }

    return 0;
}