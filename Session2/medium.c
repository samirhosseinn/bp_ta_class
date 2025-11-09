#include <stdio.h>

int main(void)
{
    // // --- M1 ---
    // int a1 = 1, b1 = 2, c1;
    // c1 = (a1++ && (b1 += 3)) ? (a1 + b1) : (a1 - b1);
    // printf("M1: a1 = %d, b1 = %d, c1 = %d\n", a1, b1, c1);

    // // --- M2 ---
    // int x2 = 3, y2 = 0, z2;
    // z2 = (x2 & 1) ? (y2 |= 4, x2 <<= 1, x2 + y2) : (y2 ^= 7);
    // printf("M2: x2 = %d, y2 = %d, z2 = %d\n", x2, y2, z2);

    // // --- M3 ---
    // int a3 = 5, b3 = 2;
    // b3 = (a3++, b3 *= a3, b3 + a3);
    // printf("M3: a3 = %d, b3 = %d\n", a3, b3);

    // // --- M4 ---
    // int m4 = 1, n4 = 2, r4;
    // r4 = (++n4 && (m4 += n4)) ? (m4 | n4) : (m4 & n4);
    // printf("M4: m4 = %d, n4 = %d, r4 = %d\n", m4, n4, r4);

    // // --- M5 ---
    // int a5 = 1, b5 = 2, c5 = 3;
    // a5 += (b5 = c5 += 2);
    // printf("M5: a5 = %d, b5 = %d, c5 = %d\n", a5, b5, c5);

    // // --- M6 ---
    // int p6 = 4, q6 = 7;
    // p6 = (q6 -= 2, p6 + q6, p6 = p6 * q6, p6 - q6);
    // printf("M6: p6 = %d, q6 = %d\n", p6, q6);

    // // --- H3 ---
    // {
    //     int p = 4, q = 9, r;
    //     r = ((q -= (p << 1)), (p += q), (q ? (p ^= q) : (p += 10)), p + q);
    //     printf("H3: p=%d q=%d r=%d\n", p, q, r);
    // }

    // // --- M8 ---
    // int a8 = 3, b8 = 4, c8;
    // c8 = (a8 ^= b8, b8 ^= a8, a8 ^= b8, a8 + b8);
    // printf("M8: a8 = %d, b8 = %d, c8 = %d\n", a8, b8, c8);

    // // --- M9 ---
    // int s9 = 5, t9 = 8, u9;
    // u9 = (s9 & 1) ? (t9 -= s9, t9 * 2) : (s9 += t9, s9 - 3);
    // printf("M9: s9 = %d, t9 = %d, u9 = %d\n", s9, t9, u9);

    // // --- M10 ---
    // int a9 = 3, b9 = 4, c9 = 5;
    // a9 += (b9 &= 7) ? (c9 ^= b9, c9 += a9, c9) : (b9 += a9, b9 - c9);
    // printf("H1: a=%d b=%d c=%d\n", a9, b9, c9);

    /* IF Questions */

    // grade calculation (A to F)

    // float score = 14.5;
    // if (score >= 17)
    //     printf('A');
    // else if (score >= 15)
    //     printf('B');
    // else if (score >= 14)
    //     printf('C');
    // else if (score >= 12)
    //     printf('D');
    // else if (score >= 10)
    //     printf('E');
    // else
    //     printf('F');

    // simple calculator
    /*
        a
        b
        + - * /
    */
    // float a, b;
    // char op;
    // printf("enter a then b :\n");
    // scanf("%f", &a);
    // scanf("%f", &b);
    // printf("enter op :\n");
    // scanf(" %c", &op);

    // if (op == '+')
    //     printf("%f %c %f = %f\n", a, op, b, a + b);
    // else if (op == '-')
    //     printf("%f %c %f = %f\n", a, op, b, a - b);
    // else if (op == '*')
    //     printf("%f %c %f = %f\n", a, op, b, a * b);
    // else if (op == '/')
    //     printf("%f %c %f = %f\n", a, op, b, a / b);
    // else
    //     printf("Uknown operation\n");

    // uppercase, lowercase, or not a letter

    // char c;
    // printf("enter you charachter:\n");
    // scanf(" %c", &c);
    // if (c >= 'A' && c <= 'Z')
    //     printf("'%c' is an uppercase letter.\n", c);
    // else if (c >= 'a' && c <= 'z')
    //     printf("'%c' is a lowercase letter.\n", c);
    // else
    //     printf("'%c' is not a letter.\n", c);

    // profit or loss

    // float income, expense;

    // printf("enter your income then expense:\n");
    // scanf("%f", &income);
    // scanf("%f", &expense);

    // if (income > expense)
    //     printf("Profit of %.2f\n", income - expense);
    // else if (income < expense)
    //     printf("Loss of %.2f\n", expense - income);
    // else
    //     printf("No profit, no loss (break-even)\n");

    // Absolute value

    // int a = 10;

    // if (a >= 0)
    //     printf("%d", a);
    // else
    //     printf("%d", -a);

    // leap year
    /*
        A year is a leap year if:

        It’s divisible by 4, but not by 100, unless it’s also divisible by 400.
    */
    int year = 4005;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}
