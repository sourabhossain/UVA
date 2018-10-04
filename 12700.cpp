#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, length;
    char s[51];

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%d%s", &length, s);
        map<char, int> m;

        for(int i = 0; i < length; i++) {
            m[s[i]]++;
        }

        if(m['A'] == length) {
            printf("Case %d: ABANDONED\n", i);
        } else if(m['W'] == length || m['W'] == length - m['A']) {
            printf("Case %d: WHITEWASH\n", i);
        } else if(m['B'] == length || m['B'] == length - m['A']) {
            printf("Case %d: BANGLAWASH\n", i);
        } else if(m['B'] == m['W']) {
            printf("Case %d: DRAW %d %d\n", i, m['B'], m['T']);
        } else if(m['B'] > m['W']) {
            printf("Case %d: BANGLADESH %d - %d\n", i, m['B'], m['W']);
        } else {
            printf("Case %d: WWW %d - %d\n", i, m['W'], m['B']);
        }
    }

    return 0;
}
