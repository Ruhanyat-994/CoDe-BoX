#include<stdio.h>
int main()
{
    int times,i;
    float A,HW,CT,MT,TF;
    scanf("%d",&times);

    for(i=1;i<=times;i++)
    {
        scanf("%f%f%f%f%f",&A,&HW,&CT,&MT,&TF);
        float sum = (A+HW+CT+MT+TF);
        float percentage = (sum/180)*100;
         if (percentage >= 90) {
              printf("Student %d : A\n",i);
          } else if (percentage >= 86 && percentage <= 89) {
              printf("Student %d : A-\n",i);
          } else if (percentage >= 82 && percentage <= 85) {
              printf("Student %d : B+\n",i);
          } else if (percentage >= 78 && percentage <= 81) {
              printf("Student %d : B\n",i);
          } else if (percentage >= 74 && percentage <= 77) {
              printf("Student %d : B-\n",i);
          } else if (percentage >= 70 && percentage <= 73) {
              printf("Student %d : C+\n",i);
          } else if (percentage >= 66 && percentage <= 69) {
              printf("Student %d : C\n",i);
          } else if (percentage >= 62 && percentage <= 65) {
              printf("Student %d : C-\n",i);
          } else if (percentage >= 58 && percentage <= 61) {
              printf("Student %d : D+\n",i);
          } else if (percentage >= 55 && percentage <= 57) {
              printf("Student %d : D\n",i);
          } else {
              printf("Student %d : F\n",i);
          }
      }
      return 0;
    }

