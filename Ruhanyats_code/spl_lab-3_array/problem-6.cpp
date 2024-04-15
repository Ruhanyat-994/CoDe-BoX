#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    int arr1[num],arr2[num],sum[num];

    //this for loop is for looping to num and taking the other numbers as input
    for(int i = 0 ; i<num;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i= 0; i<num;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0; i<num;i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }
    for(int i = 0; i < num; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");




}
