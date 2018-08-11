#include <bits/stdc++.h>

int main()
{
    int a, b;

    while(scanf("%d%d", &a, &b) && a || b) {
          if(a > b) {
             a ^= b;
             b ^= a;
             a ^= b;
          }

          int T = sqrt(a);
          while(T * T != a) {
               a++;
               T = sqrt(a);
          }

          T = (T * T) - ((T - 1) * (T - 1));
          int c = 0;

          while(a <= b) {
              T += 2;
              a += T;
              c++;
          }

          printf("%d\n", c);
    }

    return 0;
}
