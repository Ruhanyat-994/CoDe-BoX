#include <stdio.h>

int main()
{
    float number[5];
    int positiveCounter = 0, negativeCounter = 0;

    printf("Enter 5 numbers: ");
    scanf("%f", &number[0]);
    printf("Enter 5 numbers: ");
    scanf("%f", &number[1]);
    printf("Enter 5 numbers: ");
    scanf("%f", &number[2]);
    printf("Enter 5 numbers: ");
    scanf("%f", &number[3]);
    printf("Enter 5 numbers: ");
    scanf("%f", &number[4]);

    for (int j = 0; j < 5; j++)
    {
        if (number[j] > 0)
        {
            positiveCounter ++;
        }
        else if (number[j] < 0)
            negativeCounter++;
    }
    printf("Number of positive numbers: %d\n", positiveCounter);
    printf("Number of negative numbers: %d\n", negativeCounter);
    return 0;
}