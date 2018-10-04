#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    string s;

    scanf("%d ", &T);

    while(T--) {
        getline(cin, s);
        int c[26] = {0}, max = 0, temp;

        for(int i = 0, length = s.size(); i < length; i++) {
            if(isalpha(s[i])) {
                temp = (s[i] | 32) - 'a';
                c[temp]++;

                if(c[temp] > max) {
                    max = c[temp];
                }
            }
        }

        for(int i = 0; i < 26; i++) {
            if(c[i] == max) {
                putchar(i + 'a');
            }
        }
        putchar('\n');
    }

    return 0;
}
