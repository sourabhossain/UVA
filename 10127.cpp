#include <bits/stdc++.h>

using namespace std;

bool bigMod(string n, int m) {
    int r = 0;

    for(int i = 0; n[i]; i++) {
        r = (((r * 10) % m) + 1) % m;
    }

    return r != 0;
}

int main()
{
    int n;

    while(scanf("%d", &n) != EOF) {
        string one = "1";
        int ans = 1;

        while(bigMod(one, n)) {
            ans++;
            one += "1";
        }

        printf("%d\n", ans);
    }

    return 0;
}
