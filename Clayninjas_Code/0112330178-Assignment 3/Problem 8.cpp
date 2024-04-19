#include <stdio.h>

int main()
{
    int n, arr[100];

    printf("Enter the integer value of n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    printf("Max: %d, Index: %d\n", max, maxIndex);
    printf("Min: %d, Index: %d\n", min, minIndex);

    return 0;
}