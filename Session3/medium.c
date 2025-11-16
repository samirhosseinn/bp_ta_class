#include "stdio.h"

int main()
{
    // fibonacci sequence up to N terms

    // int a = 1, b = 1, Len, count = 0;

    // printf("PLeas enter the length :");
    // scanf("%d", &Len);
    // while (count < Len)
    // {
    //     int BackUp = b;
    //     b += a;
    //     a = BackUp;
    //     printf("%d", a);
    //     count++;
    // }

    // int a = 1, b = 1, len;
    // int nex;

    // printf("Please enter a number:\n");
    // scanf("%d", &len); // len >= 3

    // printf("1, 1, ");
    // for(int i = 0 ; i < len - 2; i++){
    //     nex = a + b;
    //     a = b;
    //     b = nex;
    //     printf("%d, ", nex);
    // }

    // Reverse the digits of a number
    // int n;
    // printf("please enter a number :\n");
    // scanf("%d", &n);

    // while (n)
    // {
    //     printf("%d", n % 10);
    //     n /= 10;
    // }

    // sum of digits of a number
    // int n;
    // printf("please enter a number :\n");
    // scanf("%d", &n);

    // int sum = 0;
    // while (n)
    // {
    //     sum += n % 10;
    //     n /= 10;
    // }

    // printf("sum : %d", sum);

    // find the largest digit in a number

    // int number = 452801921;
    // int max = 0;
    // printf("largest digit in %d ", number);
    // while (number)
    // {
    //     if (max < number % 10)
    //         max = number % 10;
    //     number /= 10;
    // }

    // printf("is %d\n", max);

    // calculate factorial
    // int n = 5;
    // int fac = 1;
    // while (n)
    //     fac *= n--;
    // printf("factorial is : %d", fac);

    // check if a number is prime or not
    int number = 24;

    if (number == 1)
    {
        printf("The number 1 is neither prime nor composite.\n");
    }
    else
    {

        int isPrime = 1;

        for (int i = 2; i * i  <= number; i++)
        {
            if (number % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d is prime\n", number);
        else
            printf("%d is composite\n", number);
    }
    return 0;
}