#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int k;

	while(scanf("%d", &k) != EOF) {
        vector<pair<int, int> > v;

		for(int y = k + 1; y <= (k << 1); y++) {
			if((y * k) % (y - k) == 0) {
				v.push_back(make_pair((y * k) / (y - k), y));
			}
		}

        int length = v.size();
        printf("%d\n", length);
		
		for(int i = 0; i < length; i++) {
			printf("1/%d = 1/%d + 1/%d\n", k, v[i].first, v[i].second);
		}
	}
 
	return 0;
}