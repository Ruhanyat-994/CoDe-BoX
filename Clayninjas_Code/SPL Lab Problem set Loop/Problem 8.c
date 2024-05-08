#include <stdio.h>

int main()
{
    int num1, a, num2 = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num1);
    getchar();

    if (num1 == 0)
    {
        printf("Invalid number. Try again!\n");
        main();
    }

    while (num1 != 0)
    {
        remainder = num1 % 10;
        num2 = num2 * 10 + remainder;
        num1 /= 10;
    }

    printf("%d\n", num2);

    return 0;
}
