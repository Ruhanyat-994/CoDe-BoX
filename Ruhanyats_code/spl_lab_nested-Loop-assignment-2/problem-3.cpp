

#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    for(int row=1;row<=number;row++)
    {
        for(int col=row;col<row+row;col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}
