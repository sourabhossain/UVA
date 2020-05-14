#include "bits/stdc++.h"

using namespace std;

bool isPrime(long long n) {
	if(n < 2) {
		return false;
	}

	if(n < 4) {
		return true;
	}

	if(n % 2 == 0 || n % 3 == 0) {
		return false;
	}

    long long root = sqrt(n);

	for(long long i = 5; i <= root; i += 6) {
		if(n % i == 0 || n % (i + 2) == 0) {
			return false;
		}
	}

	return true;
}

long long bigMod(long long b, long long p, long long m) {
    long long result = 1;

    while(p) {
    	if(p & 1) {
    		result = ((result % m) * (b % m)) % m;
    	}

    	p >>= 1;
    	b = ((b % m) * (b % m)) % m;
    }

    return result;
}

int main()
{
    //freopen("input", "r", stdin);
    long long p, a;

    while(scanf("%lld%lld", &p, &a) && p && a) {
        if(isPrime(p) || bigMod(a, p, p) != a) {
            puts("no");
        } else {
            puts("yes");
        }
    }

    return 0;
}