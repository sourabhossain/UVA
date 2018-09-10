#include <bits/stdc++.h>

using namespace std;

string bigDivision(string n, long long d) {
	string ans = "";
	long long carry = 0, temp;
	bool ck = true;

	for(int i = 0; n[i]; i++) {
		temp = (carry * 10) + (n[i] - '0');
		carry = temp % d;
		temp /= d;

		if(temp == 0 && ck) {
			continue;
		} else {
			ck = false;
		}

		ans += (temp + '0');
	}

	return (ans.size())? ans : "0";
}

long long bigMod(string number, long long modNumber) {
	long long mod = 0;

	for(int i = 0; number[i]; i++) {
		mod = (mod * 10 + (number[i] - '0')) % modNumber;
	}

	return mod;
}

int main()
{
    string s, c;
    long long n;

    while(cin >> s >> c >> n) {
        if(c == "/") {
            cout << bigDivision(s, n) << "\n";
        } else {
            cout << bigMod(s, n) << "\n";
        }
    }

    return 0;
}
