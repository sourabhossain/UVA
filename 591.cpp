#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i = 1;

    while(scanf("%d", &n) && n) {
        vector<int> data(n);
        int temp = 0, ans = 0;

        for(int i = 0; i < n; i++) {
            scanf("%d", &data[i]);
            temp += data[i];
        }

        temp /= n;

        for(int i = 0; i < n; i++) {
            if(temp > data[i]) {
                ans += (temp - data[i]);
            }
        }

        printf("Set #%d\nThe minimum number of moves is %d.\n\n", i++, ans);
    }

    return 0;
}
