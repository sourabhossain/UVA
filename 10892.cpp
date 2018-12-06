#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y) {
    while(y) {
		y ^= x ^= y ^= x %= y;
	}
	
	return x;
}

int lcm(int x, int y) {
    return (x / gcd(x, y)) * y;
}

int main(int argc, char const *argv[])
{
	int n;

	while(scanf("%d", &n) && n) {
		int root = sqrt(n), result;
		vector<int> v;

		for(int i = 1; i <= root; i++) {
			if(n % i == 0) {
				result = n / i;
                v.push_back(i);

				if(result != i) {
					v.push_back(result);
				}
			}
		}
        
        result = 1;

		for(int i = 0, length = v.size(); i < length; i++) {
			for(int j = i + 1; j < length; j++) {
				if(lcm(v[i], v[j]) == n) {
					result++;
				}
			}
		}

		printf("%d %d\n", n, result);
	}

	return 0;
}