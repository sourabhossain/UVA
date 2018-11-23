#include <bits/stdc++.h>
#define SIZE 10004

using namespace std;

vector<int> v[SIZE];
bool vis[SIZE];

void dfsVisit(int n) {
    vis[n] = true;

    for(int i = 0, len = v[n].size(); i < len; i++) {
        int x = v[n][i];

        if(vis[x] == false) {
            dfsVisit(x);
        }
    }
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n, m, l;

        scanf("%d%d%d", &n, &m, &l);

        for(int i = 1; i <= n; i++) {
            vis[i] = false;
            v[i].clear();
        }

        for(int i = 0, n1, n2; i < m; i++) {
            scanf("%d%d", &n1, &n2);
            v[n1].push_back(n2);
        }

        int x;

        while(l--) {
            scanf("%d", &x);
            dfsVisit(x);
        }

        int cnt = 0;

        for(int i = 1; i <= n; i++) {
            if(vis[i]) {
                ++cnt;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}
