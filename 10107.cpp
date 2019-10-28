#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	// freopen("input", "r", stdin);
	// freopen("output", "w", stdout);
	
	int n;
	vector<int> v;

	while(scanf("%d", &n) != EOF) {
		v.push_back(n);
		sort(v.begin(), v.end());
        int length = v.size();

        if(length++ & 1) {
        	printf("%d\n", v[(length >> 1) - 1]);
        } else {
        	printf("%d\n", (v[(length >> 1) - 1] + v[length >> 1]) >> 1);
        }
	}

	return 0;
}
