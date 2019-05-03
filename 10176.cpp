#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    long long result = 0;

    while(ch = getchar()) {
        if(ch == -1) {
            break;
        }

        if(ch == '1' || ch == '0') {
            result = (result << 1) + (ch - '0');

            if(result >= 131071) {
                result %= 131071;
            }
        } else if(ch == '#') {
            puts((result)? "NO" : "YES");
            result = 0;
        }
    }

    return 0;
}
