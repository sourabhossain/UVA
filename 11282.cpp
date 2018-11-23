#include <bits/stdc++.h>

using namespace std;

long long derangement[21];

void derangementNumber() {
	derangement[0] = 1;
	derangement[1] = 0;
	derangement[2] = 1;

	for(int i = 3; i < 21; i++) {
		derangement[i] = (i - 1) * (derangement[i - 1] + derangement[i - 2]);
	}
}

long long nCr(int n, int r) {
	int ans = 1;
	r = min(r, n - r);

	for(int i = 1; i <= r; i++) {
		ans = (ans * n--) / i;
	}

	return ans;
}

int main()
{
    derangementNumber();
    int n, m;

    while(scanf("%d%d", &n, &m) != EOF) {
        long long result = 0;

        for(int i = m; i >= 0; i--) {
            result += (nCr(n, i) * derangement[n - i]);
        }

        printf("%lld\n", result);
    }

    return 0;
}
