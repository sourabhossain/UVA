#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int T = 1, a, b, n;

    while(cin >> s && !cin.eof()) {
        scanf("%d", &n);
        printf("Case %d:\n", T++);

        while(n--) {
            scanf("%d%d", &a, &b);

            if(a > b) {
                swap(a, b);
            }

            bool f = true;

            for(int i = a + 1; i <= b; i++) {
                if(s[a] != s[i]) {
                    f = false;
                    break;
                }
            }

            if(f) {
                puts("Yes");
            } else {
                puts("No");
            }
        }
    }

    return 0;
}
