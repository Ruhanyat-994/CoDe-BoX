#include <stdio.h>

int main()
{
    int n, position, arr[100];

    printf("Enter the integer value of n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arr[i]);
    }

    printf("Position: ");
    scanf("%d", &position);

    for (int i = position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
