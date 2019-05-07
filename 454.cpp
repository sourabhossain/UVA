#include <bits/stdc++.h>

using namespace std;

string baseString(const string &str) {
    string base(str);
    base.erase(remove(base.begin(), base.end(), ' '), base.end());
    sort(base.begin(), base.end());
    return base;
}

int main()
{
    int T;

    scanf("%d ", &T);

    while(T--) {
        string str;
        vector<string> words;

        while(getline(cin, str) && str != "") {
            words.push_back(str);
        }

        sort(words.begin(), words.end());
        int length = words.size();

        for(int i = 0; i < length - 1; i++) {
            for(int j = i + 1; j < length; j++) {
                if(baseString(words[i]) == baseString(words[j])) {
                    cout << words[i] + " = " + words[j] << endl;
                }
            }
        }

        if(T) {
            putchar('\n');
        }
    }

    return 0;
}
