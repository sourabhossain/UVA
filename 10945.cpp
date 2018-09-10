#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while(getline(cin, s) && s != "DONE") {
        string temp = "";

        for(int i = 0; s[i]; i++) {
            if(isalpha(s[i])) {
                temp += tolower(s[i]);
            }
        }

        bool ck = true;
        int length = temp.size();

        for(int i = 0; i < length; i++) {
            if(temp[i] != temp[--length]) {
                puts("Uh oh..");
                ck = false;
                break;
            }
        }

        if(ck) {
            puts("You won't be eaten!");
        }
    }

    return 0;
}
