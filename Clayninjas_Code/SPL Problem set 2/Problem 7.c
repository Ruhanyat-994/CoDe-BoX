#include <stdio.h>

int main()
{
    int integer = -150;
    float floatingNum = 123.125;

    // Assignment operator.
    int convertedInt = floatingNum;
    float convertedFloat = integer;
    printf("Assignment: %f assigned to an int produces %d\n", floatingNum, convertedInt);
    printf("Assignment: %d assigned to an float produces %f\n", integer, convertedFloat);

    printf("\n");

    // Type Casting.
    printf("Type Casting: (float) %d produces %f\n", integer, (float)(integer));
    printf("Type Casting: (int) %f produces %d\n", floatingNum, (int)(floatingNum));

    return 0;
}