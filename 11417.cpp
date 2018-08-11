#include <bits/stdc++.h>

int gcd(int a, int b) {
    int T;

    while(b) {
        T = b;
        b = a % b;
        a = T;
    }

    return a;
}

int main()
{
    int n;

    while(scanf("%d", &n) && n) {
        int g = 0;

        for(int i = 1; i < n; i++) {
            for(int j = i + 1; j <= n; j++) {
                g += gcd(i, j);
            }
        }

        printf("%d\n", g);
    }

    return 0;
}
