#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;

    while(getline(cin, line)) {
        string word = "", ans = "";

        for(int i = 0; line[i]; i++) {
            if(line[i] != ' ') {
                word += line[i];
            } else if(word.size()) {
                reverse(word.begin(), word.end());
                ans += word + " ";
                word = "";
            }
        }

        reverse(word.begin(), word.end());
        ans += word;
        cout << ans << endl;
    }

    return 0;
}
