#include <stdio.h>

int main()
{
    int n, number, arr[100];

    printf("Enter the integer value of n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &number);

    int foundIndexes[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            foundIndexes[count] = i;
            count++;
        }
    }

    if (count > 0)
    {
        printf("FOUND at index position:");
        for (int i = 0; i < count; i++)
        {
            printf(" %d,", foundIndexes[i]);
        }
        printf("\n");
    }
    else
    {
        printf("NOT FOUND\n");
    }

    return 0;
}
