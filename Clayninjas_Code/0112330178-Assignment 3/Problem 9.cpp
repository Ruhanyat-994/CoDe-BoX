#include <stdio.h>

int main()
{
    int n;
    char arr[100];

    printf("Enter the integer value of n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%c", &arr[i]);
    }

    int Count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
            arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
        {
            Count++;
        }
    }

    printf("Count: %d\n", Count);

    return 0;
}
