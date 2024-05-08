#include <stdio.h>
#include <math.h>

int main()
{
    int a = 2, b = 4, c = -16;

    float rootPlus = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    float rootMinus = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    printf("%0.2f\t%0.2f\n", rootPlus, rootMinus);

    return 0;
}