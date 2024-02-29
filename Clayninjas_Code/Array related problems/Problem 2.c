/*WAP that will take n integer numbers into an array, and then sum up all the integers in
that array.*/

#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf(" %d\n", &n);

    int number[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[n]);
        sum += number[n];
    }

    printf("%d\n", sum);

    return 0;
}