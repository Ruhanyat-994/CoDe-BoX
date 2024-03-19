#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    for(int row=1;row<=num;row++)
    {
        for(int col=num;col>=row;col--)
        {
            printf("%d",col);
        }
        printf("\n");
    }
}
