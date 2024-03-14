#include<stdio.h>
int main()
{
    int val, remainder;
    int rev_value=0;
    scanf("%d",&val);
    for (; val!=0;val/=10)
    {
        remainder=val%10;
        rev_value=rev_value*10 + remainder;

    }
    printf("%d",rev_value);
}
