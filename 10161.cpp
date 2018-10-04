 #include <bits/stdc++.h>

using namespace std;

int main()
{
    long long s, n, x, y;

    while(scanf("%lld", &s) && s) {
        n = ceil(sqrt(s));

        if(n * n - s < n) {
            x = n;
            y = n * n - s + 1;
        } else {
            x = -n * n + 2 * n + s - 1;
            y = n;
        }

        if(n & 1) {
            swap(x, y);
        }

        printf("%lld %lld\n", x, y);
    }

    return 0;
}
