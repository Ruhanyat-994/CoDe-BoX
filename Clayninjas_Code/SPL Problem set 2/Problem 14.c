#include <stdio.h>
#include <math.h>

int main() {
    double x;

    printf("Enter a floating-point number : ");
    scanf("%lf", &x);

    double A = ceil(x);
    double B = floor(x);
    double C = fabs(x);

    printf("A = %.lf\n", A);
    printf("B = %.lf\n", B);
    printf("C = %.2lf\n", C);

    return 0;
}