#include <stdio.h>

int main()
{
    int n, number, position, arr[100];

    printf("Enter the integer value of n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert: ");
    scanf("%d", &number);

    printf("Position: ");
    scanf("%d", &position);

    for (int i = n - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[position] = number;

    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
