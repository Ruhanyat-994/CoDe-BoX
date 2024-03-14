#include<stdio.h>
int main()
{
    int num;
    double sum=0;
    double value;
    scanf("%d",&num);
    int counter;

    for(counter=1;counter<=num;counter++)
    {
        scanf("%lf",&value);
        sum = sum+value;

    }
    double avarage = sum/num;
    printf("AVG of %d inputs: %lf",num,avarage);
}
