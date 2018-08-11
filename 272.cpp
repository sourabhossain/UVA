#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    bool c = false;

    while(getline(cin, s) && !cin.eof()) {
        for(int i = 0; s[i]; i++) {
            if(s[i] == '"') {
                if(c) {
                    printf("''");
                    c = false;
                }
                else {
                    printf("``");
                    c = true;
                }
            }
            else {
                    putchar(s[i]);
            }
        }
        putchar('\n');
    }

    return 0;
}
