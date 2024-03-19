#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    printf("%d",X*X);
    if(X<Y)
    {
        for(;X<(Y-1);X++)
        {
            printf(",%d",(X+1)*(X+1));

        }

                printf(",Reached!\n");



    }else if (X>Y)
    {
        for (;X>Y+1;X--)
        {
            printf(",%d",(X-1)*(X-1));

        }
         printf(",Reached!\n");

    }

}
