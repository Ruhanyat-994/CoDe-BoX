/*
Write a program in C to read 10 numbers from the keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000
*/

#include<stdio.h>
int main()
{
    int i,N, sum,counter;
    for (i=1;i<=10;i++)
    {
        scanf("%d",&N);
        int sum;
        sum +=N;


    }
    float avg;
    avg = sum / 10.0;
    printf("%f",avg);


}