#include <stdio.h>

int main() {
    int val;
    int counter;
    scanf("%d",&val);
    for(counter=1;counter<=val;counter++)
    {
        printf("%d",2*counter-1);
        if(counter<val)
        {
            printf(",");
        }else{
        break;
        }
    }
    return 0;
}
