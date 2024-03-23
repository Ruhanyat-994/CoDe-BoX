#include <stdio.h>

int main()
{
    int num;


    scanf("%d", &num);


    if(num%2!=0){

    for (int row = 0; row <= num / 2; row++) {
        for (int col = 0; col < num / 2 - row; col++)
            printf("_");

        for (int col = 0; col < 2 * row + 1; col++)
            printf("$");

        for (int col = 0; col < num / 2 - row; col++)
            printf("_");

        printf("\n");
    }


    for (int row = num / 2 - 1; row >= 0; row--) {
        for (int col = 0; col < num / 2 - row; col++)
            printf("_");

        for (int col = 0; col < 2 * row + 1; col++)
            printf("$");

        for (int col = 0; col < num / 2 - row; col++)
            printf("_");

        printf("\n");
    }
    }
}
