#include <bits/stdc++.h>

using namespace std;

long long H(int n){
	long long result = 0;
	int root = sqrt(n);
	
	for(int i = 1; i <= root; i++){
		result += (n / i);
	}

	return (result << 1) - (root * root);
}

int main(int argc, char const *argv[])
{
    int T, n;

	scanf("%d", &T);

	while(T--) {
		scanf("%d", &n);
		printf("%lld\n", H(n));
	}

	return 0;
}
