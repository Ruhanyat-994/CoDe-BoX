#include<stdio.h>

int main() {
    int num, reversed = 0, remainder, original;
    scanf("%d", &num);
    original = num;

    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }

    if (original == reversed) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
