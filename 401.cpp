#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2 = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    map<char, char> m;
    string str;

    for(char ch : s1) {
        m[ch] = s2.front();
        s2.erase(s2.begin());
    }

    while(cin >> str) {
        bool palindrome = true, mirrored = true;
        int length = str.size();

        for(int i = 0; i < length; i++) {
            if(str[i] != str[--length]) {
                palindrome = false;
            }

            if(str[i] != m[str[length]]) {
                mirrored = false;
            }
        }

        if(palindrome && mirrored) {
            cout << str + " -- is a mirrored palindrome.\n\n";
        } else if(palindrome && !mirrored) {
            cout << str + " -- is a regular palindrome.\n\n";
        } else if(!palindrome && mirrored) {
            cout << str + " -- is a mirrored string.\n\n";
        } else {
            cout << str + " -- is not a palindrome.\n\n";
        }
    }

    return 0;
}
