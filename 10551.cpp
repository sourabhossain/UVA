#include <bits/stdc++.h>

using namespace std;

long long decimal(long long b, string n) {
    long long num = 0;

    for(int i = 0, length = n.size(); i < length; i++) {
        num = num * b + (n[i] - '0');
    }

    return num;
}

string solve(long long b, string n, string m) {
    long long num = 0, mod = decimal(b, m);

    for(int i = 0, length = n.size(); i < length; i++) {
        num = num * b + (n[i] - '0');
        num %= mod;
    }

    string ans = "";

    while(num) {
        ans = to_string(num % b) + ans;
        num /= b;
    }

    return ans.size()? ans : "0";
}

int main()
{
    long long b;
    string n, m;

    while(cin >> b && b) {
        cin >> n >> m;
        printf("%s\n", solve(b, n, m).c_str());
    }

    return 0;
}
