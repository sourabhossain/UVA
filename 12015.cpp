#include <bits/stdc++.h>
#define SIZE 10

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    for(int j = 1; j <= T; j++) {
        int max = INT_MIN;
        vector<pair<string, int> > v(SIZE);

        for(int i = 0; i < SIZE; i++) {
            cin >> v[i].first >> v[i].second;

            if(max < v[i].second) {
                max = v[i].second;
            }
        }

        printf("Case #%d:\n", j);

        for(int i = 0; i < SIZE; i++) {
            if(max == v[i].second) {
                cout << v[i].first << "\n";
            }
        }
    }

    return 0;
}
