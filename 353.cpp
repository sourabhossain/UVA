#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string& s) {
	int length = s.size();

	for(int i = 0; i < length; i++) {
		if(s[i] != s[--length]) {
			return false;
		}
	}

	return true;
}

int main()
{
    string s;

    while(cin >> s && !cin.eof()) {
            int length = s.size(), count = 0;
            map<string, bool> m;

            for(int i = 0; i < length; i++) {
                for(int j = 1; j <= length - i; j++) {
                    string temp = s.substr(i, j);

                    if(!m[temp] && isPalindrome(temp)) {
                        count++;
                    }

                    m[temp] = true;
                }
            }

            printf("The string '%s' contains %d palindromes.\n", s.c_str(), count);
    }

    return 0;
}
