
#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    for(int row=1;row<= n;row++)
    {
        int spaces = n-row;

        for(int s=1 ; s<= spaces;s++)
        {
            printf("  ");
        }

        for(int col =row ; col>= 1; col--)
        {
            printf("%d ",col);
        }
        for(int col=2 ; col<= row ; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}
