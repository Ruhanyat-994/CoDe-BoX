#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm, small;


    scanf("%d %d", &num1, &num2);

    if (num1 < num2) {
        small = num1;
    } else {
        small = num2;
    }

    for (int counter = 1; counter <= small; counter++) {
        if (num1 % counter == 0 && num2 % counter == 0) {
            gcd = counter;
        }
    }

    lcm = (num1 * num2) / gcd;

    printf("GCD = %d\nLCM = %d\n", gcd, lcm);

    return 0;
}
