#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int n;
        scanf("%d", &n);
        vector <int> v(n);

        for(int j = 0; j < n; j++) {
            scanf("%d", &v[j]);
        }
        sort(v.begin(), v.end());

        printf("Case %d: %d\n", i, v[n/2]);
    }

    return 0;
}
