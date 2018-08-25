#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c[26] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
    string s;

    while(cin >> s && !cin.eof()) {
        for(int i = 0; s[i]; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                printf("%d", c[s[i] - 'A']);
            } else {
                putchar(s[i]);
            }
        }
        putchar('\n');
    }

    return 0;
}