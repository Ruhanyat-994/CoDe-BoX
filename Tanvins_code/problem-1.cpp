#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    for(int row=1;row<=number;row++)
    {
        for(int col=1;col<=number;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
}
