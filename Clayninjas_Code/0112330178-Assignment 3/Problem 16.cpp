#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arr[i]);
        int check = arr[i];
        if (check < 0)
        {
            printf("Negetive integer spoted. Try again!\n");
            main();
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] = 0;
        }
    }

    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}