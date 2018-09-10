#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    while(scanf("%lld", &n) && n > -1) {
        string ans = "";

        while(n) {
            ans += (n % 3) + '0';
            n /= 3;
        }

        reverse(ans.begin(), ans.end());
        ans = (ans.size())? ans : "0";
        cout << ans << endl;
    }

    return 0;
}