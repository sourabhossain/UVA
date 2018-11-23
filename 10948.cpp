#include <bits/stdc++.h>
#define SIZE 1000002

using namespace std;

int prime[(SIZE >> 6) + 2];
vector<int> p;

#define CHECK(n) (prime[n >> 6] & (1 << ((n % 64) >> 1)))
#define SET(n) (prime[n >> 6] |= (1 << ((n % 64) >> 1)))

void sieve() {
	int root = sqrt(SIZE);
	p.push_back(2);

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

bool isPrime(int n) {
	return n > 1 && (n == 2 || ((n & 1) && !CHECK(n)));
}

int main()
{
    sieve();
    int n, length = p.size();

    while(scanf("%d", &n) && n) {
        bool ck = true;

        for(int i = 0, temp; i < length; i++) {
            temp = n - p[i];

            if(temp < p[i]) {
                break;
            } else if(isPrime(temp)) {
                printf("%d:\n%d+%d\n", n, p[i], temp);
                ck = false;
                break;
            }
        }

        if(ck) {
            printf("%d:\nNO WAY!\n", n);
        }
    }

    return 0;
}
