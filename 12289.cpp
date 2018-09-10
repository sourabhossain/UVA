#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    string s;

    scanf("%d", &T);

    while(T--) {
        cin >> s;

        if(s.size() == 5) {
            puts("3");
        } else if(s[0] == 'T' || s[0] == 't' && s[1] == 'w' || s[0] == 't' && s[2] == 'o' || s[1] == 'w' && s[2] == 'o') {
            puts("2");
        } else {
            puts("1");
        }
    }

    return 0;
}
