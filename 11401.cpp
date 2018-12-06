#include <bits/stdc++.h>
#define SIZE 1000001

using namespace std;

long long p[SIZE], dp[SIZE];

void precal() {
	p[3] = dp[3] = 0;
	long long value = 0;

	for(int i = 4; i < SIZE; i++) {
		if(i & 1) {
			p[i] = p[i - 1] + value;
			dp[i] = dp[i - 1] + p[i];  
		} else {
			p[i] = p[i - 1] + ++value;
			dp[i] = dp[i - 1] + p[i];
		}
	}
}

int main(int argc, char const *argv[])
{
    precal();
    int n;

    while(scanf("%d", &n) && n > 2) {
    	printf("%lld\n", dp[n]);
    }
	
	return 0;
}