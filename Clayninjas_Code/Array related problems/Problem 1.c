/*WAP that will take n integer numbers into an array, and then print all the integers into
reverse order (from the last valid index to index 0).*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter integer number n : ");
    scanf(" %d", &n);

    int number[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", number[i]);
    }

    return 0;
}