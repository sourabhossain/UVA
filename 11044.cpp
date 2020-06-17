#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int m, n;

        scanf("%d%d", &m, &n);
        printf("%d\n", (m / 3) * (n / 3));
    }

    return 0;
}
