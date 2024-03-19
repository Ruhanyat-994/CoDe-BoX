#include <stdio.h>

int main()
 {
    int n;
    scanf("%d",&n);
    if (n % 2 !=0) {


    for (int i = 0; i < (n + 1) / 2; i++) {

        for (int j = 0; j < (n - 1) / 2 - i; j++) {
            printf("_");
        }

        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }


    for (int i = (n - 1) / 2 - 1; i >= 0; i--) {

        for (int j = 0; j < (n - 1) / 2 - i; j++) {
            printf("_");
        }

        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}
 }

