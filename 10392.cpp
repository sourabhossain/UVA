#include <bits/stdc++.h>
#define SIZE 10000002

using namespace std;

int prime[(SIZE >> 6) + 2];

#define CHECK(n) (prime[n >> 6] & (1 << ((n % 64) >> 1)))
#define SET(n) (prime[n >> 6] |= (1 << ((n % 64) >> 1)))

vector<long long> p;

void sieve() {
    p.push_back(2);
	int root = sqrt(SIZE);

	for(int i = 3; i < SIZE; i += 2) {
		if(CHECK(i) == false) {
            p.push_back(i);

            if(i <= root) {
                for(int j = i * i; j < SIZE; j += i << 1) {
                    SET(j);
                }
            }
		}
	}
}

void nodPrime(long long n) {
    vector<long long> result;
    int root = sqrt(n), length = p.size();

    for(int i = 0; i < length && p[i] <= root; i++) {
        while(n % p[i] == 0) {
            result.push_back(p[i]);
            n /= p[i];
        }
    }

    if(n > 1) {
        result.push_back(n);
    }

    for(int i = 0, length = result.size(); i < length; i++) {
        printf("    %lld\n", result[i]);
    }
}

int main()
{
    sieve();
    long long n;

    while(scanf("%lld", &n) && n != -1) {
        nodPrime(n);
        putchar('\n');
    }

    return 0;
}
