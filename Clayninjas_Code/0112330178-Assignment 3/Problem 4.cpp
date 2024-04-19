#include <stdio.h>

int main()
{
    float arr[100], average, sum = 0;
    int n;

    printf("Enter intiger number n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer number for index %d : ", i);
        getchar();
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("%.2f", average);

    return 0;
}