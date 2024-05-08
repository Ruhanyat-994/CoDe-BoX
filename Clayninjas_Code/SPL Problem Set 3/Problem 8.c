#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year : ");
    scanf("%d", &year);
    getchar();

    if (year <= 0)
    {
        printf("Invalid year! Try again");
        main();
    }
    else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}