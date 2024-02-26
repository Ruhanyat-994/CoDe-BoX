// Write a C program that read 5 numbers and sum of all odd values between them.

#include <stdio.h>

int main()
{
    int number[5], sum = 0.0;

    printf("Input the first number: ");
    scanf("%d", &number[0]);
    printf("Input the second number: ");
    scanf("%d", &number[1]);
    printf("Input the third number: ");
    scanf("%d", &number[2]);
    printf("Input the fourth number: ");
    scanf("%d", &number[3]);
    printf("Input the fifth number: ");
    scanf("%d", &number[4]);

    for(int i = 0; i <5; i++)
    {
        if(number[i] % 2 != 0)
        {
            sum += number[i];
        }
    }
    printf("Sum of all odd values: %d\n", sum);

    return 0;
}