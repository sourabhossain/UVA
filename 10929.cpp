#include <bits/stdc++.h>

using namespace std;

bool bigMod(string n) {
	int mod = 0;

	for(int i = 0; n[i]; i++) {
		mod = (mod * 10 + n[i] - '0') % 11;
	}

	return mod == 0;
}

int main()
{
    string n;

    while(cin >> n && n != "0") {
        if(bigMod(n)) {
            printf("%s is a multiple of 11.\n", n.c_str());
        } else {
            printf("%s is not a multiple of 11.\n", n.c_str());
        }
    }

    return 0;
}
