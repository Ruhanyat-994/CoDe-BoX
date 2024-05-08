/*Function to swap two numbers.
(Restriction: Pass by reference)*/
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("Value in func: %d %d\n", *x, *y);
}

int main()
{
    int x, y;

    printf("Enter two integer value: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("Value in main: %d %d\n", x, y);

    return 0;
}