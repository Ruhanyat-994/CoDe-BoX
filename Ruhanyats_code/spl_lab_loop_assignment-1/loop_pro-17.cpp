#include<stdio.h>
  int main() {

    int num, counter, factor = 0;
    scanf("%d", &num);


    for (counter = 2; counter <= num/2; ++counter) {
      if (num % counter == 0) {
        factor = 1;
        break;
      }
    }

    if (num == 1) {
      printf("Not prime");
    } else {

      if (factor == 0){
        printf("Prime\n");
      }
      else{
        printf("Not prime\n");
      }
    }
    return 0;
  }
