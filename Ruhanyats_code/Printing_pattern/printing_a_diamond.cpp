#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    for(int row=1;row<=n*2-1;row++)
    {
        int noOfCol = (row>n) ? (2*n -row): row;
        int noOfSpaces=n-noOfCol;

        for(int s=1;s<=noOfSpaces;s++)
        {
            printf(" ");
        }
        for(int col=1;col<=noOfCol;col++)
        {

            printf("* ");
        }
        printf("\n");
    }
}


