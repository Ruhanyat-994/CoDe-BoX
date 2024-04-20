
#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);
    int arr[num1];

    for(int i = 0;i<num1;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i=num1-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

}

