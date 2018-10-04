#include <bits/stdc++.h>

using namespace std;

#define SIZE 100000002

int prime[(SIZE >> 6) + 2];

#define CHECK(n) (prime[n >> 6] & (1 << ((n % 64) >> 1)))
#define SET(n) (prime[n >> 6] |= (1 << ((n % 64) >> 1)))

vector<int> sievePrime;

void sieve() {
	int root = sqrt(SIZE);
	sievePrime.push_back(2);

	for(int i = 3; i < SIZE; i += 2) {
		if(CHECK(i) == false) {
			sievePrime.push_back(i);

			if(i <= root) {
				for(int j = i * i; j < SIZE; j += i << 1) {
					SET(j);
				}
			}
		}
	}
}

int main()
{
    sieve();
    long long n;

    while(scanf("%lld", &n) && n) {
        if(n < 0) {
            n = -n;
        }

        long long p = 0, root = sqrt(n), temp = n;
        int c = 0;

        for(int i = 0; sievePrime[i] <= root; i++) {
            if(temp % sievePrime[i] == 0) {
                p = sievePrime[i];
                c++;

                while(temp % p == 0) {
                    temp /= p;
                }
            }
        }

        if(temp > 1 && n % temp == 0 && c > 0) {
            printf("%lld\n", temp);
        } else if(n == p || p == 0 || c == 1) {
            puts("-1");
        } else {
            printf("%lld\n", p);
        }
    }

    return 0;
}
