/*Print the following series.
2 + 24 + 246 + 2468 + ......nth*/

#include <stdio.h>

int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int sum = 0;
    int flag = 2;
    int remainder;
    for (int i = 1; i <= N; i++)
    {
        printf("%d", flag);
        sum += flag;
        if (i != N)
            printf(" + ");
        remainder = flag % 10;
        remainder = remainder + 2;
        flag = flag * 10 + remainder;
    }

    printf(" = %d\n", sum);

    return 0;
}
