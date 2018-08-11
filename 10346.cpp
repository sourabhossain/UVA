#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    while(scanf("%d%d", &n, &k) != EOF) {
        int ans = n, temp;

        while(n >= k) {
            temp = n / k;
            n = (n % k) + temp;
            ans += temp;
        }

        printf("%d\n", ans);
    }

    return 0;
}
