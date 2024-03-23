#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);


    for (int i = 1; i <= rows; i++) {


        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (int k = 0; k < (rows - i)+1 ; k++) {
            printf("_");
        }


        for (int l = i; l >= 1; l--) {
            printf("%d", l);
        }


        printf("\n");
    }

    return 0;
}
