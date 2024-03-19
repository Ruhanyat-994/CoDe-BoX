#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    for(int row=1;row<=num;row++)
    {

        for(int s=1;s<=num-row;s++)
        {
            printf("_");
        }
        for(int col=1;col<=row;col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
}
