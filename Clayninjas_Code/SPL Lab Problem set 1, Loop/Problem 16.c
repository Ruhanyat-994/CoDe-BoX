#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int x, y;
    int gcd_val, lcm_val;
    scanf("%d %d", &x, &y);
    gcd_val = gcd(x, y);
    lcm_val = (x * y) / gcd_val;
    printf("GCD: %d\n", gcd_val);
    printf("LCM: %d\n", lcm_val);
    return 0;
}