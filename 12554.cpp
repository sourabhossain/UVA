#include <bits/stdc++.h>

using namespace std;

vector<string> ans = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};

int main()
{
    int n, c;
    queue<string> q;
    string temp;

    scanf("%d", &n);

    c = n / 16;

    if(n % 16) {
        c++;
    }

    while(n--) {
        cin >> temp;
        q.push(temp);
    }

    while(c--) {
        for(int i = 0; i < 16; i++) {
            temp = q.front();
            q.pop();
            q.push(temp);
            printf("%s: %s\n", temp.c_str(), ans[i].c_str());
        }
    }

    return 0;
}
