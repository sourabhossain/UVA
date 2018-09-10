#include <bits/stdc++.h>

using namespace std;

bool bigMod(string n, int m) {
	int mod = 0;

	for(int i = 0; n[i]; i++) {
		mod = (mod * 10 + n[i] - '0') % m;
	}

	return mod != 0;
}

int main()
{
    int T, m, temp;
    string n;

    scanf("%d", &T);

    while(T--) {
        cin >> n >> m;
        bool ck = true;

        while(m--) {
            scanf("%d", &temp);

            if(bigMod(n, temp)) {
                ck = false;
            }
        }

        if(ck) {
            printf("%s - Wonderful.\n", n.c_str());
        } else {
            printf("%s - Simple.\n", n.c_str());
        }
    }

    return 0;
}
