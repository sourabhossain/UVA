#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    for(int i = 1; scanf("%d", &n) && n; i++) {
        int cnt = 0, temp;

        while(n--) {
            scanf("%d", &temp);

            if(temp > 0) {
                cnt++;
            } else {
                cnt--;
            }
        }

        printf("Case %d: %d\n", i, cnt);
    }

    return 0;
}
