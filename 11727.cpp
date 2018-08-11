#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int ara[3];

        for(int j = 0; j < 3; j++) {
            scanf("%d", &ara[j]);
        }
        sort(ara, ara + 3);
        printf("Case %d: %d\n", i, ara[1]);
    }

    return 0;
}
