#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while(cin >> s && !cin.eof()) {
        list <char> ans;
        list <char>::iterator it = ans.begin();

        for(int i = 0; s[i]; i++) {
            if(s[i] == '[') {
               it = ans.begin();
            } else if(s[i] == ']'){
                it = ans.end();
            } else {
                ans.insert(it, s[i]);
            }
        }

        for(it = ans.begin(); it != ans.end(); it++) {
            putchar(*it);
        }
        putchar('\n');
    }

    return 0;
}
