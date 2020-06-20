#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        char str[101];
        int a, b, cnt1 = 0, cnt2 = 0;

        scanf("%s", str);
        sscanf(str, "%d", &a);
        sscanf(str, "%x", &b);

        while(a) {
            cnt1 += (a & 1);
            a >>= 1;
        }

        while(b) {
            cnt2 += (b & 1);
            b >>= 1;
        }

        printf("%d %d\n", cnt1, cnt2);
    }

    return 0;
}
