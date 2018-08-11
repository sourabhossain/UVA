#include <bits/stdc++.h>

long long Algorithm(long long n) {
    long long c = 1;

    while(n != 1) {
        if(n & 1) {
            n = 3*n + 1;
        }
        else {
            n /= 2;
        }
        ++c;
    }
    return c;
}

int main()
{
    long long a, b;

    while(scanf("%lld%lld", &a, &b) != EOF) {
        int ck = 0;
        if(a > b) {
            a ^= b;
            b ^= a;
            a ^= b;
            ck = 1;
        }

        long long T = 0;
        for(long long i = a; i <= b; i++) {
            long long c = Algorithm(i);
            if(c > T) {
                T = c;
            }
        }
        if(ck) {
            printf("%lld %lld %lld\n", b, a, T);
        }
        else {
            printf("%lld %lld %lld\n", a, b, T);
        }
    }

    return 0;
}
