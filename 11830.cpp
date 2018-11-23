#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    char d;

    while(cin >> d >> n && d != '0' || n != "0") {
        n.erase(remove(n.begin(), n.end(), d), n.end());

        if(n == "") {
            puts("0");
        } else if(n.size() && n[0] == '0') {
            reverse(n.begin(), n.end());

            while(n.front() == '0') {
                n.pop_back();
            }

            if(n.size()) {
                reverse(n.begin(), n.end());
                cout << n << endl;
            } else {
                puts("0");
            }
        } else {
            cout << n << endl;
        }
    }

    return 0;
}
