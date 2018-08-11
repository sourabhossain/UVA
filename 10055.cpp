#include <stdio.h>

int main()
{
    long long a, b;

    while(scanf("%lld%lld", &a, &b) == 2) {
          if(a > b) {
             a ^= b;
             b ^= a;
             a ^= b;
          }
          printf("%lld\n", b - a);
    }

    return 0;
}
