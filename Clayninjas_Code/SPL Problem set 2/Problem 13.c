#include <stdio.h>
#include <math.h>

int main()
{
    double x = 30;

    double equation = 2 * cos(x) * cos(x) - sqrt(3) * sin(x) + sin(x / 2);

    printf("%lf\n", equation);

    return 0;
}