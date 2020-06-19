#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;

    while(cin >> str) {
        int length = str.size();

        for(int i = 0; i < length; i++) {
            str[i] = str[i] - 7;
        }

        cout << str << endl;
    }

    return 0;
}
