#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);
        vector<int> data(n);

        for(int i = 0; i < n; i++) {
            scanf("%d", &data[i]);
        }

        sort(data.begin(), data.end());
        int minimum = 0, mid = data[n / 2];

        for(int i = 0; i < n; i++) {
            minimum += abs(mid - data[i]);
        }

        printf("%d\n", minimum);
    }

    return 0;
}
