#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int T, n;
    string first, second;
    map<string, string> m;

    scanf("%d ", &T);

    while(T--) {
        getline(cin, first);
        getline(cin, second);
        m[first] = second;
    }

    scanf("%d ", &n);

    while(n--) {
        getline(cin, first);
        cout << m[first] << endl;
    }

    return 0;
}