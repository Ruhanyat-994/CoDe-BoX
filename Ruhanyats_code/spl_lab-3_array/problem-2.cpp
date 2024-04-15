#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    scanf("%d",&num);

    int arr[num];

    //this for loop is for looping to num and taking the other numbers as input
    for(int i = 0 ; i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    // this loop is for sum the numbers of the array

    for(int i=num-1;i>=0;i--)
    {
        sum=sum+arr[i];

    }
    printf("%d",sum);

}
