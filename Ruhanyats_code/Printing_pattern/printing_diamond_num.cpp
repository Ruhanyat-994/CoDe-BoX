

#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    for(int row=1;row<=2*n-1;row++)
    {

        int noOfCol = (row>n) ? (2*n -row): row;
        int spaces = n-noOfCol;

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
