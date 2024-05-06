#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;

    printf("Enter angle 1: ");
    scanf("%d", &angle1);
    printf("Enter angle 2: ");
    scanf("%d", &angle2);
    printf("Enter angle 3: ");
    scanf("%d", &angle3);

    int sum = (angle1 + angle2 + angle3);

    if (sum == 180 && angle1 > 0 && angle1 < 180 && angle2 > 0 && angle2 < 180 && angle3 > 0 && angle3 < 180)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}