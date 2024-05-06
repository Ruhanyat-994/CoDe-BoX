#include <stdio.h>

int main()
{
    int num1, store, num2 = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num1);
    store = num1;
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

    if (num2 == store)
    {
        printf("Yes\n");
    }
    else 
    {
        printf("No\n");
    }

    return 0;
}
