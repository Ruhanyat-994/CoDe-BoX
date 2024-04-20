#include <stdio.h>
int main()
{
    int n, m, arr3[100];
    printf("Enter the size of First array : ");
    scanf("%d", &n);

    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of Second array : ");
    scanf("%d", &m);

    int arr2[m];

    for (int i = 0; i < m; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arr2[i]);
    }

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            arr3[k] = arr1[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}