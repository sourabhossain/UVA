#include <bits/stdc++.h>
#define SIZE 13

using namespace std;

int f[SIZE];
int d[SIZE];

void solve() {
    f[0] = 1;
    f[1] = 1;

    for(int i = 2; i < SIZE; i++) {
        f[i] = f[i - 1] * i;
    }

    d[0] = 1;
    d[1] = 0;
    d[2] = 1;

    for(int i = 3; i < SIZE; i++) {
        d[i] = (i - 1) * (d[i - 2] + d[i - 1]);
    }
}

int main()
{
    solve();
    int T, n;

    scanf("%d", &T);

    while(T--) {
        scanf("%d", &n);
        printf("%d/%d\n", d[n], f[n]);
    }

    return 0;
}
