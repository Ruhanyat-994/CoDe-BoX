#include<stdio.h>
int main()
{
    int val,counter;
    scanf("%d",&val);
    for(counter=1;counter<=val;counter++)
    {
        printf("%d ",counter);
        if(counter<val)
        {
            printf(",");
        }else{
        break;
        }
    }

}
