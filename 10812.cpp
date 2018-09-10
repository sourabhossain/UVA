#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, s, d;

    scanf("%lld", &n);

    while(n--) {
        scanf("%lld%lld", &s, &d);

        if(s < d || (s - d) & 1) {
            puts("impossible");
        } else {
            s = (s - d) >> 1;
            printf("%lld %lld\n", d + s, s);
        }
    }

    return 0;
}
