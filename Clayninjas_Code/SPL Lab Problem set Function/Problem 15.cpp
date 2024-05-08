/*Function that finds and returns the minimum value in an array.*/

#include <stdio.h>

void Minimum(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum value: %d", min);
}

int main()
{
    int n;

    printf("How many numbers to check?\n> ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d number: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    Minimum(arr, n);

    return 0;
}