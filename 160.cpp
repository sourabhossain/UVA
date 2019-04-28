#include <bits/stdc++.h>
#define SIZE 101

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

int main()
{
    sieve();
    int n, length = prime.size();

    while(scanf("%d", &n) && n) {
        map<int, int> nod;
        multiset<int> ans;

        for(int j = 2; j <= n; j++) {
            int temp = j;

            for(int i = 0; i < length; i++) {
                while(temp > 1 && temp % prime[i] == 0) {
                    nod[prime[i]]++;
                    temp /= prime[i];
                }
            }
        }

        for(auto it : nod) {
            ans.insert(it.second);
        }

        printf("%3d! =", n);
        int n = 0;

        for(multiset<int>::reverse_iterator it = ans.rbegin(); it != ans.rend(); ++it) {
            if(n++ == 15) {
                printf("\n      ");
            }

            printf("%3d", *it);
        }
        putchar('\n');
    }

    return 0;
}
