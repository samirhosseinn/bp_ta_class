
#include <stdio.h>

int main(void)
{
    // // --- S1 ---
    // int i = 3, j = 4;
    // i += (i << 1) + (j += 2);
    // printf("S1: i = %d, j = %d\n", i, j);

    // // --- S2 ---
    // int a = 2, b = 5;
    // a += (b -= 2) + (a + 3);
    // printf("S2: a = %d, b = %d\n", a, b);

    // // --- S3 ---
    // int x = 5, y = 7;
    // x = x + (y &= 6);
    // printf("S3: x = %d, y = %d\n", x, y);

    // // --- S4 ---
    // int u = 9, v = 12;
    // u ^= (v -= 5) << 1;
    // printf("S4: u = %d, v = %d\n", u, v);

    // // --- S5 ---
    // int d = 2, e = 3, t;
    // t = (d += 1) && (e -= 2);
    // printf("S5: d = %d, e = %d, t = %d\n", d, e, t);

    /* Undefined Operation

    int a = 2, b = 5;
    a += (b -= 2) + (a *= 2);
    printf("S2: a = %d, b = %d\n", a, b);

    */

    /* IF Questions */

    // check if a number is even or not

    // int a;
    // printf("Please enter a number: \n");
    // scanf("%d", &a);

    // if (a % 2 == 0)
    // {
    //     printf("%d is even\n", a);
    // }
    // else
    // {
    //     printf("%d is odd\n", a);
    // }

    // if (a % 2 == 0)
    // {
    //     printf("%d is even\n", a);
    // }
    // else if(a % 2 == 1)
    // {
    //     printf("%d is odd\n", a);
    // }

    // check if a character is a vowel 5
    // a e i o u
    // char a;
    // printf("Please enter a character: \n");
    // scanf("%c", &a);

    // if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    // {
    //     printf("%c is vowel\n", a);
    // }
    // else
    // {
    //     printf("%c is constant\n", a);
    // }

    // check if a person can vote or not

    int age = 15;

    if(age < 18)
        printf("can not vote");
    else
        printf("can vote");
        
    

    return 0;
}