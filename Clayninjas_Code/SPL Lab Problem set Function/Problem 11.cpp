/*Function to take a string as input and find its length.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_length 100

void Findlength(char str[])
{
    int length = strlen(str);

    printf("%d", length - 1);
}

int main()
{
    char str[max_length];
    fgets(str, max_length, stdin);

    Findlength(str);

    return 0;
}
