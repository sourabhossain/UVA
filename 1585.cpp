#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    string s;

    scanf("%d", &T);

    while(T--) {
        cin >> s;
        int ans = 0, c = 1;

        for(int i = 0, length = s.size(); i < length; i++) {
            if(s[i] == 'O') {
                ans += c++;
            } else {
                c = 1;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
