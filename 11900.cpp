#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int cnt = 0, n, p, q, temp, sum = 0;
        bool ck = false;

        scanf("%d%d%d", &n, &p, &q);

        while(n--) {
            scanf("%d", &temp);

            if(ck) {
                continue;
            } else if(cnt >= p || sum + temp > q) {
                ck = true;
            } else {
                sum += temp;
                cnt++;
            }
        }

        printf("Case %d: %d\n", i, cnt);
    }

    return 0;
}
