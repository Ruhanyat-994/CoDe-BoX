#include <Stdio.h>

int main()
{
    int arr[100], n, sum = 0;

    printf("Enter intiger number n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}