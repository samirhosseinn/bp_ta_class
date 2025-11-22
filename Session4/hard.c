#include "stdio.h"

// Recursive Power Function
double power(double base, int exp)
{
    if (exp == 0)
        return 1.0;

    if (exp < 0)
    {
        return 1.0 / power(base, -exp);
    }

    return base * power(base, exp - 1);
}

// Sum of digits using recursion (with negative support)
int sumOfDigits(int n)
{
    if (n < 0)
        n = -n; // support negative numbers

    if (n < 10)
        return n; // base case

    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{

    return 0;
}