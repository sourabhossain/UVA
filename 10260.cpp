#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while(cin >> s) {
        string ans = "";

        for(int i = 0, length = s.size(); i < length; i++) {
            if(s[i] == 'B' || s[i] == 'F' || s[i] == 'P' || s[i] == 'V') {
                ans += '1';
            } else if(s[i] == 'C' || s[i] == 'G' || s[i] == 'J' || s[i] == 'K' || s[i] == 'Q' || s[i] == 'S'|| s[i] == 'X' || s[i] == 'Z') {
                ans += '2';
            } else if(s[i] == 'D' || s[i] == 'T') {
                ans += '3';
            } else if(s[i] == 'L') {
                ans += '4';
            } else if(s[i] == 'M' || s[i] == 'N') {
                ans += '5';
            } else if(s[i] == 'R') {
                ans += '6';
            } else {
                for(int j = 0; ans[j]; j++) {
                    if(ans[j] != ans[j + 1]) {
                        putchar(ans[j]);
                    }
                }
                ans = "";
            }
        }

        for(int j = 0; ans[j]; j++) {
            if(ans[j] != ans[j + 1]) {
                putchar(ans[j]);
            }
        }
        putchar('\n');
    }

    return 0;
}
