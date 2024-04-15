#include<stdio.h>
int main()
{
    int num;
    float sum=0.0;
    float avg;
    scanf("%d",&num);

    float arr[num];

    //this for loop is for looping to num and taking the other numbers as input
    for(int i = 0 ; i<num;i++)
    {
        scanf("%f",&arr[i]);
    }

    for(int i=num-1;i>=0;i--)
    {

        sum=sum+arr[i];

    }
    avg=sum/ (float)num;
    printf("%.2f",avg);

}
