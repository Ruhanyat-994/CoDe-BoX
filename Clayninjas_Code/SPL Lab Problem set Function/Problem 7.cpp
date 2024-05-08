/*Function to calculate the sum of n numbers coming from the console and stored in an array.*/
#include <stdio.h>

int calculateSum(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;

    printf("How many numbers you want to sum?\n");
    scanf("%d", &n);

    int numbers[n];
    int suminMain = 0;

    printf("Enter %d number: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
        suminMain += numbers[i];
    }

    int suminFunction = calculateSum(numbers, n);

    printf("Sum in Function: %d\n", suminFunction);
    printf("Sum in main: %d\n", suminMain);

    return 0;
}