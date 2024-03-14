#include <stdio.h>

int main() {
    int counter;
    char value;

    for (counter = 1;; counter++) {
        scanf("%c", &value);

        if (value == 'A') {
            printf("\n");
            break;
        }
         printf("%c", value);
    }

    return 0;
}
