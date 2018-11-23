#include <bits/stdc++.h>

using namespace std;

void toLowerCase(string& str) {
    for(int i = 0, length = str.size(); i < length; i++) {
        str[i] |= 32;
    }
}

int main()
{
    map<string, pair<string, int> > m;
    string word;

    while(cin >> word && word != "#") {
        string temp = word;
        toLowerCase(temp);
        sort(temp.begin(), temp.end());

        if(m.find(temp) != m.end()) {
            m[temp].second++;
        } else {
            m[temp] = {word, 1};
        }
    }

    set<string> result;

    for(map<string, pair<string, int> >::iterator it = m.begin(); it != m.end(); it++) {
        if(it->second.second == 1) {
            result.insert(it->second.first);
        }
    }

    for(set<string>::iterator it = result.begin(); it != result.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}
