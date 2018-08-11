#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    set <string> s;
    string str = "";

    while(scanf("%c", &c) != EOF) {
        c = tolower(c);

        if(c >= 'a' && c <= 'z') {
            str += c;
        } else {
            if(str.size()) {
                s.insert(str);
                str = "";
            }
        }
    }

    for(set <string>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}
