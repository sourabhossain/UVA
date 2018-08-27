#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
	char s[130];

    scanf("%d ", &T);

    while(T--) {
        gets(s);
        stack <char> c;

        for(int i = 0; s[i]; i++) {
            if(!c.empty() && (s[i] == ')' && c.top() == '(' || s[i] == ']' && c.top() == '[')) {
                c.pop();
            } else {
                c.push(s[i]);
            }
        }

        if(c.empty()) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
