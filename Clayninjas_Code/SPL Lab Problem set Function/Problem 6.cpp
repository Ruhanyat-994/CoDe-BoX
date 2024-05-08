/*Function to calculate the sum of n numbers coming from the console.*/
#include <stdio.h>

int Addition(int n)
{
    int sum = 0;
    int num;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    return sum;
}

int main()
{
    int n;
    printf("How many number to sum?\n");
    scanf("%d", &n);
    printf("\n");

    int result = Addition(n);

    printf("Sum in Function: %d", result);

    return 0;
}