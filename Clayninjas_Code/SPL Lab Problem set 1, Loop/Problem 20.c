#include <stdio.h>

int main()
{
    int n, sum = 0, term = 0;

    printf("Enter integer N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        term = term * 10 + i;
        sum += term;
    }
    printf("%d\n", sum);

    return 0;
}

/*Practice for printing the following series
1 + 12 + 123 + 1234 + …….*/

// #include <stdio.h>

// int main()
// {
//     int n, term = 0;

//     printf("Enter integer N: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         term = term * 10 + i;
//         printf(" %d ", term);
//         if (i < n)
//         {
//             printf("+");
//         }
//     }

//     return 0;
// }
