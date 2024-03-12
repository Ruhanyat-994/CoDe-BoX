#include <stdio.h>

int main() {
    int n = 3;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n - row + 1; col++) {
 for (int i = n * 2; i >= 1; i=i-2) {
                printf("%d ", i);
            }
        }

        printf("\n");
    }

    return 0;
}
