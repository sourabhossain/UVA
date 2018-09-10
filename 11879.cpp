#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while(cin >> s && s != "0") {
        long long r = 0;

        for(int i = 0; s[i]; i++) {
            r = (r * 10 + (s[i] - '0')) % 17;
        }

        if(r == 0) {
            puts("1");
        } else {
            puts("0");
        }
    }

    return 0;
}
