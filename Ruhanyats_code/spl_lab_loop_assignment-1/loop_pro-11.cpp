#include<stdio.h>
int main()
{
    int i,N,sum=0;
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {

        sum = sum + (i+1)*(i*i);

    }
    printf("%d",sum);
}
