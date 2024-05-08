/*Function to determine only even numbers in an array of input integers.*/
#include <stdio.h>

void evenCheck(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
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

    evenCheck(arr, n);

    return 0;
}
