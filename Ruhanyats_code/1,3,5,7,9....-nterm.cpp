
#include <stdio.h>

int main() {

    int N,counter,value;
    scanf("%d",&N);
    for(counter=0;counter<N;counter++)
    {
        value = 2*counter +1;
        printf("%d",value);
    }
    return 0;
}
