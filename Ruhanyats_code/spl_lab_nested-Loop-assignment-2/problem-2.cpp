
#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    for(int row=1;row<=number;row++)
    {
        for(int col=row;col<row+number;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
}
