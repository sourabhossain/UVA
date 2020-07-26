#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main()
{
    //freopen("input", "r", stdin);
    int t, n, temp;
    string str;
    map<string, int> m;
    scanf("%d%d", &t, &n);

    while(t--) {
        cin >> str >> temp;
        m[str] = temp;
    }

    while(n--) {
        int sum = 0;

        while(cin >> str, str != ".") {
            sum += m[str];
        }

        printf("%d\n", sum);
    }


    return 0;
}
