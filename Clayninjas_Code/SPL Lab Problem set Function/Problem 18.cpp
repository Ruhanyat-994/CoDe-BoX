/*Function “IsPrime()” to determine whether a number is prime or not.*/

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

int main()
{
    int n;

    printf("Enter your integer number: ");
    scanf("%d", &n);

    bool flag = isPrime(n);

    if (flag == true)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }
    return 0;
}
