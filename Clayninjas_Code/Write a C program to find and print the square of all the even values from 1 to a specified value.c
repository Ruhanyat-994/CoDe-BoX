// Write a C program to find and print the square of all the even values from 1 to a specified value.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, power;

    printf("Enter a integer number: ");
    scanf("%d", &n);
    printf("List of square of each one of the even values from 1 to %d\n", n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            power = pow(i, 2);
            printf("%d^2 = %d\n", i, power);
        }
    }
    return 0;
}