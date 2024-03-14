#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int totalSum = 0, currentTerm = 0;

    for (int i = 1; i <= num; i++) {
        currentTerm = currentTerm * 10 + i;
        totalSum += currentTerm;
    }

    printf("%d", totalSum);

    return 0;
}
