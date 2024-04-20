#include <stdio.h>

int main()
{
    int n, m, arra[100], arrb[100];

    printf("Enter integer number n : ");
    scanf("%d", &n);

    int arrA[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arrA[i]);
    }

    printf("Enter integer number m : ");
    scanf("%d", &m);

    int arrB[m];

    for (int j = 0; j < m; j++)
    {
        printf("Enter integer number for index %d : ", j);
        getchar();
        scanf("%d", &arrB[j]);
    }

    for (int i = 0; i < n; i++)
    {
        int temp = arrA[i];
        arrb[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        int temp = arrB[i];
        arra[i] = temp;
    }

    printf("Arry A: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d", arra[i]);
    }

    printf("\n");

    printf("Arry B: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d", arrb[j]);
    }

    return 0;
}
