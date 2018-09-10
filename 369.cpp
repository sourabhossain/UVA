#include <bits/stdc++.h>

using namespace std;

long long nCr(int n, int r) {
    if(r > n / 2) {
        r = n - r;
    }

    long long ans = 1;

    for(int i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

int main()
{
    int n, r;

    while(scanf("%d%d", &n, &r) && n && r) {
        printf("%d things taken %d at a time is %lld exactly.\n", n, r, nCr(n, r));
    }

    return 0;
}
