#include <stdio.h>

int main() {
    int val;
    int counter;
    scanf("%d",&val);
    for(counter=1;counter<=val;counter++)
    {
        if(counter%2==0)
        {
            printf("0");

        }else{
        printf("1");
        }

        if (counter<val)
        {
            printf(",");
        }else{
        break;
        }
    }
}
