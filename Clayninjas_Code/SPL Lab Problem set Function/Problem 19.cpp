/*Function “GeneratePrime()” to compute the prime numbers less than N, where N is an input
integer. GeneratePrime() uses IsPrime() to check whether a number is prime or not.*/

#include <stdio.h>

bool isPrime(int n)
{
    if (n <= 1 || n == 0)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }

    return true;
}

void GeneratePrime(int n)
{
    printf("Prime less than %d: ", n);
    for (int i = 1; i < n; i++)
    {
        bool flag = isPrime(i);
        if (flag == true)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter your integer number: ");
    scanf("%d", &n);

    GeneratePrime(n);

    return 0;
}
