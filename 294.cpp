#include <bits/stdc++.h>
#define SIZE 100002

using namespace std;

int isPrime[(SIZE >> 6) + 2];
vector<int> prime;

#define CHECK(n) (isPrime[n >> 6] & (1 << ((n & 63) >> 1)))
#define SET(n) (isPrime[n >> 6] |= (1 << ((n & 63) >> 1)))

void sieve() {
	int root = sqrt(SIZE);
	prime.push_back(2);

	for(int i = 3; i < SIZE; i += 2) {
		if(CHECK(i) == false) {
			prime.push_back(i);

            if(i <= root) {
				for(int j = i * i; j < SIZE; j += i << 1) {
					SET(j);
				}
			}
		}
	}
}

int number_of_factors(int n) {
    int divisor = 1, root = sqrt(n);

	for(int i = 0, length = prime.size(); i < length && prime[i] <= root; i++) {
        int count = 0;

        while(n % prime[i] == 0) {
            n /= prime[i];
            count++;
        }

        divisor *= ++count;
	}

	return (n == 1)? divisor : divisor << 1;
}

int main()
{
    sieve();
    int T, l, u;

    scanf("%d", &T);

    while(T--) {
        scanf("%d%d", &l, &u);
        int maximum = 0, element = 0;

        for(int i = l; i <= u; i++) {
            int temp = number_of_factors(i);

            if(maximum < temp) {
                element = i;
                maximum = temp;
            }
        }

        printf("Between %d and %d, %d has a maximum of %d divisors.\n", l, u, element, maximum);
    }

    return 0;
}
