#include <bits/stdc++.h>

using namespace std;

int bigMod(int n, int p, int m) {
	if(p == 0) {
		return 1 % m;
	}

	int mod = bigMod(n, p / 2, m);
	mod = ((mod % m) * (mod % m)) % m;

	if(p & 1) {
		mod = ((n % m) * (mod % m)) % m;
	}

	return mod;
}

int main()
{
    int T, a, b, m;

    while(scanf("%d", &T) && T) {
        while(T--) {
            scanf("%d%d%d", &a, &b, &m);
            printf("%d\n", bigMod(a, b, m));
        }
    }

    return 0;
}