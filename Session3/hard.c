#include "stdio.h"

int main()
{

    // LCM Least Common Multiple (ک م م)
    // int a = 2;
    // int b = 3;

    // int base = (a > b) ? a : b;

    // while (1)
    // {
    //     if (base % a == 0 && base % b == 0)
    //     {
    //         printf("LCM : %d\n", base);
    //         break;
    //     }
    //     base++;
    // }

    // Check if a number is a Perfect Number
    /*(A number equal to the sum of its proper divisors, e.g. 28 = 1 + 2 + 4 + 7 + 14)*/
    // int number = 1;

    // if (number == 1)
    // {
    //     printf("%d is not a perfect number.\n", number);
    // }
    // else
    // {
    //     int sum = 1; // 1 is always a proper divisor

    //     for (int i = 2; i * i <= number; i++)
    //     {
    //         if (number % i == 0)
    //         {
    //             sum += i;
    //             if (i != number / i)
    //                 sum += number / i;
    //         }
    //     }

    //     if (sum == number)
    //         printf("%d is a perfect number.\n", number);
    //     else
    //         printf("%d is not a perfect number.\n", number);
    // }

    // Check if a number is a Strong Number
    /*(A strong number is one where the sum of the factorials of digits = number, e.g. 145 → 1! + 4! + 5! = 145)*/
    // int number = 145;
    // int original = number;
    // int sum = 0;

    // while (number > 0)
    // {
    //     int digit = number % 10;

    //     // start calculating factorial of each digit
    //     int fact = 1;
    //     for (int i = 1; i <= digit; i++)
    //         fact *= i;
    //     // end calculating factorial of each digit

    //     sum += fact;
    //     number /= 10;
    // }

    // if (sum == original && original != 0)
    //     printf("%d is a Strong Number.\n", original);
    // else
    //     printf("%d is not a Strong Number.\n", original);

    // Print all prime numbers between 1 and N
    // int N = 100;

    // for (int num = 2; num <= N; num++)
    // {
    //     int isPrime = 1;

    //     for (int i = 2; i * i <= num; i++)
    //     {
    //         if (num % i == 0)
    //         {
    //             isPrime = 0;
    //             break;
    //         }
    //     }

    //     if (isPrime)
    //         printf("%d ", num);
    // }
    // printf("\n");

    // Display a number pyramid pattern (triangle numbers)
    /*  e.g. : n = 4
        1
        1 2
        1 2 3
        1 2 3 4
    */
    int n = 10;

    for (int i = 1; i <= n; i++)
    { // rows
        for (int j = 1; j <= i; j++)
        { // numbers inside each row
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}