#include <bits/stdc++.h>
#define SIZE 10000001

using namespace std;

int prime[(SIZE >> 6) + 2];

#define CHECK(n) (prime[n >> 6] & (1 << ((n & 63) >> 1)))
#define SET(n) (prime[n >> 6] |= (1 << ((n & 63) >> 1)))

void sieve() {
	int root = sqrt(SIZE);

	for(int i = 3; i <= root; i += 2) {
		if(CHECK(i) == false) {
			for(int j = i * i; j < SIZE; j += i << 1) {
				SET(j);
			}
		}
	}
}

bool isPrime(int n) {
	return ((n & 1) && !CHECK(n)) || n == 2;
}

int main()
{
	sieve();
	int n;

	while(scanf("%d", &n) != EOF) {
        if(n < 8) {
            puts("Impossible.");
            continue;
        }

        if(n & 1) {
            n -= 5;
            printf("2 3 ");
        } else {
           n -= 4;
           printf("2 2 ");
        }

        for(int i = 2; i < n; i++) {
            if(isPrime(i) && isPrime(n - i)) {
                printf("%d %d\n", i, n - i);
                break;
            }
        }
	}

	return 0;
}
