#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;

    while(scanf("%d%d", &m, &n) && m && n) {
        set<int> s;
        int temp, ans = 0;

        while(m--) {
            scanf("%d", &temp);
            s.insert(temp);
        }

        while(n--) {
            scanf("%d", &temp);

            if(s.find(temp) != s.end()) {
                ans++;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}