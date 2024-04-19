#include <stdio.h>

int main()
{
    int n, arr1[100], arr2[100], arr3[100];

    printf("Enter integer number n : ");
    scanf("%d", &n);

    printf("First Arry\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arr1[i]);
    }

    printf("\n");

    printf("Second Arry\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i] + arr2[i]; 
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}
