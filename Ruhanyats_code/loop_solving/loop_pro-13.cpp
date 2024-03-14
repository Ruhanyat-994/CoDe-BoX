#include<stdio.h>

int main() {
    int num, counter, fact = 1;



    scanf("%d", &num);


    printf("%d! = ", num);


    for (counter = num; counter >= 1; counter--) {
        fact = fact * counter;
        printf("%d", counter);

        if (counter > 1) {
            printf(" X ");
        }
    }


    printf(" = %d\n", fact);

    return 0;
}
