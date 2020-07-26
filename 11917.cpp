#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main()
{
    //freopen("input", "r", stdin);
    int T;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int n, days;
        string str;
        map<string, int> m;
        scanf("%d", &n);

        while(n--) {
            cin >> str >> days;
            m[str] = days;
        }

        cin >> days >> str;

        if(m[str] && m[str] <= days) {
            printf("Case %d: Yesss\n", i);
        } else if(m[str] && m[str] <= days + 5) {
            printf("Case %d: Late\n", i);
        } else {
            printf("Case %d: Do your own homework!\n", i);
        }
    }

    return 0;
}
