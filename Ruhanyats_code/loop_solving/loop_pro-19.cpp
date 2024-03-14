#include <stdio.h>
#include<math.h>
int main() {
    double input, currentTerm, result = 0;
    int sign = 1, factorial = 1;

    scanf("%lf", &input);

    for (int i = 1; i <= 15; i += 2) {
        currentTerm = sign * pow(input, i) / factorial;
        result += currentTerm;
        sign *= -1;
        factorial *= (i+1) * (i+2);
    }

    printf("%.3lf\n", result);
    return 0;
}
