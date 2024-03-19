 #include<stdio.h>
  int main() {
    int x, y;
    int squ_value = 1;
    scanf("%d%d", &x, &y);
    for(int counter = 0; counter < y; counter++) {
      squ_value = squ_value*x;
    }
    printf("%d\n", squ_value);
    return 0;
  }
