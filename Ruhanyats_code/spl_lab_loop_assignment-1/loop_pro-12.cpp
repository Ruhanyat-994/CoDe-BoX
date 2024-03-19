
  #include<stdio.h>
  int main() {
    int n, i;
    int first = 1, second = 1, next;
    scanf("%d", &n);
    if(n==1){
      printf("1");
    }else{
      printf("%d, %d", first, second);
      for (i = 3; i <= n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
      }
    }
  return 0;
  }
