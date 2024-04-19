#include <stdio.h>

int main()
{
    int arrA[100], arrB[100];
    int n;

    printf("Enter integer number n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arrA[i]);
    }

    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        arrB[i] = arrA[j];
    }

    printf("Arry A : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrA[i]);
    }

    printf("\n");

    printf("Arry B : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrB[i]);
    }

    return 0;
}
