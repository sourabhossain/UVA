#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int m, n;

        scanf("%d%d", &m, &n);

        if((m - 1) % (n - 1)) {
            puts("cannot do this");
        } else {
            printf("%d\n", (m - 1) / (n - 1));
        }
    }

    return 0;
}
