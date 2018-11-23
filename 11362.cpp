#include <bits/stdc++.h>

using namespace std;

bool ok(string a, string b) {
    int length = (a.size() > b.size())? b.size() : a.size();

    for(int i = 0; i < length; i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);
        vector<string> data(n);

        for(int i = 0; i < n; i++) {
            cin >> data[i];
        }

        sort(data.begin(), data.end());
        bool ck = true;

        for(int i = 1; i < n; i++) {
            if(ok(data[i - 1], data[i])) {
                ck = false;
                break;
            }
        }

        if(ck) {
            puts("YES");
        } else {
            puts("NO");
        }
    }

    return 0;
}
