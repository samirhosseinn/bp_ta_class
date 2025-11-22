#include "stdio.h"

// Check if a number is a Prime Number
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;

    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

// Count how many digits a number has
int countDigits(int n) {
    int count = 0;

    if (n == 0) return 1;
    if (n < 0) n = -n;

    while (n > 0) {
        n /= 10;
        count++;
    }

    return count;
}


// Calculate factorial with recursive function
int factorial(int n) {
    if (n < 0) return -1;     
    if (n == 0) return 1;     

    return n * factorial(n - 1);
}


// Sum of numbers from 1 to n with recursive function
int sumToN(int n)
{
    // if (n == 0)
    //     return 1;
    // if (n < 0)
    //     return sumToN(-n);
    if (n == 1)
        return 1;

    return n + sumToN(n - 1);
}

// Count digits of a number with recursive function
int countDigitsRecursive(int n) {
    if (n < 0) n = -n;        
    if (n < 10) return 1;     

    return 1 + countDigitsRecursive(n / 10);
}


// Reverse a number with recursive function
/*you may need a helper function also*/
int helper(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }

    return helper(n / 10, rev * 10 + n % 10);
}

int reverse(int n)
{
    return helper(n, 0);
}

// Calcuolate Fibonacci with recursive function
int fib(int n)
{
    if (n == 0)
    {
        return 0; // Base case 1
    }
    else if (n == 1)
    {
        return 1; // Base case 2
    }
    else
    {
        return fib(n - 1) + fib(n - 2); // Recursive case (sum of two previous)
    }
}

int main()
{

    printf("sumToN %d\n", sumToN(5));

    printf("reverse : %d\n", reverse(123));

    return 0;
}
