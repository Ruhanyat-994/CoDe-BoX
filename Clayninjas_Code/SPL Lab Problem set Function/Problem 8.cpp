/*Function that takes an array of n integer numbers as input and prints them in reverse order.*/
#include <stdio.h>

void reverse(int arr[], int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;

    printf("How many numbers you want to sum?\n> ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d number: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    reverse(numbers, n);

    return 0;
}