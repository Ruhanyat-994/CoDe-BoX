#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }

    printf("Result: %d\n", sum);

    return 0;
}

/*This is a Practice program for printing the Following series
1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, …….*/

// #include <stdio.h>

// int main()
// {
//     int n, i;

//     printf("Enter the value of N: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d", -i);
//         }
//         else
//         {
//             printf("%d", +i);
//         }
//         if(i < n)
//         {
//             printf(",");
//         }
//     }

//     return 0;
// }
