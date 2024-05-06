#include <stdio.h>

int main()
{
    float input = 123.098;

        printf("Val : \t\t%f\n", input);
    printf("Val : %f\n", input);
    printf("Val : %0.2f\n", input);
    printf("Val : %d\n", (int)(input + 0.098));
    printf("Val : %e\n", input);

    return 0;
}