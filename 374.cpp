#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long b, p, m;

    while(scanf("%lld%lld%lld", &b, &p, &m) != EOF) {
        long long result = 1;
        b %= m;

        while(p) {
            if(p & 1) {
                result = (result * b) % m;
            }

            b = (b * b) % m;
            p >>= 1;
        }

        printf("%lld\n", result);
    }

    return 0;
}
