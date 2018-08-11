#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while(getline(cin, s) && !cin.eof()) {
        vector <string> v;
        string temp = "";

        for(int i = 0; s[i]; i++) {
            s[i] = tolower(s[i]);

            if(s[i] >= 'a' && s[i] <= 'z') {
                temp += s[i];
            } else if(temp.size()) {
                v.push_back(temp);
                temp = "";
            }
        }

        printf("%d\n", v.size());
    }

    return 0;
}
