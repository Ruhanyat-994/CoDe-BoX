// Write a program (WAP) that will print following series upto Nth terms.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n)
        {
            printf(",");
        }
    }
}