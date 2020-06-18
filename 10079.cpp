#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    while(scanf("%lld", &n) && n >= 0) {
        printf("%lld\n", (n * (n + 1) >> 1) + 1);
    }

    return 0;
}
