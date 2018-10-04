#include <bits/stdc++.h>

using namespace std;

#define SIZE 100002

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

vector<int> segmentPrime;

void segmentSieve(int low, int high) {
	bool segment[high - low + 1] = {0};
	int root = sqrt(high) + 1;
	long long start, temp;

	if(low == 0) {
		segment[0] = segment[1] = 1;
	} else if(low == 1) {
		segment[0] = 1;
	}

	for(int i = 0; sievePrime[i] <= root; i++) {
		temp = sievePrime[i];
		start = temp * temp;

		if(start < low) {
			start = ((low + temp - 1) / temp) * temp;
		}

		for(long long j = start; j <= high; j += temp) {
			segment[j - low] = 1;
		}
	}

	for(long long i = low; i <= high; i++) {
		if(segment[i - low] == 0) {
			segmentPrime.push_back(i);
		}
	}
}

int main()
{
	sieve();
	long long low, high;

	while(cin >> low >> high) {
	    segmentPrime.clear();
	    segmentSieve(low, high);
	    int length = segmentPrime.size();

        if(length < 2) {
            puts("There are no adjacent primes.");
        } else {
            int maximum = INT_MIN, minimum = INT_MAX;
            int maxFirst, maxSecond, minFirst, minSecond, temp;

            for(int i = 1; i < length; i++) {
                temp = segmentPrime[i] - segmentPrime[i - 1];

                if(minimum > temp) {
                    minFirst = segmentPrime[i - 1];
                    minSecond = segmentPrime[i];
                    minimum = temp;
                }

                if(maximum < temp) {
                    maxFirst = segmentPrime[i - 1];
                    maxSecond = segmentPrime[i];
                    maximum = temp;
                }
            }

            printf("%d,%d are closest, %d,%d are most distant.\n", minFirst, minSecond, maxFirst, maxSecond);
        }
	}

	return 0;
}
