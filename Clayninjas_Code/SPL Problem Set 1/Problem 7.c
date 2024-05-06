#include <stdio.h>

int main()
{
    int integer;
    float floatingNumber;
    char ch;

    printf("Enter integer number : ");
    scanf("%d", &integer);
    printf("Enter floating point number : ");
    scanf("%f", &floatingNumber);
    printf("Enter character value : ");
    scanf(" %c", &ch);

    printf("\n");

    printf("The integer value : %d\n", integer);
    printf("The floating point value : %f\n", floatingNumber);
    printf("The character value : %c\n", ch);

    return 0;
}