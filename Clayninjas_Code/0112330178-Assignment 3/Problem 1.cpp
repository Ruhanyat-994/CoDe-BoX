#include <stdio.h>

int main()
{
    int arr[100];
    int n;

    printf("Enter integer number n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}