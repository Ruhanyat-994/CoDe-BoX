#include<stdio.h>
int main()
{
    int N,counter,sum=0;
    scanf("%d",&N);
    for(counter=1;counter<=N;counter++)
    {
        if(counter%2==0)
        {
            sum=sum-counter;
        }
        else{
            sum=sum+counter;
        }
    }
    printf("%d",sum);
}
