/*
 Write a C program to compute the sum of the first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
*/

#include<stdio.h>
int main()
{
    int N, counter,sum =0;
    N= 10;
    for (counter=1;counter<=N;counter++)
    {
        
        sum = sum+counter;
    }
    printf("The Sum is: %d ",sum);
}
