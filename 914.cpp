#include <bits/stdc++.h>
#define SIZE 1000001

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
    sieve();
    int T, l, u, temp;

    scanf("%d", &T);

    while(T--) {
        scanf("%d%d", &l, &u);

        if(l > u) {
            swap(l, u);
        }

        if(l < 3) {
            temp = 2;
            l = 3;
        } else if(l & 1) {
            while(l <= u) {
                if(isPrime(l)) {
                    temp = l;
                    l += 2;
                    break;
                }

                l += 2;
            }
        } else {
            l++;

            while(l <= u) {
                if(isPrime(l)) {
                    temp = l;
                    l += 2;
                    break;
                }

                l += 2;
            }
        }

        map<int, int> c;

        while(l <= u) {
            if(isPrime(l)) {
                c[l - temp]++;
                temp = l;
            }

            l += 2;
        }

        if(c.size() < 1) {
            puts("No jumping champion");
        } else {
            int maximum = 0, ans;
            bool ck = false;

            for(map<int, int>::iterator it = c.begin(); it != c.end(); it++) {
                if(it->second == maximum) {
                    ck = true;
                } else if(maximum < it->second) {
                    maximum = it->second;
                    ans = it->first;
                    ck = false;
                }
            }

            if(ck) {
                puts("No jumping champion");
            } else {
                printf("The jumping champion is %d\n", ans);
            }
        }
    }

    return 0;
}
