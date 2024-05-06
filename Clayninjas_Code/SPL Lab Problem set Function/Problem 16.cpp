/*Function that multiplies the array elements by 2 and returns the array.*/

#include <stdio.h>

void multiBy2(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= 2;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;

    printf("How many numbers to check?\n> ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    multiBy2(arr, n);

    return 0;
}
