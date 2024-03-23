#include <stdio.h>
#include <math.h>
int main()
{
    double x, term, sum = 0;
    int sign = 1, fact = 1;
    scanf("%lf", &x);
    for (int i = 1; i <= 15; i += 2)
    {
        term = sign * pow(x, i) / fact;
        sum += term;
        sign *= -1;
        fact *= (i + 1) * (i + 2);
    }
    printf("%.3lf\n", sum);
    return 0;
}