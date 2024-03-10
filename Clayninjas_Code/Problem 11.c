#include <stdio.h>

int main()
{
    int mark;

    printf("Enter final mark : ");
    scanf("%d", &mark);

    if (mark >= 90 && mark <= 100)
    {
        printf("A");
    }
    else if (mark >= 86 && mark <= 89)
    {
        printf("A-");
    }
    else if (mark >= 82 && mark <= 85)
    {
        printf("B+");
    }
    else if (mark >= 78 && mark <= 81)
    {
        printf("B");
    }
    else if (mark >= 74 && mark <= 77)
    {
        printf("B-");
    }
    else if (mark >= 70 && mark <= 73)
    {
        printf("C+");
    }
    else if (mark >= 66 && mark <= 69)
    {
        printf("C");
    }
    else if (mark >= 62 && mark <= 65)
    {
        printf("C-");
    }
    else if (mark >= 58 && mark <= 61)
    {
        printf("D+");
    }
    else if (mark >= 55 && mark <= 57)
    {
        printf("D");
    }
    else if (mark < 55)
    {
        printf("F");
    }

    return 0;
}