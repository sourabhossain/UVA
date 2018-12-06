#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	long long n;

	scanf("%d", &T);

	for(int i = 1; i <= T; i++) {
		scanf("%lld", &n);
		n = (n * (n - 1)) >> 1;

		if(n & 1) {
			printf("Case %d: %lld/2\n", i, n);
		} else {
			printf("Case %d: %lld\n", i, n >> 1);
		}
	}

	return 0;
}