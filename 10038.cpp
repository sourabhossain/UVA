#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
    int n;

	while(scanf("%d", &n) != EOF) {
		vector<int> v(n);

		for(int i = 0; i < n; i++) {
			scanf("%d", &v[i]);
		}

		for(int i = 1; i < n; i++) {
			v[i - 1] = abs(v[i] - v[i - 1]);
		}

		v[n - 1] = -1;
		bool ck = true;
		sort(v.begin(), v.end());

		for(int i = 1; i < n; i++) {
			if(v[i] != i) {
				ck = false;
				break;
			}
		}

		(ck)? puts("Jolly") : puts("Not jolly");
	}

	return 0;
}