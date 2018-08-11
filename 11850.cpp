#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) && n) {
        vector <int> data(n);
        int i;
        bool c = false;

        for(i = 0; i < n; i++) {
            scanf("%d", &data[i]);
        }

        sort(data.begin(), data.end());

        for(i = 1; i < n; i++) {
            if((data[i] - data[i - 1]) > 200) {
                c = true;
                break;
            }
        }

        if((1422 - data[n - 1]) * 2 > 200 || c) {
            puts("IMPOSSIBLE");
        }
        else {
            puts("POSSIBLE");
        }
    }

    return 0;
}
