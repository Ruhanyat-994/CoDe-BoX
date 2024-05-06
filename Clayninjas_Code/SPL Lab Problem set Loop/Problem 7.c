#include <stdio.h>

int main()
{
    char input;

    printf("Enter a character (Enter A to exit): ");

    do
    {
        input = getchar();

        if (input != 'A')
        {
            printf("%c", input);
        }
    } while (input != 'A');

    printf("\n");

    return 0;
}
