#include <stdio.h>
int main()
{
    int n, m, intersect[100];
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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n;)
        {
            if (arr1[j] == arr1[i])
            {
                for (int k = j; k < n; k++)
                {
                    arr1[k] = arr1[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m;)
        {
            if (arr2[j] == arr2[i])
            {
                for (int k = j; k < m; k++)
                {
                    arr2[k] = arr2[k + 1];
                }
                m--;
            }
            else
            {
                j++;
            }
        }
    }

    int C[n + m];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        C[k] = arr1[i];
        k++;
    }
    for (int i = 0; i < m; i++)
    {
        int isDuplicate = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr2[i] == arr1[j])
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate)
        {
            C[k] = arr2[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ", C[i]);
    }
    return 0;
}