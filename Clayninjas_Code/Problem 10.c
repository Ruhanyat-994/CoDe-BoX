#include <stdio.h>

int main()
{
    float num1, num2;
    char operator;

    printf("Enter First number : ");
    scanf("%f", &num1);
    printf("Enter operator : ");
    getchar();
    scanf("%c", &operator);
    printf("Enter second number : ");
    scanf("%f", &num2);

    switch (operator)
    {
    case '+':
    {
        printf("Addition: %0.2f\n", num1 + num2);
        break;
    }
    case '-':
    {
        printf("Subtraction: %0.2f\n", num1 - num2);
        break;
    }
    case '*':
    {
        printf("Multiplication: %f\n", num1 * num2);
        break;
    }
    case '/':
    {
        if (num2 != 0)
            printf("Division: %f\n", num1 / num2);
        else
            printf("Division : Zero as divisor is not valid\n");
        break;
    }
    }

    return 0;
}