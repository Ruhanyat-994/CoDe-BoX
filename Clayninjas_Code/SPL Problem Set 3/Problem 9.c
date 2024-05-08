#include <stdio.h>

int main()
{
    char input;

    printf("Give a input : ");
    scanf("%c", &input);

    if (input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z')
    {
        printf("Alphabet\n");
    }
    else if (input >= '0' && input <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special\n");
    }

    return 0;
}