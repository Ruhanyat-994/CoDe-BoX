//Function to print an input character value.
#include <stdio.h>

void print(char c)
{
    printf("%c", c);
}

int main()
{
    char input;
    scanf("%c", &input);
    getchar();

    print(input);

    return 0;
}