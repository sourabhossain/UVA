#include <bits/stdc++.h>
#define SIZE 100000001

using namespace std;

int prime[SIZE/64 + 2];

#define CHECK(n) (prime[n / 64] & (1 << ((n % 64) / 2)))
#define SET(n) (prime[n / 64] |= (1 << ((n % 64) / 2)))

bool isPrime(int n) {
	return n > 1 && (n == 2 || ((n & 1) && !CHECK(n)));
} // end isPrime function

void sieve() {
	int root = sqrt(SIZE);

	for(int i = 3; i <= root; i += 2) {
        if(CHECK(i) == false) {
            for(int j = i * i; j < SIZE; j += i << 1) {
                SET(j);
            }
        }
	}
} // end sieve function

int main()
{
	sieve(); // go to sieve function
	int n;

	while(scanf("%d", &n) != EOF) {
        if(n < 4) {
            printf("%d is not the sum of two primes!\n", n);
        } else if(n & 1) {
            if(isPrime(n - 2)) {
                printf("%d is the sum of %d and %d.\n", n, 2, n - 2);
            } else {
                printf("%d is not the sum of two primes!\n", n);
            }
        } else {
            bool ck = true;

            for(int i = (n / 2) + 1, temp; i < n; i++) {
                temp = n - i;

                if(isPrime(i) && isPrime(temp) && temp > 2) {
                    printf("%d is the sum of %d and %d.\n", n, temp, i);
                    ck = false;
                    break;
                }
            }

            if(ck) {
                printf("%d is not the sum of two primes!\n", n);
            }
        }
	}

	return 0;
}
