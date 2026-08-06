#include <stdio.h>

int binomialCoefficient(int n, int r)
{
    if (r == 0 || r == n)
        return 1;

    return binomialCoefficient(n - 1, r - 1) +
           binomialCoefficient(n - 1, r);
}

int main()
{
    int n, r;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    printf("Binomial Coefficient = %d", binomialCoefficient(n, r));

    return 0;
}