#include <stdio.h>

int main()
{
    int n; 
    double num;
    double sum = 0.0, average;

    printf("Enter the number of values is to be inputed: ");
    scanf("%d", &n);
    getchar();

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &num);
        sum += num;
    }

    main();
    average = sum / n;
    printf("AVG of %d inout(s): %lf\n", n, average);

    return 0;
}
