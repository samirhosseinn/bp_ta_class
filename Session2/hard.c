#include <stdio.h>

int main(void)
{
      // // --- H1 ---
      // int a1 = 3, b1 = 4, c1 = 5;
      // a1 += (b1 &= 7) ? (c1 ^= b1, c1 += a1, c1) : (b1 += a1, b1 - c1);
      // printf("H1: a1=%d b1=%d c1=%d\n", a1, b1, c1);

      // // --- H2 ---
      // int x2 = 1, y2 = 2, z2 = 3;
      // z2 = (x2++ || (y2 += 5)) ? (x2 += y2, x2 | y2) : (y2 ^= z2, y2 & z2);
      // printf("H2: x2=%d y2=%d z2=%d\n", x2, y2, z2);

      // // --- H3 ---
      // int p3 = 4, q3 = 9, r3;
      // r3 = ((q3 -= (p3 << 1)), (p3 += q3), (q3 ? (p3 ^= q3) : (p3 += 10)), p3 + q3);
      // printf("H3: p3=%d q3=%d r3=%d\n", p3, q3, r3);

      // // --- H4 ---
      // int m4 = 5, n4 = 6, t4;
      // t4 = ((m4 & 1) && (n4 -= m4)) ? ((m4 <<= 1), (n4 |= 3), m4 ^ n4)
      //                               : ((m4 += n4), (n4 &= 2), m4 + n4);
      // printf("H4: m4=%d n4=%d t4=%d\n", m4, n4, t4);

      // // --- H5 ---
      // int u5 = 7, v5 = 0, w5;
      // w5 = ((u5 += 2),
      //       (v5 = (u5 & 3) ? (u5 ^= 5, u5 - 3) : (u5 += 4, u5 + 1)),
      //       (u5 | v5));
      // printf("H5: u5=%d v5=%d w5=%d\n", u5, v5, w5);

      // // --- H6 ---
      // int i6 = 0, j6 = 1, k6 = 2;
      // i6 = ((sizeof j6), (k6 += (j6 ? 2 : (j6 += 10))), k6);
      // printf("H6: i6=%d j6=%d k6=%d\n", i6, j6, k6);

      // // --- H7 ---
      // int s7 = 1, t7 = 8, u7 = 3, v7;
      // v7 = ((t7 >>= (s7 ? 1 : 2)),
      //       (u7 <<= ((t7 & 1) ? 2 : 1)),
      //       (t7 ^ u7) + (s7 || (t7 &= 0)));
      // printf("H7: s7=%d t7=%d u7=%d v7=%d\n", s7, t7, u7, v7);

      /* IF Question */

      // calculate electricity bill from unit charge
      /*
            For first 50 units Rs. 0.50*unit
            For next 100 units Rs. 0.75*unit
            For next 100 units Rs. 1.20*unit
            For unit above 250 Rs. 1.50*unit
      */
      // float units = 115;
      // float bill = 0.0;

      // if (units <= 50)
      // {
      //       bill = units * 0.50;
      // }
      // else if (units <= 150)
      // { // next 100 units
      //       bill = 50 * 0.50 + (units - 50) * 0.75;
      // }
      // else if (units <= 250)
      // { // next 100 units
      //       bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
      // }
      // else
      // { // above 250 units
      //       bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
      // }
      // printf("your bill is %.2f $\n", bill);

      // weather message based on temperature
      /*
            Temp < 0 then Freezing weather
            Temp 0-10 then Very Cold weather
            Temp 10-20 then Cold weather
            Temp 20-30 then Normal in Temp
            Temp 30-40 then Its Hot
            Temp >=40 then Its Very Hot
      */

      float temp = 25.6;

      if (temp < 0)
            printf("Freezing weather\n");
      else if (temp < 10)
            printf("Very Cold weather\n");
      else if (temp < 20)
            printf("Cold weather\n");
      else if (temp < 30)
            printf("Normal in Temp\n");
      else if (temp < 40)
            printf("It's Hot\n");
      else
            printf("It's Very Hot\n");

      return 0;
}
